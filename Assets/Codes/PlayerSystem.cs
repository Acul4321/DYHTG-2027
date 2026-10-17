using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

public class PlayerSystem : MonoBehaviour
{
    private UdpClient udp;
    public static PlayerSystem Instance;
    private CancellationTokenSource cts;
    private bool hasSnapshot;
    private readonly Dictionary<string, Player> playersByDeviceId =
        new Dictionary<string, Player>(StringComparer.Ordinal);

    public IReadOnlyList<Player> Players { get; private set; } = Array.Empty<Player>();
    public Player LocalPlayer => GetPlayer(GetUniqueID());

    public Player GetPlayer(string machineId)
    {
        TryGetPlayer(machineId, out Player player);
        return player;
    }

    public bool TryGetPlayer(string machineId, out Player player)
    {
        player = null;
        return !string.IsNullOrEmpty(machineId)
            && playersByDeviceId.TryGetValue(machineId, out player);
    }

    public int SnapshotRevision { get; private set; }
    public bool NeedsSnapshot { get; private set; }
    public int HeartbeatInterval { get; private set; } = 5;
    public DateTime LastHeartbeatAckUtc { get; private set; }
    public string LastServerError { get; private set; }

    public event Action PlayersChanged;
    public event Action<string> ServerErrorReceived;

    [SerializeField] private string serverIP = "127.0.0.1";
    [SerializeField] private int serverPort = 7777;
    [SerializeField] private string playerName = "Alice";

    async void Start()
    {
        Instance = this;
        cts = new CancellationTokenSource();
        CancellationToken cancellationToken = cts.Token;
        try
        {
            udp = new UdpClient();
            udp.Connect(serverIP, serverPort);
        }
        catch (Exception exception) when (exception is SocketException || exception is ArgumentException)
        {
            Debug.LogWarning($"[UDP] Connection setup failed for {serverIP}:{serverPort}: {exception.Message}");
            udp?.Close();
            udp = null;
            return;
        }
        Debug.Log($"[UDP] Socket ready. Local: {udp.Client.LocalEndPoint}; server: {serverIP}:{serverPort}. Server connection is not yet confirmed.");
        await SendJoinMessage();
        await Task.WhenAll(ReceiveLoop(cancellationToken), HeartbeatLoop(cancellationToken));
    }

    private Task SendJoinMessage()
    {
        string name = playerName?.Trim();
        if (string.IsNullOrEmpty(name) || name.Length > 32)
        {
            Debug.LogWarning("Player name must contain between 1 and 32 characters");
            return Task.CompletedTask;
        }

        Debug.Log($"[UDP] Sending JOIN to {serverIP}:{serverPort}. Name: {name}; device: {GetUniqueID()}. Waiting for snapshot (101).");
        return SendMessageAsync(new JoinMessage
        {
            message_id = 1,
            device_id = GetUniqueID(),
            name = name
        });
    }

    private async Task HeartbeatLoop(CancellationToken cancellationToken)
    {
        try
        {
            while (!cancellationToken.IsCancellationRequested)
            {
                await Task.Delay(TimeSpan.FromSeconds(HeartbeatInterval), cancellationToken);
                cancellationToken.ThrowIfCancellationRequested();
                if (hasSnapshot)
                {
                    await SendMessageAsync(new LobbyRequestMessage
                    {
                        message_id = 2,
                        device_id = GetUniqueID()
                    });
                }
                else
                {
                    // Retry a lost JOIN or rejoin after the server expires this device.
                    await SendJoinMessage();
                }
            }
        }
        catch (OperationCanceledException) when (cancellationToken.IsCancellationRequested)
        {
            // Destroying the component stops the heartbeat timer.
        }
    }

    async Task ReceiveLoop(CancellationToken cancellationToken)
    {
        while (!cancellationToken.IsCancellationRequested)
        {
            try
            {
                UdpReceiveResult result =
                    await udp.ReceiveAsync();

                string message =
                    Encoding.UTF8.GetString(result.Buffer);

                if (!cancellationToken.IsCancellationRequested)
                    ReceiveNetworkMessage(message);
            }
            catch (ObjectDisposedException)
            {
                break;
            }
            catch (SocketException exception)
            {
                if (cancellationToken.IsCancellationRequested)
                    break;

                Debug.LogWarning($"[UDP] Receive failed from {serverIP}:{serverPort} ({exception.SocketErrorCode}): {exception.Message}");
            }
        }
    }

    public void ReceiveNetworkMessage(string json)
    {
        if (string.IsNullOrWhiteSpace(json))
        {
            Debug.LogWarning("Received an empty network message");
            return;
        }

        LobbyServerMessage message;
        try
        {
            message = JsonUtility.FromJson<LobbyServerMessage>(json);
        }
        catch (ArgumentException exception)
        {
            Debug.LogWarning($"Invalid network message: {exception.Message}");
            return;
        }

        if (message == null)
        {
            Debug.LogWarning("Received a null network message");
            return;
        }

        switch (message.message_id)
        {
            case 101:
                HandleSnapshotMessage(message);
                break;
            case 102:
                HandleAddedMessage(message);
                break;
            case 103:
                HandleUpdatedMessage(message);
                break;
            case 104:
                HandleRemovedMessage(message);
                break;
            case 105:
                HandleHeartbeatAckMessage(message);
                break;
            case 199:
                HandleServerErrorMessage(message);
                break;
            case 1001:
                NetworkHandle.HandleCastSpellMessage(
                    new NetworkSendObject(message.message_id, message.device_id, message.data));
                break;
            default:
                Debug.LogWarning($"Unknown network message ID: {message.message_id}");
                break;
        }
    }

    private void HandleSnapshotMessage(SnapshotMessage snapshot)
    {
        if (snapshot == null || snapshot.players == null)
        {
            Debug.LogWarning("Snapshot is missing its player list");
            return;
        }

        if (hasSnapshot && snapshot.revision < SnapshotRevision)
            return;

        var deviceIds = new HashSet<string>();
        foreach (Player player in snapshot.players)
        {
            if (!IsValidPlayer(player) || !deviceIds.Add(player.device_id))
            {
                Debug.LogWarning("Snapshot contains an invalid player");
                return;
            }
        }

        bool joinConfirmed = !hasSnapshot && udp != null
            && snapshot.device_id == GetUniqueID();
        Players = Array.AsReadOnly(snapshot.players);
        SnapshotRevision = snapshot.revision;
        hasSnapshot = true;
        NeedsSnapshot = false;
        if (snapshot.heartbeat_interval > 0)
            HeartbeatInterval = snapshot.heartbeat_interval;
        if (joinConfirmed)
            Debug.Log($"[UDP] Network On — server {serverIP}:{serverPort} confirmed JOIN. Local: {udp.Client.LocalEndPoint}; device: {snapshot.device_id}; players: {Players.Count}; revision: {SnapshotRevision}; heartbeat: every {HeartbeatInterval}s.");
        NotifyPlayersChanged();
    }

    private static bool IsValidPlayer(Player player)
    {
        return player != null && !string.IsNullOrWhiteSpace(player.device_id)
            && !string.IsNullOrWhiteSpace(player.name);
    }

    private bool CanApplyDelta(int revision)
    {
        if (hasSnapshot && revision <= SnapshotRevision)
            return false;
        if (!hasSnapshot || NeedsSnapshot || revision != SnapshotRevision + 1)
        {
            RequestSnapshot();
            return false;
        }
        return true;
    }

    private void HandleAddedMessage(LobbyServerMessage message)
    {
        if (!CanApplyDelta(message.revision))
            return;
        var players = new List<Player>(Players);
        if (!IsValidPlayer(message.player)
            || players.Exists(player => player.device_id == message.player.device_id))
        {
            Debug.LogWarning("Invalid added player message; requesting snapshot");
            RequestSnapshot();
            return;
        }
        players.Add(message.player);
        ApplyPlayers(players, message.revision);
    }

    private void HandleUpdatedMessage(LobbyServerMessage message)
    {
        if (!CanApplyDelta(message.revision))
            return;
        var players = new List<Player>(Players);
        int index = IsValidPlayer(message.player)
            ? players.FindIndex(player => player.device_id == message.player.device_id) : -1;
        if (index < 0)
        {
            Debug.LogWarning("Invalid updated player message; requesting snapshot");
            RequestSnapshot();
            return;
        }
        players[index].name = message.player.name;
        ApplyPlayers(players, message.revision);
    }

    private void HandleRemovedMessage(LobbyServerMessage message)
    {
        if (!CanApplyDelta(message.revision))
            return;
        var players = new List<Player>(Players);
        if (string.IsNullOrWhiteSpace(message.device_id)
            || players.RemoveAll(player => player.device_id == message.device_id) == 0)
        {
            Debug.LogWarning("Invalid removed player message; requesting snapshot");
            RequestSnapshot();
            return;
        }
        ApplyPlayers(players, message.revision);
    }

    private void ApplyPlayers(List<Player> players, int revision)
    {
        Players = players.AsReadOnly();
        SnapshotRevision = revision;
        NotifyPlayersChanged();
    }

    private void NotifyPlayersChanged()
    {
        playersByDeviceId.Clear();
        foreach (Player player in Players)
            playersByDeviceId.Add(player.device_id, player);

        var message = new StringBuilder($"Player list updated (revision {SnapshotRevision}, {Players.Count} players):");
        foreach (Player player in Players)
            message.AppendLine().Append($"- {player.name} (device_id: {player.device_id})");
        Debug.Log(message.ToString());
        PlayersChanged?.Invoke();
    }

    private void HandleHeartbeatAckMessage(LobbyServerMessage message)
    {
        LastHeartbeatAckUtc = DateTime.UtcNow;
        if (!hasSnapshot || NeedsSnapshot || message.revision > SnapshotRevision)
            RequestSnapshot(retry: true);
    }

    private void HandleServerErrorMessage(LobbyServerMessage message)
    {
        if (string.IsNullOrWhiteSpace(message.code))
        {
            Debug.LogWarning("Server error message is missing its code");
            return;
        }
        LastServerError = message.code;
        if (message.code == "unknown_player")
        {
            // The heartbeat loop will JOIN again before sending more heartbeats.
            hasSnapshot = false;
            NeedsSnapshot = true;
        }
        Debug.LogWarning($"Server error: {message.code}");
        ServerErrorReceived?.Invoke(message.code);
    }

    private void RequestSnapshot(bool retry = false)
    {
        bool alreadyRequested = NeedsSnapshot;
        NeedsSnapshot = true;
        if (udp != null && (!alreadyRequested || retry))
            SendNetworkMessage(3, "");
    }
    void OnDestroy()
    {
        cts?.Cancel();
        if (udp != null)
            Debug.Log($"[UDP] Closing socket for {serverIP}:{serverPort}; heartbeats stopped.");
        udp?.Close();
        cts?.Dispose();
        if (Instance == this)
            Instance = null;
    }

    public string GetUniqueID()
    {
        return SystemInfo.deviceUniqueIdentifier;
    }

    public async void SendNetworkMessage(int message_id, string datas)
    {
        var message = new NetworkSendObject(message_id, GetUniqueID(), datas);
        await SendMessageAsync(message);
    }

    private async Task SendMessageAsync(object message)
    {
        string json = JsonUtility.ToJson(message, true);
        byte[] bytes = Encoding.UTF8.GetBytes(json);
        try
        {
            await udp.SendAsync(bytes, bytes.Length);
        }
        catch (ObjectDisposedException)
        {
            // Shutdown can close the socket while a message is being sent.
        }
        catch (SocketException exception)
        {
            Debug.LogWarning($"[UDP] Send failed to {serverIP}:{serverPort} ({exception.SocketErrorCode}): {exception.Message}");
        }
        Debug.Log("Send message" + message);
    }
}

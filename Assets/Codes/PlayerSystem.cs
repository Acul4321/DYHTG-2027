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
    // Chosen by drawing 1-4 at startup; 0 means no number has been selected.
    [NonSerialized] public int aruconum;
    private CancellationTokenSource cts;
    private bool hasSnapshot;
    private readonly Dictionary<int, Player> playersByArucoNumber = new Dictionary<int, Player>();

    public IReadOnlyList<Player> Players { get; private set; } = Array.Empty<Player>();
    public Player LocalPlayer => GetPlayer(aruconum);
    public int[] Signature { get; private set; }
    public bool HasSignature => SignatureData.IsValid(Signature);

    public GameObject[] playerDisplays;
    public Player GetPlayer(int arucoNumber)
    {
        TryGetPlayer(arucoNumber, out Player player);
        return player;
    }

    public bool TryGetPlayer(int arucoNumber, out Player player)
    {
        player = null;
        return IsValidArucoNumber(arucoNumber)
            && playersByArucoNumber.TryGetValue(arucoNumber, out player);
    }

    public static bool IsValidArucoNumber(int number) => number >= 1 && number <= 4;

    public void SelectArucoNumber(int number)
    {
        if (!IsValidArucoNumber(number) || IsValidArucoNumber(aruconum))
            return;
        aruconum = number;
        LastServerError = null;
        // Start also attempts JOIN if selection happened before socket creation.
        if (udp != null)
            _ = SendJoinMessage();
    }

    public bool SubmitSignature(int[] drawing)
    {
        if (!IsValidArucoNumber(aruconum) || !SignatureData.IsValid(drawing))
            return false;
        Signature = (int[])drawing.Clone();
        LastServerError = null;
        if (udp != null)
            _ = SendJoinMessage();
        return true;
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

    private void Awake()
    {
        Instance = this;
        UpdatePlayerDisplays();
    }

    async void Start()
    {
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
        if (!IsValidArucoNumber(aruconum) || !HasSignature || udp == null)
            return Task.CompletedTask;

        Debug.Log($"[UDP] Sending JOIN with signature to {serverIP}:{serverPort}; aruconum: {aruconum}. Waiting for snapshot (101).");
        return SendMessageAsync(new JoinMessage
        {
            message_id = 1,
            aruconum = aruconum,
            signature = Signature
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
                if (!IsValidArucoNumber(aruconum) || !HasSignature)
                    continue;
                if (hasSnapshot)
                {
                    await SendMessageAsync(new LobbyRequestMessage
                    {
                        message_id = 2,
                        aruconum = aruconum
                    });
                }
                else
                {
                    // Retry a lost JOIN or rejoin after the server expires this number.
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
                    new NetworkSendObject(message.message_id, message.aruconum, message.data));
                break;
            default:
                Debug.LogWarning($"Unknown network message ID: {message.message_id}");
                break;
        }
    }

    private void HandleSnapshotMessage(SnapshotMessage snapshot)
    {
        if (!IsValidArucoNumber(aruconum) || snapshot == null || snapshot.aruconum != aruconum)
            return;
        if (snapshot.players == null)
        {
            Debug.LogWarning("Snapshot is missing its player list");
            return;
        }

        if (hasSnapshot && snapshot.revision < SnapshotRevision)
            return;

        var arucoNumbers = new HashSet<int>();
        foreach (Player player in snapshot.players)
        {
            if (!IsValidPlayer(player) || !arucoNumbers.Add(player.aruconum))
            {
                Debug.LogWarning("Snapshot contains an invalid player");
                return;
            }
        }

        if (!arucoNumbers.Contains(aruconum))
            return;

        bool joinConfirmed = !hasSnapshot && udp != null
            && snapshot.aruconum == aruconum;
        Players = Array.AsReadOnly(snapshot.players);
        SnapshotRevision = snapshot.revision;
        hasSnapshot = true;
        NeedsSnapshot = false;
        if (snapshot.heartbeat_interval > 0)
            HeartbeatInterval = snapshot.heartbeat_interval;
        if (joinConfirmed)
            Debug.Log($"[UDP] Network On — server {serverIP}:{serverPort} confirmed JOIN. Local: {udp.Client.LocalEndPoint}; aruconum: {snapshot.aruconum}; players: {Players.Count}; revision: {SnapshotRevision}; heartbeat: every {HeartbeatInterval}s.");
        NotifyPlayersChanged();
    }

    private static bool IsValidPlayer(Player player)
    {
        return player != null && IsValidArucoNumber(player.aruconum)
            && SignatureData.IsValid(player.signature);
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
            || players.Exists(player => player.aruconum == message.player.aruconum))
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
            ? players.FindIndex(player => player.aruconum == message.player.aruconum) : -1;
        if (index < 0)
        {
            Debug.LogWarning("Invalid updated player message; requesting snapshot");
            RequestSnapshot();
            return;
        }
        players[index] = message.player;
        ApplyPlayers(players, message.revision);
    }

    private void HandleRemovedMessage(LobbyServerMessage message)
    {
        if (!CanApplyDelta(message.revision))
            return;
        var players = new List<Player>(Players);
        if (!IsValidArucoNumber(message.aruconum)
            || players.RemoveAll(player => player.aruconum == message.aruconum) == 0)
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
        playersByArucoNumber.Clear();
        foreach (Player player in Players)
            playersByArucoNumber.Add(player.aruconum, player);

        var message = new StringBuilder($"Player list updated (revision {SnapshotRevision}, {Players.Count} players):");
        foreach (Player player in Players)
            message.AppendLine().Append($"- Player {player.aruconum}, HP {player.hp}, signature {player.signature.Length / 3} points");
        Debug.Log(message.ToString());
        UpdatePlayerDisplays();
        PlayersChanged?.Invoke();
    }

    private void UpdatePlayerDisplays()
    {
        if (playerDisplays == null) return;
        for (int i = 0; i < Mathf.Min(4, playerDisplays.Length); i++)
        {
            GameObject display = playerDisplays[i];
            if (display == null) continue;
            PlayerDisplayView view = display.GetComponent<PlayerDisplayView>();
            if (view == null) view = display.AddComponent<PlayerDisplayView>();
            view.SetPlayer(GetPlayer(i + 1));
        }
    }

    private void HandleHeartbeatAckMessage(LobbyServerMessage message)
    {
        if (!IsValidArucoNumber(aruconum) || message.aruconum != aruconum)
            return;
        LastHeartbeatAckUtc = DateTime.UtcNow;
        if (!hasSnapshot || NeedsSnapshot || message.revision > SnapshotRevision)
            RequestSnapshot(retry: true);
    }

    private void HandleServerErrorMessage(LobbyServerMessage message)
    {
        if (!IsValidArucoNumber(aruconum) || message.aruconum != aruconum)
            return;
        if (string.IsNullOrWhiteSpace(message.code))
        {
            Debug.LogWarning("Server error message is missing its code");
            return;
        }
        LastServerError = message.code;
        if (message.code == "invalid_signature")
        {
            Signature = null;
            hasSnapshot = false;
            NeedsSnapshot = false;
        }
        if (message.code == "aruconum_in_use")
        {
            aruconum = 0;
            hasSnapshot = false;
            NeedsSnapshot = false;
            SnapshotRevision = 0;
            Players = Array.Empty<Player>();
            NotifyPlayersChanged();
        }
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

    public async void SendNetworkMessage(int message_id, string datas)
    {
        if (!IsValidArucoNumber(aruconum) || !HasSignature)
            return;
        if (udp == null)
        {
            Debug.LogWarning("[UDP] Cannot send a message because the socket is not ready.");
            return;
        }

        Debug.Log($"[UDP] Sending message {message_id} with data '{datas}' to {serverIP}:{serverPort}.");
        var message = new NetworkSendObject(message_id, aruconum, datas);
        await SendMessageAsync(message);
    }

    private async Task SendMessageAsync(object message)
    {
        string json = JsonUtility.ToJson(message);
        byte[] bytes = Encoding.UTF8.GetBytes(json);
        try
        {
            await udp.SendAsync(bytes, bytes.Length);
            Debug.Log($"[UDP] Sent datagram ({bytes.Length} bytes) to {serverIP}:{serverPort}.");
        }
        catch (ObjectDisposedException)
        {
            // Shutdown can close the socket while a message is being sent.
        }
        catch (SocketException exception)
        {
            Debug.LogWarning($"[UDP] Send failed to {serverIP}:{serverPort} ({exception.SocketErrorCode}): {exception.Message}");
        }
    }
}

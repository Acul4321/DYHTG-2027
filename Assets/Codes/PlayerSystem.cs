using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using SpellBattle.Tracking;
using TMPro;
using UnityEngine.UI;

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
    public GameObject fireballPrefab;
    public GameObject fireballWarningPrefab;
    public GameObject targetIndicatorPrefab;
    public GameObject shieldPrefab;
    public GameObject reflectPrefab;

    public GameObject CastStatusGameObject;
    public GameObject LoadingScreen;
    public bool test;
    private float castStatusRemaining;
    private bool awaitingCastConfirmation;
    [Min(0.01f)] public float defenseSizeMetres = 0.25f;
    [Min(0.01f)] public float reflectSizeMetres = 0.15f;
    public const float DefenseDuration = 2f;
    private sealed class DefenseVisual
    {
        public string Spell;
        public GameObject Instance;
        public GameObject Prefab;
        public float Remaining;
    }
    private readonly DefenseVisual[] defenseVisuals = new DefenseVisual[4];
    [Min(0.01f)] public float fireballSizeMetres = 0.12f;
    private readonly List<float> incomingFireballs = new List<float>();
    public int IncomingFireballCount => incomingFireballs.Count;
    public GameObject FireballWarning { get; private set; }
    private Slider fireballWarningSlider;
    public int TargetArucoNumber { get; private set; }
    private Camera targetingCamera;
    private ArucoPlayerDisplayPresenter displayPresenter;



    public TMP_Text hp;
    public Slider hpslider;
    public GameObject defendMessage;
    public GameObject reflectMessage;
    public GameObject DefenseMessage { get; private set; }
    private Slider defenseMessageSlider;

    public void UpdateTarget(Camera camera, ArucoPlayerDisplayPresenter presenter)
    {
        targetingCamera = camera;
        displayPresenter = presenter;
        int selected = 0;
        float closest = float.PositiveInfinity;
        if (camera && presenter != null && LocalPlayer != null && playerDisplays != null)
        {
            for (int i = 0; i < Mathf.Min(4, playerDisplays.Length); i++)
            {
                int number = i + 1;
                if (number == aruconum || GetPlayer(number) == null || !presenter.HasPosition(i)) continue;
                Vector3 viewport = camera.WorldToViewportPoint(presenter.GetMarkerPosition(i));
                if (viewport.z <= 0 || viewport.x < 0 || viewport.x > 1 || viewport.y < 0 || viewport.y > 1) continue;
                float distance = new Vector2((viewport.x - 0.5f) * camera.aspect, viewport.y - 0.5f).sqrMagnitude;
                if (distance < closest) { closest = distance; selected = number; }
            }
        }
        SetTarget(selected);
    }

    private void SetTarget(int number)
    {
        TargetArucoNumber = number;
        if (playerDisplays == null) return;
        for (int i = 0; i < Mathf.Min(4, playerDisplays.Length); i++)
        {
            if (!playerDisplays[i]) continue;
            var view = playerDisplays[i].GetComponent<PlayerDisplayView>();
            if (view == null) view = playerDisplays[i].AddComponent<PlayerDisplayView>();
            if (!view.targetIndicatorPrefab) view.targetIndicatorPrefab = targetIndicatorPrefab;
            view.SetTargeted(i + 1 == number);
        }
    }

    public bool TryCastSpell(string spellName)
    {
        if (!test && !hasSnapshot)
        {
            return false;
        }
        UpdateTarget(targetingCamera, displayPresenter);
        string failure = !HasSignature ? "Sign your name before casting."
            : udp == null ? "The network socket is not ready."
            : LocalPlayer == null ? "Waiting for the server to confirm JOIN (snapshot 101)."
            : spellName != "Fireball" && spellName != "Shield" && spellName != "Reflect" ? "Unknown spell."
            : spellName == "Fireball" && TargetArucoNumber == 0 ? "Face another player's marker to target Fireball."
            : null;
        if (failure != null)
        {
            Debug.LogWarning($"[Spell] Cannot cast {spellName}: {failure}", this);
            ShowCastStatus("Fails");
            return false;
        }
        awaitingCastConfirmation = true;
        SendNetworkMessage(1001, spellName, spellName == "Fireball" ? TargetArucoNumber : 0);
        return true;
    }

    public void ShowCastStatus(string status)
    {
        if (!CastStatusGameObject) return;
        var label = CastStatusGameObject.GetComponentInChildren<TMP_Text>(true);
        if (label) label.text = status;
        CastStatusGameObject.SetActive(true);
        castStatusRemaining = 1.3f;
    }

    private bool TryGetSpellPosition(int number, out Vector3 position)
    {
        position = Vector3.zero;
        if (!IsValidArucoNumber(number) || GetPlayer(number) == null) return false;
        if (number == aruconum && targetingCamera)
        {
            position = targetingCamera.transform.position;
            return true;
        }
        if (playerDisplays == null || number > playerDisplays.Length || !playerDisplays[number - 1]
            || displayPresenter == null || !displayPresenter.HasPosition(number - 1)) return false;
        position = playerDisplays[number - 1].transform.position;
        return true;
    }

    public FireballObject SpawnFireball(int caster, int target)
    {
        if (!fireballPrefab || caster == target || !TryGetSpellPosition(caster, out Vector3 origin)
            || !TryGetSpellPosition(target, out Vector3 destination)) return null;
        Vector3 direction = destination - origin;
        if (direction.sqrMagnitude < 0.0001f) return null;
        origin += direction.normalized * Mathf.Min(0.2f, direction.magnitude * 0.25f);
        GameObject instance = Instantiate(fireballPrefab, origin, Quaternion.LookRotation(direction));
        FireballObject fireball = instance.GetComponent<FireballObject>();
        if (!fireball) fireball = instance.AddComponent<FireballObject>();
        fireball.Initialize(destination, targetingCamera);
        var sprite = instance.GetComponentInChildren<SpriteRenderer>();
        if (sprite && sprite.bounds.size.magnitude > 0)
            instance.transform.localScale *= fireballSizeMetres / Mathf.Max(sprite.bounds.size.x, sprite.bounds.size.y, sprite.bounds.size.z);
        return fireball;
    }

    public void HandleFireballCast(int caster, int target)
    {
        if (target == aruconum && caster != target && LocalPlayer != null)
        {
            incomingFireballs.Add(FireballObject.FlightDuration);
            if (!FireballWarning && fireballWarningPrefab)
            {
                FireballWarning = Instantiate(fireballWarningPrefab);
                fireballWarningSlider = FireballWarning.GetComponentInChildren<Slider>(true);
                if (fireballWarningSlider)
                {
                    fireballWarningSlider.interactable = false;
                    fireballWarningSlider.wholeNumbers = false;
                    fireballWarningSlider.minValue = 0;
                    fireballWarningSlider.maxValue = FireballObject.FlightDuration;
                }
            }
            AdvanceFireballWarnings(0);
        }
        SpawnFireball(caster, target);
    }

    public void HandleDefenseCast(int caster, string spell)
    {
        if (GetPlayer(caster) == null || (spell != "Shield" && spell != "Reflect")) return;
        int index = caster - 1;
        DefenseVisual visual = defenseVisuals[index];
        if (visual != null && visual.Spell != spell)
        {
            DestroyDefenseVisual(visual);
            visual = null;
        }
        if (visual == null)
        {
            visual = new DefenseVisual { Spell = spell, Prefab = spell == "Shield" ? shieldPrefab : reflectPrefab };
            defenseVisuals[index] = visual;
        }
        visual.Remaining = DefenseDuration;
        if (caster == aruconum && !DefenseMessage)
        {
            GameObject prefab = spell == "Shield" ? defendMessage : reflectMessage;
            if (prefab)
            {
                DefenseMessage = Instantiate(prefab);
                DefenseMessage.SetActive(true);
                defenseMessageSlider = DefenseMessage.GetComponentInChildren<Slider>(true);
                if (defenseMessageSlider)
                {
                    defenseMessageSlider.interactable = false;
                    defenseMessageSlider.wholeNumbers = false;
                    defenseMessageSlider.minValue = 0;
                    defenseMessageSlider.maxValue = DefenseDuration;
                }
            }
        }
        AdvanceDefenseEffects(0);
    }

    public GameObject GetDefenseEffect(int arucoNumber) =>
        IsValidArucoNumber(arucoNumber) ? defenseVisuals[arucoNumber - 1]?.Instance : null;

    public void AdvanceDefenseEffects(float deltaTime)
    {
        for (int i = 0; i < defenseVisuals.Length; i++)
        {
            DefenseVisual visual = defenseVisuals[i];
            if (visual == null) continue;
            visual.Remaining -= Mathf.Max(0, deltaTime);
            if (visual.Remaining <= 0 || GetPlayer(i + 1) == null)
            {
                DestroyDefenseVisual(visual);
                defenseVisuals[i] = null;
                continue;
            }
            if (i + 1 == aruconum && defenseMessageSlider)
                defenseMessageSlider.SetValueWithoutNotify(visual.Remaining);
            if (!targetingCamera || !TryGetSpellPosition(i + 1, out Vector3 position))
            {
                if (visual.Instance) visual.Instance.SetActive(false);
                continue;
            }
            if (!visual.Instance && visual.Prefab)
            {
                // Keep caster placement and world size outside the prefab's animated transform.
                visual.Instance = new GameObject(visual.Spell + " defense " + (i + 1));
                GameObject animatedVisual = Instantiate(visual.Prefab, visual.Instance.transform, false);
                animatedVisual.transform.localPosition = Vector3.zero;
                var sprite = visual.Instance.GetComponentInChildren<SpriteRenderer>();
                if (sprite && sprite.sprite)
                {
                    Vector3 size = sprite.bounds.size;
                    float extent = Mathf.Max(size.x, size.y, size.z);
                    float sizeMetres = visual.Spell == "Reflect" ? reflectSizeMetres : defenseSizeMetres;
                    if (extent > 0) visual.Instance.transform.localScale *= sizeMetres / extent;
                }
            }
            if (!visual.Instance) continue;
            visual.Instance.SetActive(true);
            visual.Instance.transform.position = i + 1 == aruconum
                ? position + targetingCamera.transform.forward * 0.45f - targetingCamera.transform.up * 0.17f
                : position + Vector3.up * 0.07f;
            visual.Instance.transform.rotation = targetingCamera.transform.rotation;
        }
    }

    private void DestroyDefenseVisual(DefenseVisual visual)
    {
        if (IsValidArucoNumber(aruconum) && defenseVisuals[aruconum - 1] == visual)
            DestroyDefenseMessage();
        if (!visual.Instance) return;
        visual.Instance.SetActive(false);
        if (Application.isPlaying) Destroy(visual.Instance);
        else DestroyImmediate(visual.Instance);
    }

    private void DestroyDefenseMessage()
    {
        if (DefenseMessage)
        {
            DefenseMessage.SetActive(false);
            if (Application.isPlaying) Destroy(DefenseMessage);
            else DestroyImmediate(DefenseMessage);
        }
        DefenseMessage = null;
        defenseMessageSlider = null;
    }

    private void Update()
    {
        if (castStatusRemaining > 0)
        {
            castStatusRemaining -= Time.unscaledDeltaTime;
            if (castStatusRemaining <= 0 && CastStatusGameObject)
                CastStatusGameObject.SetActive(false);
        }
        AdvanceFireballWarnings(Time.unscaledDeltaTime);
        AdvanceDefenseEffects(Time.unscaledDeltaTime);
    }

    public void AdvanceFireballWarnings(float deltaTime)
    {
        for (int i = incomingFireballs.Count - 1; i >= 0; i--)
        {
            incomingFireballs[i] -= Mathf.Max(0, deltaTime);
            if (incomingFireballs[i] <= 0) incomingFireballs.RemoveAt(i);
        }
        if (FireballWarning) FireballWarning.SetActive(incomingFireballs.Count > 0);
        float remaining = 0;
        if (incomingFireballs.Count > 0)
        {
            remaining = float.PositiveInfinity;
            foreach (float flight in incomingFireballs) remaining = Mathf.Min(remaining, flight);
        }
        if (fireballWarningSlider) fireballWarningSlider.SetValueWithoutNotify(remaining);
    }
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
        if (LoadingScreen) LoadingScreen.SetActive(false);
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

        if (!hasSnapshot && LoadingScreen) LoadingScreen.SetActive(!test);
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
                HandleCastSpellMessage(
                    new NetworkSendObject(message.message_id, message.aruconum, message.data, message.target));
                break;
            case 1002:
                HandleHealthUpdatedMessage(message);
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
        if (LoadingScreen) LoadingScreen.SetActive(false);
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

    private void HandleHealthUpdatedMessage(LobbyServerMessage message)
    {
        if (!CanApplyDelta(message.revision)) return;
        Player player = GetPlayer(message.aruconum);
        if (player == null || message.hp < 0 || message.hp > 100 || message.deaths < 0)
        {
            RequestSnapshot();
            return;
        }
        player.hp = message.hp;
        player.deaths = message.deaths;
        SnapshotRevision = message.revision;
        NotifyPlayersChanged();
    }

    private void UpdateLocalHealthDisplay()
    {
        Player player = LocalPlayer;
        if (hp) hp.text = player == null ? "" : player.hp.ToString();
        if (!hpslider) return;
        hpslider.interactable = false;
        hpslider.wholeNumbers = false;
        hpslider.minValue = 0;
        hpslider.maxValue = 100;
        hpslider.SetValueWithoutNotify(player == null ? 0 : player.hp);
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
        UpdateTarget(targetingCamera, displayPresenter);
        UpdateLocalHealthDisplay();
        AdvanceDefenseEffects(0);
        if (LocalPlayer == null)
        {
            DestroyDefenseMessage();
            incomingFireballs.Clear();
            if (FireballWarning) FireballWarning.SetActive(false);
        }
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
    public void HandleCastSpellMessage(NetworkSendObject message)
    {
        if (message == null || string.IsNullOrEmpty(message.data)) return;
        var caster = GetPlayer(message.aruconum);
        if (caster == null) return;
        if (message.aruconum == aruconum)
        {
            awaitingCastConfirmation = false;
            ShowCastStatus(message.data + "!");
        }
        caster.RunSpell(message.data);
        if (message.data == "Fireball") HandleFireballCast(message.aruconum, message.target);
        else if (message.data == "Shield" || message.data == "Reflect")
            HandleDefenseCast(message.aruconum, message.data);
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
        if (LoadingScreen) LoadingScreen.SetActive(false);
        if (awaitingCastConfirmation)
        {
            awaitingCastConfirmation = false;
            ShowCastStatus("Fails");
        }
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
        DestroyDefenseMessage();
        foreach (DefenseVisual visual in defenseVisuals)
            if (visual != null) DestroyDefenseVisual(visual);
        if (FireballWarning)
        {
            if (Application.isPlaying) Destroy(FireballWarning);
            else DestroyImmediate(FireballWarning);
        }
        cts?.Cancel();
        if (udp != null)
            Debug.Log($"[UDP] Closing socket for {serverIP}:{serverPort}; heartbeats stopped.");
        udp?.Close();
        cts?.Dispose();
        if (Instance == this)
            Instance = null;
    }

    public async void SendNetworkMessage(int message_id, string datas, int target = 0)
    {
        if (!IsValidArucoNumber(aruconum) || !HasSignature)
            return;
        if (udp == null)
        {
            Debug.LogWarning("[UDP] Cannot send a message because the socket is not ready.");
            return;
        }

        Debug.Log($"[UDP] Sending message {message_id} with data '{datas}' to {serverIP}:{serverPort}.");
        var message = new NetworkSendObject(message_id, aruconum, datas, target);
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
            if (message is NetworkSendObject cast && cast.message_id == 1001)
            {
                awaitingCastConfirmation = false;
                ShowCastStatus("Fails");
            }
            Debug.LogWarning($"[UDP] Send failed to {serverIP}:{serverPort} ({exception.SocketErrorCode}): {exception.Message}");
        }
    }
}

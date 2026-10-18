using TMPro;
using UnityEngine;

public class PlayerDisplayView : MonoBehaviour
{
    private TMP_Text idLabel;
    private TMP_Text hpLabel;
    private TMP_Text deathsLabel;
    private SignatureGraphic signatureGraphic;
    private TMP_Text targetIndicator;
    public GameObject targetIndicatorPrefab;
    private GameObject deathIndicator;
    private int displayedArucoNumber;
    private int displayedDeaths;
    private float deathIndicatorUntil;

    private void Awake()
    {
        BindDeathIndicator();
    }

    private void OnEnable()
    {
        UpdateDeathIndicator();
    }

    private void Update()
    {
        UpdateDeathIndicator();
    }

    private void BindDeathIndicator()
    {
        if (deathIndicator) return;
        foreach (Transform child in GetComponentsInChildren<Transform>(true))
        {
            if (child.name != "deadind") continue;
            deathIndicator = child.gameObject;
            deathIndicator.SetActive(false);
            break;
        }
    }

    private void UpdateDeathIndicator()
    {
        if (!deathIndicator) return;
        bool visible = Time.unscaledTime < deathIndicatorUntil;
        if (deathIndicator.activeSelf != visible) deathIndicator.SetActive(visible);
    }

    public void SetTargeted(bool targeted)
    {
        if (targetIndicator == null)
        {
            if (!targetIndicatorPrefab) return;
            var indicator = Instantiate(targetIndicatorPrefab, transform, false);
            indicator.name = "TargetIndicator";
            targetIndicator = indicator.GetComponent<TMP_Text>();
            if (!targetIndicator) return;
        }
        targetIndicator.gameObject.SetActive(targeted);
    }

    public void SetPlayer(Player player)
    {
        BindDeathIndicator();
        if (player == null || player.aruconum != displayedArucoNumber)
            deathIndicatorUntil = 0;
        else if (player.deaths > displayedDeaths)
            deathIndicatorUntil = Time.unscaledTime + 1f;
        displayedArucoNumber = player == null ? 0 : player.aruconum;
        displayedDeaths = player == null ? 0 : player.deaths;
        UpdateDeathIndicator();
        if (idLabel == null || hpLabel == null || deathsLabel == null || signatureGraphic == null)
            Bind();
        if (idLabel != null) idLabel.text = player == null ? "" : player.aruconum.ToString();
        if (hpLabel != null) hpLabel.text = player == null ? "" : player.hp.ToString();
        if (deathsLabel != null) deathsLabel.text = player == null ? "" : "Deaths: " + player.deaths;
        if (signatureGraphic != null) signatureGraphic.SetSignature(player?.signature);
        // Only update content; the root Canvas stays enabled.
    }

    private void Bind()
    {
        foreach (TMP_Text label in GetComponentsInChildren<TMP_Text>(true))
        {
            if (label.name == "id") idLabel = label;
            else if (label.name == "hpnum") hpLabel = label;
            else if (label.name == "deaths") deathsLabel = label;
            else if (label.name == "name")
            {
                label.enabled = false;
                signatureGraphic = label.GetComponentInChildren<SignatureGraphic>(true);
                if (signatureGraphic == null)
                {
                    var graphic = new GameObject("Signature", typeof(RectTransform), typeof(CanvasRenderer), typeof(SignatureGraphic));
                    var rect = (RectTransform)graphic.transform;
                    rect.SetParent(label.transform, false);
                    rect.anchorMin = Vector2.zero;
                    rect.anchorMax = Vector2.one;
                    rect.offsetMin = rect.offsetMax = Vector2.zero;
                    signatureGraphic = graphic.GetComponent<SignatureGraphic>();
                    signatureGraphic.color = label.color;
                }
            }
        }
    }
}

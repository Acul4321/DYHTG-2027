using TMPro;
using UnityEngine;

public class PlayerDisplayView : MonoBehaviour
{
    private TMP_Text idLabel;
    private TMP_Text hpLabel;
    private SignatureGraphic signatureGraphic;

    public void SetPlayer(Player player)
    {
        if (idLabel == null || hpLabel == null || signatureGraphic == null)
            Bind();
        if (idLabel != null) idLabel.text = player == null ? "" : player.aruconum.ToString();
        if (hpLabel != null) hpLabel.text = player == null ? "" : player.hp.ToString();
        if (signatureGraphic != null) signatureGraphic.SetSignature(player?.signature);
        // Marker tracking owns the root Canvas and visibility; only update content.
    }

    private void Bind()
    {
        foreach (TMP_Text label in GetComponentsInChildren<TMP_Text>(true))
        {
            if (label.name == "id") idLabel = label;
            else if (label.name == "hpnum") hpLabel = label;
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

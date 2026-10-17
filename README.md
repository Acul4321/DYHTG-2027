UofG GUTS hackathon 2027

At startup, draw 1, 2, 3, or 4 in the casting area and pause after releasing.
The recognized digit is stored in `PlayerSystem.Instance.aruconum` for the current
game session (`0` means unselected). After number selection, "Sign your name" appears. Draw your signature, using
Clear to restart and Done to submit. Pauses between strokes do not submit the
signature. After submission, the area recognizes spell gestures as usual. Short or low-confidence drawings can be retried.

The client joins the server only after number selection and signature submission. `aruconum` identifies
the player in all client/server messages and lookups. If another connected player
already holds that number, the drawing area asks for a different number. Numbers
become available after the previous player times out (15 seconds by default).
Deploy the updated client and server together; machine ID packets are no longer
accepted. See `Assets/server/SpellBattleServer/README.md` for the wire protocol.

Digit templates are in `Assets/PDollar/Resources/GestureSet/Digits`. To check the
selection flow in Unity, run **Tools > Tests > Check Aruco Number Selection**.

Player records store signature drawing points instead of a string name. Each
PlayerDisplay is refreshed by aruconum when the player list changes, including
signature, ID, and HP; removed players are cleared. Marker tracking still controls
visibility and position. Run **Tools > Tests > Check Signatures and Player Displays**
in Unity to check the new flow.

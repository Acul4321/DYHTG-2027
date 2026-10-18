using UnityEngine;

public class FireballObject : MonoBehaviour
{
    public const float FlightDuration = 2f;
    private Vector3 origin;
    private Vector3 destination;
    private float flightTime;
    private Camera viewingCamera;
    private bool initialized;
    private Transform spriteTransform;

    public void Initialize(Vector3 targetPosition, Camera camera)
    {
        origin = transform.position;
        destination = targetPosition;
        flightTime = 0;
        viewingCamera = camera;
        initialized = true;
        var sprite = GetComponentInChildren<SpriteRenderer>();
        spriteTransform = sprite ? sprite.transform : null;
    }

    private void Update() => Advance(Time.unscaledDeltaTime);

    public void Advance(float deltaTime)
    {
        if (!initialized) return;
        flightTime = Mathf.Min(FlightDuration, flightTime + Mathf.Max(0, deltaTime));
        transform.position = Vector3.Lerp(origin, destination, flightTime / FlightDuration);
        // The supplied prefab is a flat sprite, so keep its face visible during flight.
        if (spriteTransform && viewingCamera)
            spriteTransform.rotation = viewingCamera.transform.rotation;
        if (flightTime >= FlightDuration)
        {
            initialized = false;
            if (Application.isPlaying) Destroy(gameObject);
            else DestroyImmediate(gameObject);
        }
    }
}

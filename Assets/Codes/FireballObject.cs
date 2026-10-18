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
    private ParticleSystem[] explosionParticles;
    private bool exploding;

    public void Initialize(Vector3 targetPosition, Camera camera)
    {
        origin = transform.position;
        destination = targetPosition;
        flightTime = 0;
        viewingCamera = camera;
        initialized = true;
        exploding = false;
        explosionParticles = GetComponentsInChildren<ParticleSystem>(true);
        foreach (var particles in explosionParticles)
            particles.Stop(false, ParticleSystemStopBehavior.StopEmittingAndClear);
        var sprite = GetComponentInChildren<SpriteRenderer>();
        spriteTransform = sprite ? sprite.transform : null;
    }

    private void Update() => Advance(Time.unscaledDeltaTime);

    public void Advance(float deltaTime)
    {
        if (exploding)
        {
            foreach (var particles in explosionParticles)
                if (particles && particles.IsAlive(true)) return;
            exploding = false;
            DestroyFireball();
            return;
        }
        if (!initialized) return;
        flightTime = Mathf.Min(FlightDuration, flightTime + Mathf.Max(0, deltaTime));
        transform.position = Vector3.Lerp(origin, destination, flightTime / FlightDuration);
        // The supplied prefab is a flat sprite, so keep its face visible during flight.
        if (spriteTransform && viewingCamera)
            spriteTransform.rotation = viewingCamera.transform.rotation;
        if (flightTime >= FlightDuration)
        {
            initialized = false;
            if (explosionParticles.Length == 0)
            {
                DestroyFireball();
                return;
            }
            foreach (var sprite in GetComponentsInChildren<SpriteRenderer>(true))
                sprite.enabled = false;
            exploding = true;
            foreach (var particles in explosionParticles)
            {
                if (!particles) continue;
                var main = particles.main;
                main.loop = false;
                main.useUnscaledTime = true;
                particles.gameObject.SetActive(true);
                particles.Play(false);
            }
        }
    }

    private void DestroyFireball()
    {
        if (Application.isPlaying) Destroy(gameObject);
        else DestroyImmediate(gameObject);
    }
}

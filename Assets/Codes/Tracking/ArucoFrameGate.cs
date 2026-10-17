using System;

namespace SpellBattle.Tracking
{
    public sealed class ArucoFrameGate
    {
        double lastTimestamp = double.NegativeInfinity;
        float nextTime;
        public bool IsDue(float now) => now >= nextTime;
        public bool TryAccept(double timestamp, float now, float interval)
        {
            if (!IsDue(now)) return false;
            nextTime = now + interval;
            if (double.IsNaN(timestamp) || double.IsInfinity(timestamp) || timestamp <= lastTimestamp) return false;
            lastTimestamp = timestamp;
            return true;
        }
        public void Reset() { lastTimestamp = double.NegativeInfinity; nextTime = 0; }
    }
}

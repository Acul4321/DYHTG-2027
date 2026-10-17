using System;

namespace SpellBattle.Tracking
{
    [Serializable]
    public sealed class ArucoMarkerDictionary
    {
        // Row-major, most significant bit is top-left; 1 = white.
        // First four DICT_4X4_50 entries, shared with OpenCV's 4x4 dictionaries.
        // Reference: OpenCV 4.12.0, predefined_dictionaries.hpp (Apache-2.0).
        public int[] patterns = { 0xB532, 0x0F9A, 0x332D, 0x9946 };
        public static ArucoMarkerDictionary CreateDefault() => new ArucoMarkerDictionary();
        public bool TryMatch(ushort observed, out int id, out int clockwiseTurns)
        {
            id = -1; clockwiseTurns = 0;
            if (patterns == null || patterns.Length != 4) return false;
            for (int i = 0; i < patterns.Length; i++)
            {
                if (patterns[i] < 0 || patterns[i] > ushort.MaxValue) return false;
                ushort pattern = (ushort)patterns[i];
                for (int turn = 0; turn < 4; turn++)
                {
                    if (pattern == observed)
                    {
                        if (id >= 0) { id = -1; return false; }
                        id = i; clockwiseTurns = turn;
                    }
                    pattern = RotateClockwise(pattern);
                }
            }
            return id >= 0;
        }

        public static ushort RotateClockwise(ushort pattern)
        {
            int result = 0;
            for (int row = 0; row < 4; row++)
            for (int col = 0; col < 4; col++)
                if ((pattern & (1 << (15 - row * 4 - col))) != 0)
                    result |= 1 << (15 - col * 4 - (3 - row));
            return (ushort)result;
        }
    }
}

using Unity.Collections;

namespace SpellBattle.Tracking
{
    public static class ArucoLuminance
    {
        public static bool CopyDownsampled(NativeArray<byte> source, int width, int height, int rowStride,
            int pixelStride, int outputWidth, int outputHeight, byte[] destination)
        {
            if (!source.IsCreated || width <= 0 || height <= 0 || pixelStride <= 0 || rowStride <= 0
                || rowStride < (long)(width - 1) * pixelStride + 1 || outputWidth <= 0 || outputHeight <= 0
                || outputWidth > width || outputHeight > height || destination == null
                || (long)outputWidth * outputHeight > destination.Length
                || (long)(height - 1) * rowStride + (long)(width - 1) * pixelStride >= source.Length) return false;
            for (int y = 0; y < outputHeight; y++)
            {
                int sourceRow = (int)((long)y * height / outputHeight) * rowStride;
                for (int x = 0; x < outputWidth; x++)
                    destination[y * outputWidth + x] = source[sourceRow + (int)((long)x * width / outputWidth) * pixelStride];
            }
            return true;
        }
    }
}

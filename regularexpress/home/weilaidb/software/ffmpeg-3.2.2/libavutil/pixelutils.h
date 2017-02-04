#define AVUTIL_PIXELUTILS_H
typedef int (*av_pixelutils_sad_fn)(const uint8_t *src1, ptrdiff_t stride1,
const uint8_t *src2, ptrdiff_t stride2);
av_pixelutils_get_sad_fn;

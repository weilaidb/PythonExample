#undef avg
#undef ss
#if SS_W == 0
#define ss 444
avg (a)
#elif SS_H == 0
#define ss 422
avg (((a) + (b) + 1) >> 1)
#define ss 420
avg (((a) + (b) + (c) + (d) + 2) >> 2)
#undef fn
#undef fn2
#undef fn3
fn3 a##_##c##p##b##_c
fn2 fn3(a,b,c)
fn fn2(a, BIT_DEPTH, ss)
#undef pixel
#undef av_clip_pixel
#if BIT_DEPTH == 8
#define pixel uint8_t
av_clip_pixel av_clip_uint8(x)
#define pixel uint16_t
av_clip_pixel av_clip_uintp2(x, BIT_DEPTH)
fn(int16_t *rgb[3], ptrdiff_t rgb_stride,
uint8_t *_yuv[3], const ptrdiff_t yuv_stride[3],
int w, int h, const int16_t yuv2rgb_coeffs[3][3][8],
const int16_t yuv_offset[8])
fn(uint8_t *_yuv[3], const ptrdiff_t yuv_stride[3],
int16_t *rgb[3], ptrdiff_t s,
int w, int h, const int16_t rgb2yuv_coeffs[3][3][8],
const int16_t yuv_offset[8])
fn(uint8_t *_yuv[3], const ptrdiff_t yuv_stride[3],
int16_t *rgb[3], ptrdiff_t s,
int w, int h, const int16_t rgb2yuv_coeffs[3][3][8],
const int16_t yuv_offset[8],
int *rnd_scratch[3][2])
#undef IN_BIT_DEPTH
#undef OUT_BIT_DEPTH
#define OUT_BIT_DEPTH BIT_DEPTH
#define IN_BIT_DEPTH 8
#undef IN_BIT_DEPTH
#define IN_BIT_DEPTH 10
#undef IN_BIT_DEPTH
#define IN_BIT_DEPTH 12

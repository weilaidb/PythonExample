#undef opixel
#define opixel pixel
#undef ipixel
#if IN_BIT_DEPTH == 8
#define ipixel uint8_t
#define ipixel uint16_t
#undef fn
#undef fn2
#undef fn3
#define fn3(a,b,c,d) a##_##d##p##b##to##c##_c
#define fn2(a,b,c,d) fn3(a,b,c,d)
#define fn(a) fn2(a, IN_BIT_DEPTH, OUT_BIT_DEPTH, ss)
static void fn(yuv2yuv)(uint8_t *_dst[3], const ptrdiff_t dst_stride[3],
uint8_t *_src[3], const ptrdiff_t src_stride[3],
int w, int h, const int16_t c[3][3][8],
const int16_t yuv_offset[2][8])

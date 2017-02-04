#undef opixel
#define opixel pixel
#undef ipixel
#if IN_BIT_DEPTH == 8
#define ipixel uint8_t
#define ipixel uint16_t
#undef fn
#undef fn2
#undef fn3
fn3 a##_##d##p##b##to##c##_c
fn2 fn3(a,b,c,d)
fn fn2(a, IN_BIT_DEPTH, OUT_BIT_DEPTH, ss)
fn(uint8_t *_dst[3], const ptrdiff_t dst_stride[3],
uint8_t *_src[3], const ptrdiff_t src_stride[3],
int w, int h, const int16_t c[3][3][8],
const int16_t yuv_offset[2][8])

#define decl_yuv2yuv_fn(t) \
void ff_yuv2yuv_##t##_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], \
uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], \
int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], \
const int16_t yuv_offset[2][8])
#define decl_yuv2yuv_fns(ss) \
decl_yuv2yuv_fn(ss##p8to8); \
decl_yuv2yuv_fn(ss##p10to8); \
decl_yuv2yuv_fn(ss##p12to8); \
decl_yuv2yuv_fn(ss##p8to10); \
decl_yuv2yuv_fn(ss##p10to10); \
decl_yuv2yuv_fn(ss##p12to10); \
decl_yuv2yuv_fn(ss##p8to12); \
decl_yuv2yuv_fn(ss##p10to12); \
decl_yuv2yuv_fn(ss##p12to12)
decl_yuv2yuv_fns(420);
decl_yuv2yuv_fns(422);
decl_yuv2yuv_fns(444);
#define decl_yuv2rgb_fn(t) \
void ff_yuv2rgb_##t##_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, \
uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], \
int w, int h, const int16_t coeff[3][3][8], \
const int16_t yuv_offset[8])
#define decl_yuv2rgb_fns(ss) \
decl_yuv2rgb_fn(ss##p8); \
decl_yuv2rgb_fn(ss##p10); \
decl_yuv2rgb_fn(ss##p12)
decl_yuv2rgb_fns(420);
decl_yuv2rgb_fns(422);
decl_yuv2rgb_fns(444);
#define decl_rgb2yuv_fn(t) \
void ff_rgb2yuv_##t##_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], \
int16_t *rgb_in[3], ptrdiff_t rgb_stride, \
int w, int h, const int16_t coeff[3][3][8], \
const int16_t yuv_offset[8])
#define decl_rgb2yuv_fns(ss) \
decl_rgb2yuv_fn(ss##p8); \
decl_rgb2yuv_fn(ss##p10); \
decl_rgb2yuv_fn(ss##p12)
decl_rgb2yuv_fns(420);
decl_rgb2yuv_fns(422);
decl_rgb2yuv_fns(444);
void ff_multiply3x3_sse2(int16_t *data[3], ptrdiff_t stride, int w, int h,
const int16_t coeff[3][3][8]);
void ff_colorspacedsp_x86_init(ColorSpaceDSPContext *dsp)

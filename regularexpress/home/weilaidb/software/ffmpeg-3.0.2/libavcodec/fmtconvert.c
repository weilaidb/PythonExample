static void int32_to_float_fmul_scalar_c(float *dst, const int32_t *src,
float mul, int len)
static void int32_to_float_c(float *dst, const int32_t *src, intptr_t len)
static void int32_to_float_fmul_array8_c(FmtConvertContext *c, float *dst,
const int32_t *src, const float *mul,
int len)
av_cold void ff_fmt_convert_init(FmtConvertContext *c, AVCodecContext *avctx)

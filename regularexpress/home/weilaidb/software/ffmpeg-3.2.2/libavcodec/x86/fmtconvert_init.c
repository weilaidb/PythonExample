#if HAVE_YASM
void ff_int32_to_float_fmul_scalar_sse (float *dst, const int32_t *src, float mul, int len);
void ff_int32_to_float_fmul_scalar_sse2(float *dst, const int32_t *src, float mul, int len);
void ff_int32_to_float_fmul_array8_sse (FmtConvertContext *c, float *dst, const int32_t *src,
const float *mul, int len);
void ff_int32_to_float_fmul_array8_sse2(FmtConvertContext *c, float *dst, const int32_t *src,
const float *mul, int len);
av_cold void ff_fmt_convert_init_x86(FmtConvertContext *c, AVCodecContext *avctx)

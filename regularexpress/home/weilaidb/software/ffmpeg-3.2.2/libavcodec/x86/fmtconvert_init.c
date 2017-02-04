#if HAVE_YASM
void ff_int32_to_float_fmul_scalar_sse (float *dst, const int32_t *src, float mul, int len);
ff_int32_to_float_fmul_scalar_sse2;
void ff_int32_to_float_fmul_array8_sse (FmtConvertContext *c, float *dst, const int32_t *src,
const float *mul, int len);
ff_int32_to_float_fmul_array8_sse2;
ff_fmt_convert_init_x86

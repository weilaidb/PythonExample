void ff_int32_to_float_fmul_array8_neon(FmtConvertContext *c, float *dst,
const int32_t *src, const float *mul,
int len);
void ff_int32_to_float_fmul_scalar_neon(float *dst, const int32_t *src,
float mul, int len);
void ff_int32_to_float_fmul_scalar_vfp(float *dst, const int32_t *src,
float mul, int len);
void ff_int32_to_float_fmul_array8_vfp(FmtConvertContext *c, float *dst,
const int32_t *src, const float *mul,
int len);
av_cold void ff_fmt_convert_init_arm(FmtConvertContext *c, AVCodecContext *avctx)

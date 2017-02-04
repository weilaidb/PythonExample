RESAMPLE_FUNCS \
int ff_resample_common_##type##_##opt(ResampleContext *c, void *dst, \
const void *src, int sz, int upd); \
int ff_resample_linear_##type##_##opt(ResampleContext *c, void *dst, \
const void *src, int sz, int upd)
RESAMPLE_FUNCS(int16,  mmxext);
RESAMPLE_FUNCS(int16,  sse2);
RESAMPLE_FUNCS(int16,  xop);
RESAMPLE_FUNCS(float,  sse);
RESAMPLE_FUNCS(float,  avx);
RESAMPLE_FUNCS(float,  fma3);
RESAMPLE_FUNCS(float,  fma4);
RESAMPLE_FUNCS(double, sse2);
swri_resample_dsp_x86_init

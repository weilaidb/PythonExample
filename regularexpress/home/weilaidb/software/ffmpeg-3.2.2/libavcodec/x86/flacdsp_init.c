ff_flac_lpc_32_sse4;
ff_flac_lpc_32_xop;
ff_flac_enc_lpc_16_sse4;
DECORRELATE_FUNCS                                                      \
void ff_flac_decorrelate_ls_##fmt##_##opt(uint8_t **out, int32_t **in, int channels,     \
int len, int shift);                           \
void ff_flac_decorrelate_rs_##fmt##_##opt(uint8_t **out, int32_t **in, int channels,     \
int len, int shift);                           \
void ff_flac_decorrelate_ms_##fmt##_##opt(uint8_t **out, int32_t **in, int channels,     \
int len, int shift);                           \
void ff_flac_decorrelate_indep2_##fmt##_##opt(uint8_t **out, int32_t **in, int channels, \
int len, int shift);                        \
void ff_flac_decorrelate_indep4_##fmt##_##opt(uint8_t **out, int32_t **in, int channels, \
int len, int shift);                       \
void ff_flac_decorrelate_indep6_##fmt##_##opt(uint8_t **out, int32_t **in, int channels, \
int len, int shift);                       \
void ff_flac_decorrelate_indep8_##fmt##_##opt(uint8_t **out, int32_t **in, int channels, \
int len, int shift)
DECORRELATE_FUNCS(16, sse2);
DECORRELATE_FUNCS(16,  avx);
DECORRELATE_FUNCS(32, sse2);
DECORRELATE_FUNCS(32,  avx);
ff_flacdsp_init_x86

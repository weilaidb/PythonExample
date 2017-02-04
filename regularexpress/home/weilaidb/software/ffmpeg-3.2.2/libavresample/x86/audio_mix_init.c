ff_mix_2_to_1_fltp_flt_sse;
ff_mix_2_to_1_fltp_flt_avx;
ff_mix_2_to_1_s16p_flt_sse2;
ff_mix_2_to_1_s16p_flt_sse4;
ff_mix_2_to_1_s16p_q8_sse2;
ff_mix_1_to_2_fltp_flt_sse;
ff_mix_1_to_2_fltp_flt_avx;
ff_mix_1_to_2_s16p_flt_sse2;
ff_mix_1_to_2_s16p_flt_sse4;
void ff_mix_1_to_2_s16p_flt_avx (int16_t **src, float **matrix, int len,
int out_ch, int in_ch);
DEFINE_MIX_3_8_TO_1_2                                     \
void ff_mix_ ## chan ## _to_1_fltp_flt_sse(float **src,                 \
float **matrix, int len,     \
int out_ch, int in_ch);      \
void ff_mix_ ## chan ## _to_2_fltp_flt_sse(float **src,                 \
float **matrix, int len,     \
int out_ch, int in_ch);      \
\
void ff_mix_ ## chan ## _to_1_s16p_flt_sse2(int16_t **src,              \
float **matrix, int len,    \
int out_ch, int in_ch);     \
void ff_mix_ ## chan ## _to_2_s16p_flt_sse2(int16_t **src,              \
float **matrix, int len,    \
int out_ch, int in_ch);     \
\
void ff_mix_ ## chan ## _to_1_s16p_flt_sse4(int16_t **src,              \
float **matrix, int len,    \
int out_ch, int in_ch);     \
void ff_mix_ ## chan ## _to_2_s16p_flt_sse4(int16_t **src,              \
float **matrix, int len,    \
int out_ch, int in_ch);     \
\
void ff_mix_ ## chan ## _to_1_fltp_flt_avx(float **src,                 \
float **matrix, int len,     \
int out_ch, int in_ch);      \
void ff_mix_ ## chan ## _to_2_fltp_flt_avx(float **src,                 \
float **matrix, int len,     \
int out_ch, int in_ch);      \
\
void ff_mix_ ## chan ## _to_1_s16p_flt_avx(int16_t **src,               \
float **matrix, int len,     \
int out_ch, int in_ch);      \
void ff_mix_ ## chan ## _to_2_s16p_flt_avx(int16_t **src,               \
float **matrix, int len,     \
int out_ch, int in_ch);      \
\
void ff_mix_ ## chan ## _to_1_fltp_flt_fma4(float **src,                \
float **matrix, int len,    \
int out_ch, int in_ch);     \
void ff_mix_ ## chan ## _to_2_fltp_flt_fma4(float **src,                \
float **matrix, int len,    \
int out_ch, int in_ch);     \
\
void ff_mix_ ## chan ## _to_1_s16p_flt_fma4(int16_t **src,              \
float **matrix, int len,    \
int out_ch, int in_ch);     \
void ff_mix_ ## chan ## _to_2_s16p_flt_fma4(int16_t **src,              \
float **matrix, int len,    \
int out_ch, int in_ch);
DEFINE_MIX_3_8_TO_1_2(3)
DEFINE_MIX_3_8_TO_1_2(4)
DEFINE_MIX_3_8_TO_1_2(5)
DEFINE_MIX_3_8_TO_1_2(6)
DEFINE_MIX_3_8_TO_1_2(7)
DEFINE_MIX_3_8_TO_1_2(8)
SET_MIX_3_8_TO_1_2                                            \
if (EXTERNAL_SSE(cpu_flags))                                                                        \
if (EXTERNAL_SSE2(cpu_flags))                                                                        \
if (EXTERNAL_SSE4(cpu_flags))                                                                        \
if (EXTERNAL_AVX(cpu_flags))                                                                        \
if (EXTERNAL_FMA4(cpu_flags))
ff_audio_mix_init_x86

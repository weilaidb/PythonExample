void ff_ac3_exponent_min_mmx   (uint8_t *exp, int num_reuse_blocks, int nb_coefs);
ff_ac3_exponent_min_mmxext;
void ff_ac3_exponent_min_sse2  (uint8_t *exp, int num_reuse_blocks, int nb_coefs);
int ff_ac3_max_msb_abs_int16_mmx  (const int16_t *src, int len);
ff_ac3_max_msb_abs_int16_mmxext;
int ff_ac3_max_msb_abs_int16_sse2 (const int16_t *src, int len);
ff_ac3_max_msb_abs_int16_ssse3;
void ff_ac3_lshift_int16_mmx (int16_t *src, unsigned int len, unsigned int shift);
ff_ac3_lshift_int16_sse2;
void ff_ac3_rshift_int32_mmx (int32_t *src, unsigned int len, unsigned int shift);
ff_ac3_rshift_int32_sse2;
ff_float_to_fixed24_3dnow;
void ff_float_to_fixed24_sse  (int32_t *dst, const float *src, unsigned int len);
void ff_float_to_fixed24_sse2 (int32_t *dst, const float *src, unsigned int len);
ff_ac3_compute_mantissa_size_sse2;
void ff_ac3_extract_exponents_sse2 (uint8_t *exp, int32_t *coef, int nb_coefs);
ff_ac3_extract_exponents_ssse3;
ff_apply_window_int16_round_mmxext;
ff_apply_window_int16_round_sse2;
ff_apply_window_int16_mmxext;
ff_apply_window_int16_sse2;
ff_apply_window_int16_ssse3;
ff_apply_window_int16_ssse3_atom;
defined
#       undef HAVE_7REGS
#       define HAVE_7REGS 0
#if HAVE_SSE_INLINE && HAVE_7REGS
IF1 x
IF0
MIX5                                      \
__asm__ volatile (                                          \
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
stereo()            \
\
\
\
mono()            \
\
stereo()            \
\
\
: (i)                                              \
: (matrix),                                          \
(samples[0] + len),                                \
(samples[1] + len),                                \
(samples[2] + len),                                \
(samples[3] + len),                                \
(samples[4] + len)                                 \
: XMM_CLOBBERS(,      \
,)      \
\
);
MIX_MISC                                        \
__asm__ volatile (                                          \
\
\
\
\
stereo()                \
\
stereo()                \
\
\
\
stereo()                \
\
stereo()                \
\
stereo()                \
\
\
\
stereo()                \
\
stereo()                \
\
\
: (m)                \
: (matrix_simd + in_ch),                             \
((intptr_t) - 4 * (in_ch - 1)),                    \
(samp + in_ch),                                    \
(sizeof(float *)/4)          \
:                                               \
);
ac3_downmix_sse[2],
int out_ch, int in_ch, int len)
ff_ac3dsp_init_x86

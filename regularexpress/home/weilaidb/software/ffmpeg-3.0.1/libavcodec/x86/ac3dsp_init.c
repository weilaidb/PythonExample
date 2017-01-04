void ff_ac3_exponent_min_mmx   (uint8_t *exp, int num_reuse_blocks, int nb_coefs);
void ff_ac3_exponent_min_mmxext(uint8_t *exp, int num_reuse_blocks, int nb_coefs);
void ff_ac3_exponent_min_sse2  (uint8_t *exp, int num_reuse_blocks, int nb_coefs);
int ff_ac3_max_msb_abs_int16_mmx  (const int16_t *src, int len);
int ff_ac3_max_msb_abs_int16_mmxext(const int16_t *src, int len);
int ff_ac3_max_msb_abs_int16_sse2 (const int16_t *src, int len);
int ff_ac3_max_msb_abs_int16_ssse3(const int16_t *src, int len);
void ff_ac3_lshift_int16_mmx (int16_t *src, unsigned int len, unsigned int shift);
void ff_ac3_lshift_int16_sse2(int16_t *src, unsigned int len, unsigned int shift);
void ff_ac3_rshift_int32_mmx (int32_t *src, unsigned int len, unsigned int shift);
void ff_ac3_rshift_int32_sse2(int32_t *src, unsigned int len, unsigned int shift);
void ff_float_to_fixed24_3dnow(int32_t *dst, const float *src, unsigned int len);
void ff_float_to_fixed24_sse  (int32_t *dst, const float *src, unsigned int len);
void ff_float_to_fixed24_sse2 (int32_t *dst, const float *src, unsigned int len);
int ff_ac3_compute_mantissa_size_sse2(uint16_t mant_cnt[6][16]);
void ff_ac3_extract_exponents_sse2 (uint8_t *exp, int32_t *coef, int nb_coefs);
void ff_ac3_extract_exponents_ssse3(uint8_t *exp, int32_t *coef, int nb_coefs);
void ff_apply_window_int16_round_mmxext(int16_t *output, const int16_t *input,
const int16_t *window, unsigned int len);
void ff_apply_window_int16_round_sse2(int16_t *output, const int16_t *input,
const int16_t *window, unsigned int len);
void ff_apply_window_int16_mmxext(int16_t *output, const int16_t *input,
const int16_t *window, unsigned int len);
void ff_apply_window_int16_sse2(int16_t *output, const int16_t *input,
const int16_t *window, unsigned int len);
void ff_apply_window_int16_ssse3(int16_t *output, const int16_t *input,
const int16_t *window, unsigned int len);
void ff_apply_window_int16_ssse3_atom(int16_t *output, const int16_t *input,
const int16_t *window, unsigned int len);
#if ARCH_X86_32 && defined(__INTEL_COMPILER)
#       undef HAVE_7REGS
#       define HAVE_7REGS 0
#if HAVE_SSE_INLINE && HAVE_7REGS
#define IF1(x) x
#define IF0(x)
#define MIX5(mono, stereo)                                      \
__asm__ volatile (                                          \
"movss           0(%1), %%xmm5          \n"             \
"movss           8(%1), %%xmm6          \n"             \
"movss          24(%1), %%xmm7          \n"             \
"shufps     $0, %%xmm5, %%xmm5          \n"             \
"shufps     $0, %%xmm6, %%xmm6          \n"             \
"shufps     $0, %%xmm7, %%xmm7          \n"             \
"1:                                     \n"             \
"movaps       (%0, %2), %%xmm0          \n"             \
"movaps       (%0, %3), %%xmm1          \n"             \
"movaps       (%0, %4), %%xmm2          \n"             \
"movaps       (%0, %5), %%xmm3          \n"             \
"movaps       (%0, %6), %%xmm4          \n"             \
"mulps          %%xmm5, %%xmm0          \n"             \
"mulps          %%xmm6, %%xmm1          \n"             \
"mulps          %%xmm5, %%xmm2          \n"             \
"mulps          %%xmm7, %%xmm3          \n"             \
"mulps          %%xmm7, %%xmm4          \n"             \
stereo("addps          %%xmm1, %%xmm0          \n")            \
"addps          %%xmm1, %%xmm2          \n"             \
"addps          %%xmm3, %%xmm0          \n"             \
"addps          %%xmm4, %%xmm2          \n"             \
mono("addps          %%xmm2, %%xmm0          \n")            \
"movaps         %%xmm0, (%0, %2)        \n"             \
stereo("movaps         %%xmm2, (%0, %3)        \n")            \
"add               $16, %0              \n"             \
"jl                 1b                  \n"             \
: "+&r"(i)                                              \
: "r"(matrix),                                          \
"r"(samples[0] + len),                                \
"r"(samples[1] + len),                                \
"r"(samples[2] + len),                                \
"r"(samples[3] + len),                                \
"r"(samples[4] + len)                                 \
: XMM_CLOBBERS("%xmm0", "%xmm1", "%xmm2", "%xmm3",      \
"%xmm4", "%xmm5", "%xmm6", "%xmm7",)      \
"memory"                                               \
);
#define MIX_MISC(stereo)                                        \
__asm__ volatile (                                          \
"mov              %5, %2            \n"                 \
"1:                                 \n"                 \
"mov -%c7(%6, %2, %c8), %3          \n"                 \
"movaps     (%3, %0), %%xmm0        \n"                 \
stereo("movaps       %%xmm0, %%xmm1        \n")                \
"mulps        %%xmm4, %%xmm0        \n"                 \
stereo("mulps        %%xmm5, %%xmm1        \n")                \
"2:                                 \n"                 \
"mov   (%6, %2, %c8), %1            \n"                 \
"movaps     (%1, %0), %%xmm2        \n"                 \
stereo("movaps       %%xmm2, %%xmm3        \n")                \
"mulps   (%4, %2, 8), %%xmm2        \n"                 \
stereo("mulps 16(%4, %2, 8), %%xmm3        \n")                \
"addps        %%xmm2, %%xmm0        \n"                 \
stereo("addps        %%xmm3, %%xmm1        \n")                \
"add              $4, %2            \n"                 \
"jl               2b                \n"                 \
"mov              %5, %2            \n"                 \
stereo("mov   (%6, %2, %c8), %1            \n")                \
"movaps       %%xmm0, (%3, %0)      \n"                 \
stereo("movaps       %%xmm1, (%1, %0)      \n")                \
"add             $16, %0            \n"                 \
"jl               1b                \n"                 \
: "+&r"(i), "=&r"(j), "=&r"(k), "=&r"(m)                \
: "r"(matrix_simd + in_ch),                             \
"g"((intptr_t) - 4 * (in_ch - 1)),                    \
"r"(samp + in_ch),                                    \
"i"(sizeof(float *)), "i"(sizeof(float *)/4)          \
: "memory"                                              \
);
static void ac3_downmix_sse(float **samples, float (*matrix)[2],
int out_ch, int in_ch, int len)
av_cold void ff_ac3dsp_init_x86(AC3DSPContext *c, int bit_exact)

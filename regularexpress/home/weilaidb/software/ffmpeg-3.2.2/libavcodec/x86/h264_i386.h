#define AVCODEC_X86_H264_I386_H
#if HAVE_INLINE_ASM
#if ARCH_X86_64
#define REG64 "r"
#define REG64 "m"
#if HAVE_7REGS && !BROKEN_COMPILER
#define decode_significance decode_significance_x86
static int decode_significance_x86(CABACContext *c, int max_coeff,
uint8_t *significant_coeff_ctx_base,
int *index, x86_reg last_off)
#define decode_significance_8x8 decode_significance_8x8_x86
static int decode_significance_8x8_x86(CABACContext *c,
uint8_t *significant_coeff_ctx_base,
int *index, uint8_t *last_coeff_ctx_base, const uint8_t *sig_off)

#define AVCODEC_X86_VP56_ARITH_H
#if HAVE_INLINE_ASM && HAVE_FAST_CMOV && HAVE_6REGS
#define vp56_rac_get_prob vp56_rac_get_prob
static av_always_inline int vp56_rac_get_prob(VP56RangeCoder *c, uint8_t prob)

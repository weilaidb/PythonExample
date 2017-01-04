#if HAVE_INLINE_ASM
static av_always_inline void float_copy(float *dst, const float *src, int count)
static av_always_inline int lcg_random(unsigned previous_val)
static void imdct_and_windowing_mips(AACContext *ac, SingleChannelElement *sce)
static void apply_ltp_mips(AACContext *ac, SingleChannelElement *sce)
#if HAVE_MIPSFPU
static av_always_inline void fmul_and_reverse(float *dst, const float *src0, const float *src1, int count)
static void update_ltp_mips(AACContext *ac, SingleChannelElement *sce)
void ff_aacdec_init_mips(AACContext *c)

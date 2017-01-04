#if HAVE_INLINE_ASM
#if HAVE_MIPSDSP
static void ac3_bit_alloc_calc_bap_mips(int16_t *mask, int16_t *psd,
int start, int end,
int snr_offset, int floor,
const uint8_t *bap_tab, uint8_t *bap)
static void ac3_update_bap_counts_mips(uint16_t mant_cnt[16], uint8_t *bap,
int len)
#if HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void float_to_fixed24_mips(int32_t *dst, const float *src, unsigned int len)
static void ac3_downmix_mips(float **samples, float (*matrix)[2],
int out_ch, int in_ch, int len)
void ff_ac3dsp_init_mips(AC3DSPContext *c, int bit_exact)

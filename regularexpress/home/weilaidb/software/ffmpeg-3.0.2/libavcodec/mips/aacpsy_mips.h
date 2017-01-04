#define AVCODEC_MIPS_AACPSY_MIPS_H
#if HAVE_INLINE_ASM && HAVE_MIPSFPU && ( PSY_LAME_FIR_LEN == 21 )
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void calc_thr_3gpp_mips(const FFPsyWindowInfo *wi, const int num_bands,
AacPsyChannel *pch, const uint8_t *band_sizes,
const float *coefs, const int cutoff)
static void psy_hp_filter_mips(const float *firbuf, float *hpfsmpl, const float * psy_fir_coeffs)
#define calc_thr_3gpp calc_thr_3gpp_mips
#define psy_hp_filter psy_hp_filter_mips

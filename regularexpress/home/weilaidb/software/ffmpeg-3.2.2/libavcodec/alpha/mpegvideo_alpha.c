static void dct_unquantize_h263_axp(int16_t *block, int n_coeffs,
uint64_t qscale, uint64_t qadd)
static void dct_unquantize_h263_intra_axp(MpegEncContext *s, int16_t *block,
int n, int qscale)
static void dct_unquantize_h263_inter_axp(MpegEncContext *s, int16_t *block,
int n, int qscale)
av_cold void ff_mpv_common_init_axp(MpegEncContext *s)

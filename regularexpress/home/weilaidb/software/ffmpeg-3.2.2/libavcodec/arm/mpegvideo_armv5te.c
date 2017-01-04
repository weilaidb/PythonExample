void ff_dct_unquantize_h263_armv5te(int16_t *block, int qmul, int qadd, int count);
static inline void dct_unquantize_h263_helper_c(int16_t *block, int qmul, int qadd, int count)
static void dct_unquantize_h263_intra_armv5te(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_h263_inter_armv5te(MpegEncContext *s,
int16_t *block, int n, int qscale)
av_cold void ff_mpv_common_init_armv5te(MpegEncContext *s)

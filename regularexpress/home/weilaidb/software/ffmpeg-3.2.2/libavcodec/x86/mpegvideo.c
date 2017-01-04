#if HAVE_MMX_INLINE
static void dct_unquantize_h263_intra_mmx(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_h263_inter_mmx(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_mpeg1_intra_mmx(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_mpeg1_inter_mmx(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_mpeg2_intra_mmx(MpegEncContext *s,
int16_t *block, int n, int qscale)
static void dct_unquantize_mpeg2_inter_mmx(MpegEncContext *s,
int16_t *block, int n, int qscale)
av_cold void ff_mpv_common_init_x86(MpegEncContext *s)

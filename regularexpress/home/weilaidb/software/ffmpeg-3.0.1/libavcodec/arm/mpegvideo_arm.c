#if HAVE_NEON
AV_CHECK_OFFSET(MpegEncContext, y_dc_scale,       Y_DC_SCALE);
AV_CHECK_OFFSET(MpegEncContext, c_dc_scale,       C_DC_SCALE);
AV_CHECK_OFFSET(MpegEncContext, ac_pred,          AC_PRED);
AV_CHECK_OFFSET(MpegEncContext, block_last_index, BLOCK_LAST_INDEX);
AV_CHECK_OFFSET(MpegEncContext, inter_scantable.raster_end,
INTER_SCANTAB_RASTER_END);
AV_CHECK_OFFSET(MpegEncContext, h263_aic,         H263_AIC);
void ff_dct_unquantize_h263_inter_neon(MpegEncContext *s, int16_t *block,
int n, int qscale);
void ff_dct_unquantize_h263_intra_neon(MpegEncContext *s, int16_t *block,
int n, int qscale);
av_cold void ff_mpv_common_init_arm(MpegEncContext *s)

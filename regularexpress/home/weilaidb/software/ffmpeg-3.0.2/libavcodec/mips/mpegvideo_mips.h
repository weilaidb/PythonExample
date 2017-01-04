#define AVCODEC_MIPS_MPEGVIDEO_MIPS_H
void ff_dct_unquantize_h263_intra_mmi(MpegEncContext *s, int16_t *block,
int n, int qscale);
void ff_dct_unquantize_h263_inter_mmi(MpegEncContext *s, int16_t *block,
int n, int qscale);
void ff_dct_unquantize_mpeg1_intra_mmi(MpegEncContext *s, int16_t *block,
int n, int qscale);
void ff_dct_unquantize_mpeg1_inter_mmi(MpegEncContext *s, int16_t *block,
int n, int qscale);
void ff_dct_unquantize_mpeg2_intra_mmi(MpegEncContext *s, int16_t *block,
int n, int qscale);
void ff_denoise_dct_mmi(MpegEncContext *s, int16_t *block);

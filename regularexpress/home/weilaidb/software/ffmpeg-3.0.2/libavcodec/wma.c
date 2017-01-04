static av_cold int init_coef_vlc(VLC *vlc, uint16_t **prun_table,
float **plevel_table, uint16_t **pint_table,
const CoefVLCTable *vlc_table)
av_cold int ff_wma_init(AVCodecContext *avctx, int flags2)
int ff_wma_total_gain_to_bits(int total_gain)
int ff_wma_end(AVCodecContext *avctx)
unsigned int ff_wma_get_large_val(GetBitContext *gb)
int ff_wma_run_level_decode(AVCodecContext *avctx, GetBitContext *gb,
VLC *vlc, const float *level_table,
const uint16_t *run_table, int version,
WMACoef *ptr, int offset, int num_coefs,
int block_len, int frame_len_bits,
int coef_nb_bits)

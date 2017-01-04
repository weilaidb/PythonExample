static av_cold void init_h263_dc_for_msmpeg4(void)
av_cold void ff_msmpeg4_common_init(MpegEncContext *s)
int ff_msmpeg4_coded_block_pred(MpegEncContext * s, int n, uint8_t **coded_block_ptr)
static int get_dc(uint8_t *src, int stride, int scale, int block_size)
int ff_msmpeg4_pred_dc(MpegEncContext *s, int n,
int16_t **dc_val_ptr, int *dir_ptr)

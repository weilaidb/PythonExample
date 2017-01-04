av_cold void ff_wmv2_common_init(Wmv2Context *w)
static void wmv2_add_block(Wmv2Context *w, int16_t *block1,
uint8_t *dst, int stride, int n)
void ff_wmv2_add_mb(MpegEncContext *s, int16_t block1[6][64],
uint8_t *dest_y, uint8_t *dest_cb, uint8_t *dest_cr)
void ff_mspel_motion(MpegEncContext *s, uint8_t *dest_y,
uint8_t *dest_cb, uint8_t *dest_cr,
uint8_t **ref_picture, op_pixels_func (*pix_op)[4],
int motion_x, int motion_y, int h)

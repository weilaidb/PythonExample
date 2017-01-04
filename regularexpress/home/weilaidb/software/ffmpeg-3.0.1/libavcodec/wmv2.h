#define AVCODEC_WMV2_H
#define SKIP_TYPE_NONE 0
#define SKIP_TYPE_MPEG 1
#define SKIP_TYPE_ROW  2
#define SKIP_TYPE_COL  3
typedef struct Wmv2Context  Wmv2Context;
void ff_wmv2_common_init(Wmv2Context *w);
int ff_wmv2_decode_mb(MpegEncContext *s, int16_t block[6][64]);
int ff_wmv2_encode_picture_header(MpegEncContext * s, int picture_number);
void ff_wmv2_encode_mb(MpegEncContext * s, int16_t block[6][64],
int motion_x, int motion_y);
int ff_wmv2_decode_picture_header(MpegEncContext * s);
int ff_wmv2_decode_secondary_picture_header(MpegEncContext * s);
void ff_wmv2_add_mb(MpegEncContext *s, int16_t block[6][64],
uint8_t *dest_y, uint8_t *dest_cb, uint8_t *dest_cr);
void ff_mspel_motion(MpegEncContext *s,
uint8_t *dest_y, uint8_t *dest_cb, uint8_t *dest_cr,
uint8_t **ref_picture, op_pixels_func (*pix_op)[4],
int motion_x, int motion_y, int h);
static av_always_inline int wmv2_get_cbp_table_index(MpegEncContext *s, int cbp_index)

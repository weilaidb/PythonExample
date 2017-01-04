static int encode_ext_header(Wmv2Context *w)
static av_cold int wmv2_encode_init(AVCodecContext *avctx)
int ff_wmv2_encode_picture_header(MpegEncContext *s, int picture_number)
void ff_wmv2_encode_mb(MpegEncContext *s, int16_t block[6][64],
int motion_x, int motion_y)
static const AVClass wmv2_class = ;
AVCodec ff_wmv2_encoder = ;

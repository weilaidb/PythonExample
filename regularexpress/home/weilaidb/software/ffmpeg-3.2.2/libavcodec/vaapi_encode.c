static const char *picture_type_name[] = ;
static int vaapi_encode_make_packed_header(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
int type, char *data, size_t bit_len)
static int vaapi_encode_make_param_buffer(AVCodecContext *avctx,
VAAPIEncodePicture *pic,
int type, char *data, size_t len)
static int vaapi_encode_wait(AVCodecContext *avctx,
VAAPIEncodePicture *pic)
static int vaapi_encode_issue(AVCodecContext *avctx,
VAAPIEncodePicture *pic)
static int vaapi_encode_output(AVCodecContext *avctx,
VAAPIEncodePicture *pic, AVPacket *pkt)
static int vaapi_encode_discard(AVCodecContext *avctx,
VAAPIEncodePicture *pic)
static VAAPIEncodePicture *vaapi_encode_alloc(void)
static int vaapi_encode_free(AVCodecContext *avctx,
VAAPIEncodePicture *pic)
static int vaapi_encode_step(AVCodecContext *avctx,
VAAPIEncodePicture *target)
static int vaapi_encode_get_next(AVCodecContext *avctx,
VAAPIEncodePicture **pic_out)
static int vaapi_encode_mangle_end(AVCodecContext *avctx)
static int vaapi_encode_clear_old(AVCodecContext *avctx)
int ff_vaapi_encode2(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *input_image, int *got_packet)
static av_cold int vaapi_encode_check_config(AVCodecContext *avctx)
av_cold int ff_vaapi_encode_init(AVCodecContext *avctx,
const VAAPIEncodeType *type)
av_cold int ff_vaapi_encode_close(AVCodecContext *avctx)

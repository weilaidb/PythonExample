static av_cold int encode_init(AVCodecContext *avctx)
static int apply_window_and_mdct(AVCodecContext *avctx, const AVFrame *frame)
static void init_exp(WMACodecContext *s, int ch, const int *exp_param)
static void encode_exp_vlc(WMACodecContext *s, int ch, const int *exp_param)
static int encode_block(WMACodecContext *s, float (*src_coefs)[BLOCK_MAX_SIZE],
int total_gain)
static int encode_frame(WMACodecContext *s, float (*src_coefs)[BLOCK_MAX_SIZE],
uint8_t *buf, int buf_size, int total_gain)
static int encode_superframe(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
#if CONFIG_WMAV1_ENCODER
AVCodec ff_wmav1_encoder = ;
#if CONFIG_WMAV2_ENCODER
AVCodec ff_wmav2_encoder = ;

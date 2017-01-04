static uint8_t uni_ac_vlc_len[64 * 64 * 2];
static uint8_t uni_chroma_ac_vlc_len[64 * 64 * 2];
static av_cold void init_uni_ac_vlc(const uint8_t huff_size_ac[256], uint8_t *uni_ac_vlc_len)
av_cold int ff_mjpeg_encode_init(MpegEncContext *s)
av_cold void ff_mjpeg_encode_close(MpegEncContext *s)
static void encode_block(MpegEncContext *s, int16_t *block, int n)
void ff_mjpeg_encode_mb(MpegEncContext *s, int16_t block[12][64])
#define V_MAX 2
static int amv_encode_picture(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic_arg, int *got_packet)
#define OFFSET(x) offsetof(MpegEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
#if CONFIG_MJPEG_ENCODER
static const AVClass mjpeg_class = ;
AVCodec ff_mjpeg_encoder = ;
#if CONFIG_AMV_ENCODER
static const AVClass amv_class = ;
AVCodec ff_amv_encoder = ;

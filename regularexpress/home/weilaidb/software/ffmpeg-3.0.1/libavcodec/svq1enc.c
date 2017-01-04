static void svq1_write_header(SVQ1EncContext *s, int frame_type)
#define QUALITY_THRESHOLD    100
#define THRESHOLD_MULTIPLIER 0.6
static int ssd_int8_vs_int16_c(const int8_t *pix1, const int16_t *pix2,
intptr_t size)
static int encode_block(SVQ1EncContext *s, uint8_t *src, uint8_t *ref,
uint8_t *decoded, int stride, int level,
int threshold, int lambda, int intra)
static void init_block_index(MpegEncContext *s)
static int svq1_encode_plane(SVQ1EncContext *s, int plane,
unsigned char *src_plane,
unsigned char *ref_plane,
unsigned char *decoded_plane,
int width, int height, int src_stride, int stride)
static av_cold int svq1_encode_end(AVCodecContext *avctx)
static av_cold int svq1_encode_init(AVCodecContext *avctx)
static int svq1_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
#define OFFSET(x) offsetof(struct SVQ1EncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass svq1enc_class = ;
AVCodec ff_svq1_encoder = ;

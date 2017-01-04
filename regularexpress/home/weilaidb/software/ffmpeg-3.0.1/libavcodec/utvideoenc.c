static int huff_cmp_sym(const void *a, const void *b)
static av_cold int utvideo_encode_close(AVCodecContext *avctx)
static av_cold int utvideo_encode_init(AVCodecContext *avctx)
static void mangle_rgb_planes(uint8_t *dst[4], int dst_stride, uint8_t *src,
int step, int stride, int width, int height)
static void left_predict(uint8_t *src, uint8_t *dst, int stride,
int width, int height)
static void median_predict(UtvideoContext *c, uint8_t *src, uint8_t *dst, int stride,
int width, int height)
static void count_usage(uint8_t *src, int width,
int height, uint64_t *counts)
static void calculate_codes(HuffEntry *he)
static int write_huff_codes(uint8_t *src, uint8_t *dst, int dst_size,
int width, int height, HuffEntry *he)
static int encode_plane(AVCodecContext *avctx, uint8_t *src,
uint8_t *dst, int stride, int plane_no,
int width, int height, PutByteContext *pb)
static int utvideo_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pic, int *got_packet)
#define OFFSET(x) offsetof(UtvideoContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass utvideo_class = ;
AVCodec ff_utvideo_encoder = ;

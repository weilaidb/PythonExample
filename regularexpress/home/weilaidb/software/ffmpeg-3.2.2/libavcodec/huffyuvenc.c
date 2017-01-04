static inline void diff_bytes(HYuvContext *s, uint8_t *dst,
const uint8_t *src0, const uint8_t *src1, int w)
static inline int sub_left_prediction(HYuvContext *s, uint8_t *dst,
const uint8_t *src, int w, int left)
static inline void sub_left_prediction_bgr32(HYuvContext *s, uint8_t *dst,
const uint8_t *src, int w,
int *red, int *green, int *blue,
int *alpha)
static inline void sub_left_prediction_rgb24(HYuvContext *s, uint8_t *dst,
uint8_t *src, int w,
int *red, int *green, int *blue)
static void sub_median_prediction(HYuvContext *s, uint8_t *dst, const uint8_t *src1, const uint8_t *src2, int w, int *left, int *left_top)
static int store_table(HYuvContext *s, const uint8_t *len, uint8_t *buf)
static int store_huffman_tables(HYuvContext *s, uint8_t *buf)
static av_cold int encode_init(AVCodecContext *avctx)
static int encode_422_bitstream(HYuvContext *s, int offset, int count)
static int encode_plane_bitstream(HYuvContext *s, int width, int plane)
static int encode_gray_bitstream(HYuvContext *s, int count)
static inline int encode_bgra_bitstream(HYuvContext *s, int count, int planes)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int encode_end(AVCodecContext *avctx)
#define OFFSET(x) offsetof(HYuvContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
#define COMMON_OPTIONS \
, \
, \
, \
, \
, \
static const AVOption normal_options[] = ;
static const AVOption ff_options[] = ;
static const AVClass normal_class = ;
static const AVClass ff_class = ;
AVCodec ff_huffyuv_encoder = ;
#if CONFIG_FFVHUFF_ENCODER
AVCodec ff_ffvhuff_encoder = ;

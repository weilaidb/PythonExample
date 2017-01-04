#if CONFIG_ZLIB
#define TIFF_MAX_ENTRY 32
static const uint8_t type_sizes2[14] = ;
typedef struct TiffEncoderContext  TiffEncoderContext;
static inline int check_size(TiffEncoderContext *s, uint64_t need)
static void tnput(uint8_t **p, int n, const uint8_t *val, enum TiffTypes type,
int flip)
static int add_entry(TiffEncoderContext *s, enum TiffTags tag,
enum TiffTypes type, int count, const void *ptr_val)
static int add_entry1(TiffEncoderContext *s,
enum TiffTags tag, enum TiffTypes type, int val)
static int encode_strip(TiffEncoderContext *s, const int8_t *src,
uint8_t *dst, int n, int compr)
static void pack_yuv(TiffEncoderContext *s, const AVFrame *p,
uint8_t *dst, int lnum)
#define ADD_ENTRY(s, tag, type, count, ptr_val)         \
do  while (0)
#define ADD_ENTRY1(s, tag, type, val)           \
do  while (0)
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int encode_init(AVCodecContext *avctx)
static av_cold int encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(TiffEncoderContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass tiffenc_class = ;
AVCodec ff_tiff_encoder = ;

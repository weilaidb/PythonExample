#define BITSTREAM_WRITER_LE
typedef struct GIFContext  GIFContext;
enum ;
static int pick_palette_entry(const uint8_t *buf, int linesize, int w, int h)
static int gif_image_write_image(AVCodecContext *avctx,
uint8_t **bytestream, uint8_t *end,
const uint32_t *palette,
const uint8_t *buf, const int linesize,
AVPacket *pkt)
static av_cold int gif_encode_init(AVCodecContext *avctx)
static int get_palette_transparency_index(const uint32_t *palette)
static int gif_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static int gif_encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(GIFContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption gif_options[] = ;
static const AVClass gif_class = ;
AVCodec ff_gif_encoder = ;

#define DEFAULT_TRANSPARENCY_INDEX 0x1f
static int get_palette_transparency_index(const uint32_t *palette)
static int gif_image_write_header(AVIOContext *pb, AVStream *st,
int loop_count, uint32_t *palette)
typedef struct GIFContext  GIFContext;
static int gif_write_header(AVFormatContext *s)
static int flush_packet(AVFormatContext *s, AVPacket *new)
static int gif_write_packet(AVFormatContext *s, AVPacket *pkt)
static int gif_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(GIFContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass gif_muxer_class = ;
AVOutputFormat ff_gif_muxer = ;

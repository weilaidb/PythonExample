typedef struct WebpContext WebpContext;
static int webp_write_header(AVFormatContext *s)
static int is_animated_webp_packet(AVPacket *pkt)
static int flush(AVFormatContext *s, int trailer, int64_t pts)
static int webp_write_packet(AVFormatContext *s, AVPacket *pkt)
static int webp_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(WebpContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass webp_muxer_class = ;
AVOutputFormat ff_webp_muxer = ;

typedef struct APNGMuxContext  APNGMuxContext;
static uint8_t *apng_find_chunk(uint32_t tag, uint8_t *buf, size_t length)
static void apng_write_chunk(AVIOContext *io_context, uint32_t tag,
uint8_t *buf, size_t length)
static int apng_write_header(AVFormatContext *format_context)
static int flush_packet(AVFormatContext *format_context, AVPacket *packet)
static int apng_write_packet(AVFormatContext *format_context, AVPacket *packet)
static int apng_write_trailer(AVFormatContext *format_context)
#define OFFSET(x) offsetof(APNGMuxContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass apng_muxer_class = ;
AVOutputFormat ff_apng_muxer = ;

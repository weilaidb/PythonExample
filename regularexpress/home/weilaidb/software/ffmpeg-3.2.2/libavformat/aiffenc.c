typedef struct AIFFOutputContext  AIFFOutputContext;
static int put_id3v2_tags(AVFormatContext *s, AIFFOutputContext *aiff)
static void put_meta(AVFormatContext *s, const char *key, uint32_t id)
static int aiff_write_header(AVFormatContext *s)
static int aiff_write_packet(AVFormatContext *s, AVPacket *pkt)
static int aiff_write_trailer(AVFormatContext *s)
#define OFFSET(x) offsetof(AIFFOutputContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass aiff_muxer_class = ;
AVOutputFormat ff_aiff_muxer = ;

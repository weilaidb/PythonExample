#define ADTS_HEADER_SIZE 7
typedef struct ADTSContext  ADTSContext;
#define ADTS_MAX_FRAME_BYTES ((1 << 13) - 1)
static int adts_decode_extradata(AVFormatContext *s, ADTSContext *adts, const uint8_t *buf, int size)
static int adts_write_header(AVFormatContext *s)
static int adts_write_frame_header(ADTSContext *ctx,
uint8_t *buf, int size, int pce_size)
static int adts_write_packet(AVFormatContext *s, AVPacket *pkt)
static int adts_write_trailer(AVFormatContext *s)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
#define OFFSET(obj) offsetof(ADTSContext, obj)
static const AVOption options[] = ;
static const AVClass adts_muxer_class = ;
AVOutputFormat ff_adts_muxer = ;

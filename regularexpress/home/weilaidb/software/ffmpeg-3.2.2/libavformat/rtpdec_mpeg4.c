#define MAX_AAC_HBR_FRAME_SIZE 8191
struct PayloadContext ;
typedef struct AttrNameMap  AttrNameMap;
#define ATTR_NAME_TYPE_INT 0
#define ATTR_NAME_TYPE_STR 1
static const AttrNameMap attr_names[] = ;
static void close_context(PayloadContext *data)
static int parse_fmtp_config(AVCodecParameters *par, char *value)
static int rtp_parse_mp4_au(PayloadContext *data, const uint8_t *buf, int len)
static int aac_parse_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static int parse_fmtp(AVFormatContext *s,
AVStream *stream, PayloadContext *data,
const char *attr, const char *value)
static int parse_sdp_line(AVFormatContext *s, int st_index,
PayloadContext *data, const char *line)
RTPDynamicProtocolHandler ff_mp4v_es_dynamic_handler = ;
RTPDynamicProtocolHandler ff_mpeg4_generic_dynamic_handler = ;

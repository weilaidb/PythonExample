struct PayloadContext ;
static void latm_close_context(PayloadContext *data)
static int latm_parse_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static int parse_fmtp_config(AVStream *st, const char *value)
static int parse_fmtp(AVFormatContext *s,
AVStream *stream, PayloadContext *data,
const char *attr, const char *value)
static int latm_parse_sdp_line(AVFormatContext *s, int st_index,
PayloadContext *data, const char *line)
RTPDynamicProtocolHandler ff_mp4a_latm_dynamic_handler = ;

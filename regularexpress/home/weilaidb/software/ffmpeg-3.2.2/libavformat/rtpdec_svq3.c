struct PayloadContext ;
static int svq3_parse_packet (AVFormatContext *s, PayloadContext *sv,
AVStream *st, AVPacket *pkt,
uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static void svq3_close_context(PayloadContext *sv)
RTPDynamicProtocolHandler ff_svq3_dynamic_handler = ;

struct PayloadContext ;
static void h263_close_context(PayloadContext *data)
static int h263_handle_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_h263_rfc2190_dynamic_handler = ;

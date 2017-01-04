#define RTP_AC3_PAYLOAD_HEADER_SIZE 2
struct PayloadContext ;
static void ac3_close_context(PayloadContext *data)
static int ac3_handle_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_ac3_dynamic_handler = ;

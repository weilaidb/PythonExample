#define RTP_H261_PAYLOAD_HEADER_SIZE 4
struct PayloadContext ;
static av_cold void h261_close_context(PayloadContext *pl_ctx)
static int h261_handle_packet(AVFormatContext *ctx, PayloadContext *rtp_h261_ctx,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_h261_dynamic_handler = ;

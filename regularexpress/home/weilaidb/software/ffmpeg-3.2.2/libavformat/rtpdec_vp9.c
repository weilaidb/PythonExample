#define RTP_VP9_DESC_REQUIRED_SIZE 1
struct PayloadContext ;
static av_cold int vp9_init(AVFormatContext *ctx, int st_index,
PayloadContext *data)
static int vp9_handle_packet(AVFormatContext *ctx, PayloadContext *rtp_vp9_ctx,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static void vp9_close_context(PayloadContext *vp9)
RTPDynamicProtocolHandler ff_vp9_dynamic_handler = ;

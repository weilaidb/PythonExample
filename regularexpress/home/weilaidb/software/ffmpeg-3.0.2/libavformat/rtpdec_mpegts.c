struct PayloadContext ;
static void mpegts_close_context(PayloadContext *data)
static av_cold int mpegts_init(AVFormatContext *ctx, int st_index,
PayloadContext *data)
static int mpegts_handle_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_mpegts_dynamic_handler = ;

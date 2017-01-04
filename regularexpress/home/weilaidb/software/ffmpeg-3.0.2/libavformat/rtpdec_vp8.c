struct PayloadContext ;
static int vp8_broken_sequence(AVFormatContext *ctx, PayloadContext *vp8,
const char *msg)
static int vp8_handle_packet(AVFormatContext *ctx, PayloadContext *vp8,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static av_cold int vp8_init(AVFormatContext *s, int st_index, PayloadContext *vp8)
static void vp8_close_context(PayloadContext *vp8)
static int vp8_need_keyframe(PayloadContext *vp8)
RTPDynamicProtocolHandler ff_vp8_dynamic_handler = ;

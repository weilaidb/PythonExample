struct PayloadContext ;
static av_cold void dv_close_context(PayloadContext *data)
static av_cold int dv_sdp_parse_fmtp_config(AVFormatContext *s,
AVStream *stream,
PayloadContext *dv_data,
const char *attr, const char *value)
static av_cold int dv_parse_sdp_line(AVFormatContext *ctx, int st_index,
PayloadContext *dv_data, const char *line)
static int dv_handle_packet(AVFormatContext *ctx, PayloadContext *rtp_dv_ctx,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_dv_dynamic_handler = ;

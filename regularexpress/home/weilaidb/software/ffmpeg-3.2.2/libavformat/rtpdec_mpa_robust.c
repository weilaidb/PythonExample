struct PayloadContext ;
static void mpa_robust_close_context(PayloadContext *data)
static int mpa_robust_parse_rtp_header(AVFormatContext *ctx,
const uint8_t *buf, int len,
unsigned *adu_size, unsigned *cont)
static int mpa_robust_parse_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt,
uint32_t *timestamp, const uint8_t *buf,
int len, uint16_t seq, int flags)
RTPDynamicProtocolHandler ff_mpeg_audio_robust_dynamic_handler = ;

static int rtp_asf_fix_header(uint8_t *buf, int len)
static int packetizer_read(void *opaque, uint8_t *buf, int buf_size)
static void init_packetizer(AVIOContext *pb, uint8_t *buf, int len)
int ff_wms_parse_sdp_a_line(AVFormatContext *s, const char *p)
static int asfrtp_parse_sdp_line(AVFormatContext *s, int stream_index,
PayloadContext *asf, const char *line)
struct PayloadContext ;
static int asfrtp_parse_packet(AVFormatContext *s, PayloadContext *asf,
AVStream *st, AVPacket *pkt,
uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static void asfrtp_close_context(PayloadContext *asf)
#define RTP_ASF_HANDLER(n, s, t) \
RTPDynamicProtocolHandler ff_ms_rtp_ ## n ## _handler =
RTP_ASF_HANDLER(asf_pfv, "x-asf-pf",  AVMEDIA_TYPE_VIDEO);
RTP_ASF_HANDLER(asf_pfa, "x-asf-pf",  AVMEDIA_TYPE_AUDIO);

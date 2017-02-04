struct RDTDemuxContext ;
ff_rdt_parse_open
ff_rdt_parse_close
struct PayloadContext ;
ff_rdt_calc_response_and_checksum
static int
rdt_load_mdpr (PayloadContext *rdt, AVStream *st, int rule_nr)
ff_rdt_parse_header
static int
rdt_parse_packet (AVFormatContext *ctx, PayloadContext *rdt, AVStream *st,
AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t rtp_seq, int flags)
ff_rdt_parse_packet
void
ff_rdt_subscribe_rule (char *cmd, int size,
int stream_nr, int rule_nr)
static unsigned char *
rdt_parse_b64buf (unsigned int *target_len, const char *p)
static int
rdt_parse_sdp_line (AVFormatContext *s, int st_index,
PayloadContext *rdt, const char *line)
real_parse_asm_rule
add_dstream
real_parse_asm_rulebook
void
ff_real_parse_sdp_a_line (AVFormatContext *s, int stream_index,
const char *line)
rdt_init
static void
rdt_close_context (PayloadContext *rdt)
RDT_HANDLER \
static RTPDynamicProtocolHandler rdt_ ## n ## _handler =
RDT_HANDLER(live_video, , AVMEDIA_TYPE_VIDEO);
RDT_HANDLER(live_audio, , AVMEDIA_TYPE_AUDIO);
RDT_HANDLER(video,      ,                AVMEDIA_TYPE_VIDEO);
RDT_HANDLER(audio,      ,                AVMEDIA_TYPE_AUDIO);
ff_register_rdt_dynamic_payload_handlers

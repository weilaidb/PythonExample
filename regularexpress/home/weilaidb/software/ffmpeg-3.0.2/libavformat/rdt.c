struct RDTDemuxContext ;
RDTDemuxContext *
ff_rdt_parse_open(AVFormatContext *ic, int first_stream_of_set_idx,
void *priv_data, RTPDynamicProtocolHandler *handler)
void
ff_rdt_parse_close(RDTDemuxContext *s)
struct PayloadContext ;
void
ff_rdt_calc_response_and_checksum(char response[41], char chksum[9],
const char *challenge)
static int
rdt_load_mdpr (PayloadContext *rdt, AVStream *st, int rule_nr)
int
ff_rdt_parse_header(const uint8_t *buf, int len,
int *pset_id, int *pseq_no, int *pstream_id,
int *pis_keyframe, uint32_t *ptimestamp)
static int
rdt_parse_packet (AVFormatContext *ctx, PayloadContext *rdt, AVStream *st,
AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t rtp_seq, int flags)
int
ff_rdt_parse_packet(RDTDemuxContext *s, AVPacket *pkt,
uint8_t **bufptr, int len)
void
ff_rdt_subscribe_rule (char *cmd, int size,
int stream_nr, int rule_nr)
static unsigned char *
rdt_parse_b64buf (unsigned int *target_len, const char *p)
static int
rdt_parse_sdp_line (AVFormatContext *s, int st_index,
PayloadContext *rdt, const char *line)
static void
real_parse_asm_rule(AVStream *st, const char *p, const char *end)
static AVStream *
add_dstream(AVFormatContext *s, AVStream *orig_st)
static void
real_parse_asm_rulebook(AVFormatContext *s, AVStream *orig_st,
const char *p)
void
ff_real_parse_sdp_a_line (AVFormatContext *s, int stream_index,
const char *line)
static av_cold int rdt_init(AVFormatContext *s, int st_index, PayloadContext *rdt)
static void
rdt_close_context (PayloadContext *rdt)
#define RDT_HANDLER(n, s, t) \
static RTPDynamicProtocolHandler rdt_ ## n ## _handler =
RDT_HANDLER(live_video, "x-pn-multirate-realvideo-live", AVMEDIA_TYPE_VIDEO);
RDT_HANDLER(live_audio, "x-pn-multirate-realaudio-live", AVMEDIA_TYPE_AUDIO);
RDT_HANDLER(video,      "x-pn-realvideo",                AVMEDIA_TYPE_VIDEO);
RDT_HANDLER(audio,      "x-pn-realaudio",                AVMEDIA_TYPE_AUDIO);
void ff_register_rdt_dynamic_payload_handlers(void)

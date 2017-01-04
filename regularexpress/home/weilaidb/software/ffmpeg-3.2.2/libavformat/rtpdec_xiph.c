struct PayloadContext ;
static void xiph_close_context(PayloadContext * data)
static int xiph_handle_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static int get_base128(const uint8_t ** buf, const uint8_t * buf_end)
static int
parse_packed_headers(AVFormatContext *s,
const uint8_t * packed_headers,
const uint8_t * packed_headers_end,
AVCodecParameters *par, PayloadContext * xiph_data)
static int xiph_parse_fmtp_pair(AVFormatContext *s,
AVStream* stream,
PayloadContext *xiph_data,
const char *attr, const char *value)
static int xiph_parse_sdp_line(AVFormatContext *s, int st_index,
PayloadContext *data, const char *line)
RTPDynamicProtocolHandler ff_theora_dynamic_handler = ;
RTPDynamicProtocolHandler ff_vorbis_dynamic_handler = ;

static const uint8_t frame_sizes_nb[16] = ;
static const uint8_t frame_sizes_wb[16] = ;
struct PayloadContext ;
static av_cold int amr_init(AVFormatContext *s, int st_index, PayloadContext *data)
static int amr_handle_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static int amr_parse_fmtp(AVFormatContext *s,
AVStream *stream, PayloadContext *data,
const char *attr, const char *value)
static int amr_parse_sdp_line(AVFormatContext *s, int st_index,
PayloadContext *data, const char *line)
RTPDynamicProtocolHandler ff_amr_nb_dynamic_handler = ;
RTPDynamicProtocolHandler ff_amr_wb_dynamic_handler = ;

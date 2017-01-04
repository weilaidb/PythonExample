struct PayloadContext ;
#define COUNT_NAL_TYPE(data, nal) data->packet_types_received[(nal) & 0x1f]++
#define NAL_COUNTERS data->packet_types_received
#define COUNT_NAL_TYPE(data, nal) do  while (0)
#define NAL_COUNTERS NULL
#define NAL_MASK 0x1f
static const uint8_t start_sequence[] = ;
static void parse_profile_level_id(AVFormatContext *s,
PayloadContext *h264_data,
const char *value)
int ff_h264_parse_sprop_parameter_sets(AVFormatContext *s,
uint8_t **data_ptr, int *size_ptr,
const char *value)
static int sdp_parse_fmtp_config_h264(AVFormatContext *s,
AVStream *stream,
PayloadContext *h264_data,
const char *attr, const char *value)
void ff_h264_parse_framesize(AVCodecContext *codec, const char *p)
int ff_h264_handle_aggregated_packet(AVFormatContext *ctx, PayloadContext *data, AVPacket *pkt,
const uint8_t *buf, int len,
int skip_between, int *nal_counters,
int nal_mask)
int ff_h264_handle_frag_packet(AVPacket *pkt, const uint8_t *buf, int len,
int start_bit, const uint8_t *nal_header,
int nal_header_len)
static int h264_handle_packet_fu_a(AVFormatContext *ctx, PayloadContext *data, AVPacket *pkt,
const uint8_t *buf, int len,
int *nal_counters, int nal_mask)
static int h264_handle_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
static void h264_close_context(PayloadContext *data)
static int parse_h264_sdp_line(AVFormatContext *s, int st_index,
PayloadContext *h264_data, const char *line)
RTPDynamicProtocolHandler ff_h264_dynamic_handler = ;

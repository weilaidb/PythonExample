#define RTP_HEVC_PAYLOAD_HEADER_SIZE       2
#define RTP_HEVC_FU_HEADER_SIZE            1
#define RTP_HEVC_DONL_FIELD_SIZE           2
#define RTP_HEVC_DOND_FIELD_SIZE           1
#define RTP_HEVC_AP_NALU_LENGTH_FIELD_SIZE 2
#define HEVC_SPECIFIED_NAL_UNIT_TYPES      48
struct PayloadContext ;
static const uint8_t start_sequence[] = ;
static av_cold int hevc_sdp_parse_fmtp_config(AVFormatContext *s,
AVStream *stream,
PayloadContext *hevc_data,
const char *attr, const char *value)
static av_cold int hevc_parse_sdp_line(AVFormatContext *ctx, int st_index,
PayloadContext *hevc_data, const char *line)
static int hevc_handle_packet(AVFormatContext *ctx, PayloadContext *rtp_hevc_ctx,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_hevc_dynamic_handler = ;

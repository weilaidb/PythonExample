#define AVFORMAT_RTPDEC_H
typedef struct PayloadContext PayloadContext;
typedef struct RTPDynamicProtocolHandler RTPDynamicProtocolHandler;
#define RTP_MIN_PACKET_LENGTH 12
#define RTP_MAX_PACKET_LENGTH 8192
#define RTP_REORDER_QUEUE_DEFAULT_SIZE 500
#define RTP_NOTS_VALUE ((uint32_t)-1)
typedef struct RTPDemuxContext RTPDemuxContext;
*ff_rtp_parse_open;
ff_rtp_parse_set_dynamic_protocol;
ff_rtp_parse_set_crypto;
ff_rtp_parse_packet;
ff_rtp_parse_close;
ff_rtp_queued_packet_time;
ff_rtp_reset_packet_queue;
ff_rtp_send_punch_packets;
ff_rtp_check_and_send_back_rr;
ff_rtp_send_rtcp_feedback;
typedef struct RTPStatistics  RTPStatistics;
#define RTP_FLAG_KEY    0x1
#define RTP_FLAG_MARKER 0x2
typedef int (*DynamicPayloadPacketHandlerProc)(AVFormatContext *ctx,
PayloadContext *s,
AVStream *st, AVPacket *pkt,
uint32_t *timestamp,
const uint8_t * buf,
int len, uint16_t seq, int flags);
struct RTPDynamicProtocolHandler ;
typedef struct RTPPacket  RTPPacket;
struct RTPDemuxContext ;
ff_register_dynamic_payload_handler;
*ff_rtp_handler_find_by_name;
*ff_rtp_handler_find_by_id;
ff_rtsp_next_attr_and_value;
ff_parse_fmtp(AVFormatContext *s,
AVStream *stream,
PayloadContext *data,
const char *attr, const char *value));
ff_register_rtp_dynamic_payload_handlers;
ff_rtp_finalize_packet;

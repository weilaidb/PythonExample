#define AVFORMAT_RTPDEC_H
typedef struct PayloadContext PayloadContext;
typedef struct RTPDynamicProtocolHandler RTPDynamicProtocolHandler;
#define RTP_MIN_PACKET_LENGTH 12
#define RTP_MAX_PACKET_LENGTH 8192
#define RTP_REORDER_QUEUE_DEFAULT_SIZE 500
#define RTP_NOTS_VALUE ((uint32_t)-1)
typedef struct RTPDemuxContext RTPDemuxContext;
RTPDemuxContext *ff_rtp_parse_open(AVFormatContext *s1, AVStream *st,
int payload_type, int queue_size);
void ff_rtp_parse_set_dynamic_protocol(RTPDemuxContext *s, PayloadContext *ctx,
RTPDynamicProtocolHandler *handler);
void ff_rtp_parse_set_crypto(RTPDemuxContext *s, const char *suite,
const char *params);
int ff_rtp_parse_packet(RTPDemuxContext *s, AVPacket *pkt,
uint8_t **buf, int len);
void ff_rtp_parse_close(RTPDemuxContext *s);
int64_t ff_rtp_queued_packet_time(RTPDemuxContext *s);
void ff_rtp_reset_packet_queue(RTPDemuxContext *s);
void ff_rtp_send_punch_packets(URLContext* rtp_handle);
int ff_rtp_check_and_send_back_rr(RTPDemuxContext *s, URLContext *fd,
AVIOContext *avio, int count);
int ff_rtp_send_rtcp_feedback(RTPDemuxContext *s, URLContext *fd,
AVIOContext *avio);
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
void ff_register_dynamic_payload_handler(RTPDynamicProtocolHandler *handler);
RTPDynamicProtocolHandler *ff_rtp_handler_find_by_name(const char *name,
enum AVMediaType codec_type);
RTPDynamicProtocolHandler *ff_rtp_handler_find_by_id(int id,
enum AVMediaType codec_type);
int ff_rtsp_next_attr_and_value(const char **p, char *attr, int attr_size,
char *value, int value_size);
int ff_parse_fmtp(AVFormatContext *s,
AVStream *stream, PayloadContext *data, const char *p,
int (*parse_fmtp)(AVFormatContext *s,
AVStream *stream,
PayloadContext *data,
const char *attr, const char *value));
void ff_register_rtp_dynamic_payload_handlers(void);
int ff_rtp_finalize_packet(AVPacket *pkt, AVIOContext **dyn_buf, int stream_idx);

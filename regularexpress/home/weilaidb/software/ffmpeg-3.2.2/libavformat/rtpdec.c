#define MIN_FEEDBACK_INTERVAL 200000
static RTPDynamicProtocolHandler gsm_dynamic_handler = ;
static RTPDynamicProtocolHandler realmedia_mp3_dynamic_handler = ;
static RTPDynamicProtocolHandler speex_dynamic_handler = ;
static RTPDynamicProtocolHandler opus_dynamic_handler = ;
static RTPDynamicProtocolHandler t140_dynamic_handler = ;
static RTPDynamicProtocolHandler *rtp_first_dynamic_payload_handler = NULL;
void ff_register_dynamic_payload_handler(RTPDynamicProtocolHandler *handler)
void ff_register_rtp_dynamic_payload_handlers(void)
RTPDynamicProtocolHandler *ff_rtp_handler_find_by_name(const char *name,
enum AVMediaType codec_type)
RTPDynamicProtocolHandler *ff_rtp_handler_find_by_id(int id,
enum AVMediaType codec_type)
static int rtcp_parse_packet(RTPDemuxContext *s, const unsigned char *buf,
int len)
#define RTP_SEQ_MOD (1 << 16)
static void rtp_init_statistics(RTPStatistics *s, uint16_t base_sequence)
static void rtp_init_sequence(RTPStatistics *s, uint16_t seq)
static int rtp_valid_packet_in_sequence(RTPStatistics *s, uint16_t seq)
static void rtcp_update_jitter(RTPStatistics *s, uint32_t sent_timestamp,
uint32_t arrival_timestamp)
int ff_rtp_check_and_send_back_rr(RTPDemuxContext *s, URLContext *fd,
AVIOContext *avio, int count)
void ff_rtp_send_punch_packets(URLContext *rtp_handle)
static int find_missing_packets(RTPDemuxContext *s, uint16_t *first_missing,
uint16_t *missing_mask)
int ff_rtp_send_rtcp_feedback(RTPDemuxContext *s, URLContext *fd,
AVIOContext *avio)
RTPDemuxContext *ff_rtp_parse_open(AVFormatContext *s1, AVStream *st,
int payload_type, int queue_size)
void ff_rtp_parse_set_dynamic_protocol(RTPDemuxContext *s, PayloadContext *ctx,
RTPDynamicProtocolHandler *handler)
void ff_rtp_parse_set_crypto(RTPDemuxContext *s, const char *suite,
const char *params)
static void finalize_packet(RTPDemuxContext *s, AVPacket *pkt, uint32_t timestamp)
static int rtp_parse_packet_internal(RTPDemuxContext *s, AVPacket *pkt,
const uint8_t *buf, int len)
void ff_rtp_reset_packet_queue(RTPDemuxContext *s)
static int enqueue_packet(RTPDemuxContext *s, uint8_t *buf, int len)
static int has_next_packet(RTPDemuxContext *s)
int64_t ff_rtp_queued_packet_time(RTPDemuxContext *s)
static int rtp_parse_queued_packet(RTPDemuxContext *s, AVPacket *pkt)
static int rtp_parse_one_packet(RTPDemuxContext *s, AVPacket *pkt,
uint8_t **bufptr, int len)
int ff_rtp_parse_packet(RTPDemuxContext *s, AVPacket *pkt,
uint8_t **bufptr, int len)
void ff_rtp_parse_close(RTPDemuxContext *s)
int ff_parse_fmtp(AVFormatContext *s,
AVStream *stream, PayloadContext *data, const char *p,
int (*parse_fmtp)(AVFormatContext *s,
AVStream *stream,
PayloadContext *data,
const char *attr, const char *value))
int ff_rtp_finalize_packet(AVPacket *pkt, AVIOContext **dyn_buf, int stream_idx)

#if HAVE_POLL_H
#define POLL_TIMEOUT_MS 100
#define READ_PACKET_TIMEOUT_S 10
#define MAX_TIMEOUTS READ_PACKET_TIMEOUT_S * 1000 / POLL_TIMEOUT_MS
#define SDP_MAX_SIZE 16384
#define RECVBUF_SIZE 10 * RTP_MAX_PACKET_LENGTH
#define DEFAULT_REORDERING_DELAY 100000
#define OFFSET(x) offsetof(RTSPState, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
#define ENC AV_OPT_FLAG_ENCODING_PARAM
#define RTSP_FLAG_OPTS(name, longname) \
, \
#define RTSP_MEDIATYPE_OPTS(name, longname) \
, \
, \
, \
, \
#define COMMON_OPTS() \
, \
\
const AVOption ff_rtsp_options[] = ;
static const AVOption sdp_options[] = ;
static const AVOption rtp_options[] = ;
static AVDictionary *map_to_opts(RTSPState *rt)
static void get_word_until_chars(char *buf, int buf_size,
const char *sep, const char **pp)
static void get_word_sep(char *buf, int buf_size, const char *sep,
const char **pp)
static void get_word(char *buf, int buf_size, const char **pp)
static void rtsp_parse_range_npt(const char *p, int64_t *start, int64_t *end)
static int get_sockaddr(AVFormatContext *s,
const char *buf, struct sockaddr_storage *sock)
#if CONFIG_RTPDEC
static void init_rtp_handler(RTPDynamicProtocolHandler *handler,
RTSPStream *rtsp_st, AVStream *st)
static void finalize_rtp_handler_init(AVFormatContext *s, RTSPStream *rtsp_st,
AVStream *st)
static int sdp_parse_rtpmap(AVFormatContext *s,
AVStream *st, RTSPStream *rtsp_st,
int payload_type, const char *p)
int ff_rtsp_next_attr_and_value(const char **p, char *attr, int attr_size,
char *value, int value_size)
typedef struct SDPParseState  SDPParseState;
static void copy_default_source_addrs(struct RTSPSource **addrs, int count,
struct RTSPSource ***dest, int *dest_count)
static void parse_fmtp(AVFormatContext *s, RTSPState *rt,
int payload_type, const char *line)
static void sdp_parse_line(AVFormatContext *s, SDPParseState *s1,
int letter, const char *buf)
int ff_sdp_parse(AVFormatContext *s, const char *content)
void ff_rtsp_undo_setup(AVFormatContext *s, int send_packets)
void ff_rtsp_close_streams(AVFormatContext *s)
int ff_rtsp_open_transport_ctx(AVFormatContext *s, RTSPStream *rtsp_st)
#if CONFIG_RTSP_DEMUXER || CONFIG_RTSP_MUXER
static void rtsp_parse_range(int *min_ptr, int *max_ptr, const char **pp)
static void rtsp_parse_transport(AVFormatContext *s,
RTSPMessageHeader *reply, const char *p)
static void handle_rtp_info(RTSPState *rt, const char *url,
uint32_t seq, uint32_t rtptime)
static void rtsp_parse_rtp_info(RTSPState *rt, const char *p)
void ff_rtsp_parse_line(AVFormatContext *s,
RTSPMessageHeader *reply, const char *buf,
RTSPState *rt, const char *method)
void ff_rtsp_skip_packet(AVFormatContext *s)
int ff_rtsp_read_reply(AVFormatContext *s, RTSPMessageHeader *reply,
unsigned char **content_ptr,
int return_on_interleaved_data, const char *method)
static int rtsp_send_cmd_with_content_async(AVFormatContext *s,
const char *method, const char *url,
const char *headers,
const unsigned char *send_content,
int send_content_length)
int ff_rtsp_send_cmd_async(AVFormatContext *s, const char *method,
const char *url, const char *headers)
int ff_rtsp_send_cmd(AVFormatContext *s, const char *method, const char *url,
const char *headers, RTSPMessageHeader *reply,
unsigned char **content_ptr)
int ff_rtsp_send_cmd_with_content(AVFormatContext *s,
const char *method, const char *url,
const char *header,
RTSPMessageHeader *reply,
unsigned char **content_ptr,
const unsigned char *send_content,
int send_content_length)
int ff_rtsp_make_setup_request(AVFormatContext *s, const char *host, int port,
int lower_transport, const char *real_challenge)
void ff_rtsp_close_connections(AVFormatContext *s)
int ff_rtsp_connect(AVFormatContext *s)
#if CONFIG_RTPDEC
static int udp_read_packet(AVFormatContext *s, RTSPStream **prtsp_st,
uint8_t *buf, int buf_size, int64_t wait_end)
static int pick_stream(AVFormatContext *s, RTSPStream **rtsp_st,
const uint8_t *buf, int len)
int ff_rtsp_fetch_packet(AVFormatContext *s, AVPacket *pkt)
#if CONFIG_SDP_DEMUXER
static int sdp_probe(AVProbeData *p1)
static void append_source_addrs(char *buf, int size, const char *name,
int count, struct RTSPSource **addrs)
static int sdp_read_header(AVFormatContext *s)
static int sdp_read_close(AVFormatContext *s)
static const AVClass sdp_demuxer_class = ;
AVInputFormat ff_sdp_demuxer = ;
#if CONFIG_RTP_DEMUXER
static int rtp_probe(AVProbeData *p)
static int rtp_read_header(AVFormatContext *s)
static const AVClass rtp_demuxer_class = ;
AVInputFormat ff_rtp_demuxer = ;

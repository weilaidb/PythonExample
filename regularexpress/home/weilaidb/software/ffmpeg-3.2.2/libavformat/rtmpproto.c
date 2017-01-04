#if CONFIG_ZLIB
#define APP_MAX_LENGTH 1024
#define PLAYPATH_MAX_LENGTH 512
#define TCURL_MAX_LENGTH 1024
#define FLASHVER_MAX_LENGTH 64
#define RTMP_PKTDATA_DEFAULT_SIZE 4096
#define RTMP_HEADER 11
typedef enum  ClientState;
typedef struct TrackedMethod  TrackedMethod;
typedef struct RTMPContext  RTMPContext;
#define PLAYER_KEY_OPEN_PART_LEN 30
static const uint8_t rtmp_player_key[] = ;
#define SERVER_KEY_OPEN_PART_LEN 36
static const uint8_t rtmp_server_key[] = ;
static int handle_chunk_size(URLContext *s, RTMPPacket *pkt);
static int handle_server_bw(URLContext *s, RTMPPacket *pkt);
static int handle_client_bw(URLContext *s, RTMPPacket *pkt);
static int add_tracked_method(RTMPContext *rt, const char *name, int id)
static void del_tracked_method(RTMPContext *rt, int index)
static int find_tracked_method(URLContext *s, RTMPPacket *pkt, int offset,
char **tracked_method)
static void free_tracked_methods(RTMPContext *rt)
static int rtmp_send_packet(RTMPContext *rt, RTMPPacket *pkt, int track)
static int rtmp_write_amf_data(URLContext *s, char *param, uint8_t **p)
static int gen_connect(URLContext *s, RTMPContext *rt)
#define RTMP_CTRL_ABORT_MESSAGE  (2)
static int read_connect(URLContext *s, RTMPContext *rt)
static int gen_release_stream(URLContext *s, RTMPContext *rt)
static int gen_fcpublish_stream(URLContext *s, RTMPContext *rt)
static int gen_fcunpublish_stream(URLContext *s, RTMPContext *rt)
static int gen_create_stream(URLContext *s, RTMPContext *rt)
static int gen_delete_stream(URLContext *s, RTMPContext *rt)
static int gen_get_stream_length(URLContext *s, RTMPContext *rt)
static int gen_buffer_time(URLContext *s, RTMPContext *rt)
static int gen_play(URLContext *s, RTMPContext *rt)
static int gen_seek(URLContext *s, RTMPContext *rt, int64_t timestamp)
static int gen_pause(URLContext *s, RTMPContext *rt, int pause, uint32_t timestamp)
static int gen_publish(URLContext *s, RTMPContext *rt)
static int gen_pong(URLContext *s, RTMPContext *rt, RTMPPacket *ppkt)
static int gen_swf_verification(URLContext *s, RTMPContext *rt)
static int gen_server_bw(URLContext *s, RTMPContext *rt)
static int gen_check_bw(URLContext *s, RTMPContext *rt)
static int gen_bytes_read(URLContext *s, RTMPContext *rt, uint32_t ts)
static int gen_fcsubscribe_stream(URLContext *s, RTMPContext *rt,
const char *subscribe)
int ff_rtmp_calc_digest(const uint8_t *src, int len, int gap,
const uint8_t *key, int keylen, uint8_t *dst)
int ff_rtmp_calc_digest_pos(const uint8_t *buf, int off, int mod_val,
int add_val)
static int rtmp_handshake_imprint_with_digest(uint8_t *buf, int encrypted)
static int rtmp_validate_digest(uint8_t *buf, int off)
static int rtmp_calc_swf_verification(URLContext *s, RTMPContext *rt,
uint8_t *buf)
#if CONFIG_ZLIB
static int rtmp_uncompress_swfplayer(uint8_t *in_data, int64_t in_size,
uint8_t **out_data, int64_t *out_size)
static int rtmp_calc_swfhash(URLContext *s)
static int rtmp_handshake(URLContext *s, RTMPContext *rt)
static int rtmp_receive_hs_packet(RTMPContext* rt, uint32_t *first_int,
uint32_t *second_int, char *arraydata,
int size)
static int rtmp_send_hs_packet(RTMPContext* rt, uint32_t first_int,
uint32_t second_int, char *arraydata, int size)
static int rtmp_server_handshake(URLContext *s, RTMPContext *rt)
static int handle_chunk_size(URLContext *s, RTMPPacket *pkt)
static int handle_ping(URLContext *s, RTMPPacket *pkt)
static int handle_client_bw(URLContext *s, RTMPPacket *pkt)
static int handle_server_bw(URLContext *s, RTMPPacket *pkt)
static int do_adobe_auth(RTMPContext *rt, const char *user, const char *salt,
const char *opaque, const char *challenge)
static int do_llnw_auth(RTMPContext *rt, const char *user, const char *nonce)
static int handle_connect_error(URLContext *s, const char *desc)
static int handle_invoke_error(URLContext *s, RTMPPacket *pkt)
static int write_begin(URLContext *s)
static int write_status(URLContext *s, RTMPPacket *pkt,
const char *status, const char *filename)
static int send_invoke_response(URLContext *s, RTMPPacket *pkt)
static int read_number_result(RTMPPacket *pkt, double *number)
static int handle_invoke_result(URLContext *s, RTMPPacket *pkt)
static int handle_invoke_status(URLContext *s, RTMPPacket *pkt)
static int handle_invoke(URLContext *s, RTMPPacket *pkt)
static int update_offset(RTMPContext *rt, int size)
static int append_flv_data(RTMPContext *rt, RTMPPacket *pkt, int skip)
static int handle_notify(URLContext *s, RTMPPacket *pkt)
static int rtmp_parse_result(URLContext *s, RTMPContext *rt, RTMPPacket *pkt)
static int handle_metadata(RTMPContext *rt, RTMPPacket *pkt)
static int get_packet(URLContext *s, int for_header)
static int rtmp_close(URLContext *h)
static int inject_fake_duration_metadata(RTMPContext *rt)
static int rtmp_open(URLContext *s, const char *uri, int flags)
static int rtmp_read(URLContext *s, uint8_t *buf, int size)
static int64_t rtmp_seek(URLContext *s, int stream_index, int64_t timestamp,
int flags)
static int rtmp_pause(URLContext *s, int pause)
static int rtmp_write(URLContext *s, const uint8_t *buf, int size)
#define OFFSET(x) offsetof(RTMPContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption rtmp_options[] = {
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
,
;
#define RTMP_PROTOCOL(flavor)                    \
static const AVClass flavor##_class = ;                                               \
\
const URLProtocol ff_##flavor##_protocol = ;
RTMP_PROTOCOL(rtmp)
RTMP_PROTOCOL(rtmpe)
RTMP_PROTOCOL(rtmps)
RTMP_PROTOCOL(rtmpt)
RTMP_PROTOCOL(rtmpte)
RTMP_PROTOCOL(rtmpts)

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
handle_chunk_size;
handle_server_bw;
handle_client_bw;
add_tracked_method
del_tracked_method
find_tracked_method
free_tracked_methods
rtmp_send_packet
rtmp_write_amf_data
gen_connect
#define RTMP_CTRL_ABORT_MESSAGE  (2)
read_connect
gen_release_stream
gen_fcpublish_stream
gen_fcunpublish_stream
gen_create_stream
gen_delete_stream
gen_get_stream_length
gen_buffer_time
gen_play
gen_seek
gen_pause
gen_publish
gen_pong
gen_swf_verification
gen_server_bw
gen_check_bw
gen_bytes_read
gen_fcsubscribe_stream
ff_rtmp_calc_digest
ff_rtmp_calc_digest_pos
rtmp_handshake_imprint_with_digest
rtmp_validate_digest
rtmp_calc_swf_verification
#if CONFIG_ZLIB
rtmp_uncompress_swfplayer
rtmp_calc_swfhash
rtmp_handshake
rtmp_receive_hs_packet
rtmp_send_hs_packet
rtmp_server_handshake
handle_chunk_size
handle_ping
handle_client_bw
handle_server_bw
do_adobe_auth
do_llnw_auth
handle_connect_error
handle_invoke_error
write_begin
write_status
send_invoke_response
read_number_result
handle_invoke_result
handle_invoke_status
handle_invoke
update_offset
append_flv_data
handle_notify
rtmp_parse_result
handle_metadata
get_packet
rtmp_close
inject_fake_duration_metadata
rtmp_open
rtmp_read
rtmp_seek
rtmp_pause
rtmp_write
OFFSET offsetof(RTMPContext, x)
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
RTMP_PROTOCOL                    \
static const AVClass flavor##_class = ;                                               \
\
const URLProtocol ff_##flavor##_protocol = ;
RTMP_PROTOCOL(rtmp)
RTMP_PROTOCOL(rtmpe)
RTMP_PROTOCOL(rtmps)
RTMP_PROTOCOL(rtmpt)
RTMP_PROTOCOL(rtmpte)
RTMP_PROTOCOL(rtmpts)

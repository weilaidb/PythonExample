#if !HAVE_CLOSESOCKET
#define closesocket close
#if HAVE_UNISTD_H
#if HAVE_POLL_H
#define PATH_LENGTH 1024
const char program_name[] = ;
const int program_birth_year = 2000;
static const OptionDef options[];
enum HTTPState ;
static const char * const http_state[] = ;
#define IOBUFFER_INIT_SIZE 8192
#define HTTP_REQUEST_TIMEOUT (15 * 1000)
#define RTSP_REQUEST_TIMEOUT (3600 * 24 * 1000)
#define SYNC_TIMEOUT (10 * 1000)
typedef struct RTSPActionServerSetup  RTSPActionServerSetup;
typedef struct  DataRateData;
typedef struct HTTPContext  HTTPContext;
typedef struct FeedData  FeedData;
static HTTPContext *first_http_ctx;
static FFServerConfig config = ;
new_connection;
close_connection;
handle_connection;
print_stream_params;
compute_status;
open_input_stream;
http_parse_request;
http_send_data;
http_start_receive_data;
http_receive_data;
rtsp_parse_request;
rtsp_cmd_describe;
rtsp_cmd_options;
rtsp_cmd_setup;
rtsp_cmd_play;
rtsp_cmd_interrupt;
prepare_sdp_description;
*rtp_new_connection;
rtp_new_av_stream;
static size_t htmlencode (const char *src, char **dest);
static inline void cp_html_entity (char *buffer, const char *entity);
check_codec_match;
static const char *my_program_name;
static int no_launch;
static int need_to_start_children;
static unsigned int nb_connections;
static uint64_t current_bandwidth;
static int64_t cur_time;
static AVLFG random_state;
static FILE *logfile = NULL;
static inline void cp_html_entity (char *buffer, const char *entity)
static size_t htmlencode (const char *src, char **dest)
ffm_read_write_index
ffm_write_write_index
ffm_set_write_index
*ctime1
http_vlog
__attribute__ ((format (printf, 1, 2)))
http_log
http_av_log
log_connection
update_datarate
compute_datarate
start_children
socket_open_listen
start_multicast
http_server
start_wait_request
http_send_too_busy_reply
new_connection
close_connection
handle_connection
extract_rates
find_stream_in_feed
modify_current_stream
get_word
parse_dynamic_acl
free_acl_list
validate_acl_list
validate_acl
compute_real_filename
enum RedirType ;
http_parse_request
fmt_bytecount
print_stream_params
compute_status
open_input_stream
get_server_clock
get_packet_send_clock
http_prepare_data
http_send_data
http_start_receive_data
http_receive_data
rtsp_reply_header
rtsp_reply_error
rtsp_parse_request
prepare_sdp_description
rtsp_cmd_options
rtsp_cmd_describe
*find_rtp_session
*find_transport
rtsp_cmd_setup
*find_rtp_session_with_url
rtsp_cmd_play
rtsp_cmd_interrupt
*rtp_new_connection
rtp_new_av_stream
*add_av_stream1
add_av_stream
remove_stream
extract_mpeg4_header
build_file_streams
static inline
check_codec_match
build_feed_streams
compute_bandwidth
handle_child_exit
opt_debug
show_help_default
static const OptionDef options[] = ;
main

#if !HAVE_CLOSESOCKET
#define closesocket close
#if HAVE_UNISTD_H
#if HAVE_POLL_H
#define PATH_LENGTH 1024
const char program_name[] = "ffserver";
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
static void new_connection(int server_fd, int is_rtsp);
static void close_connection(HTTPContext *c);
static int handle_connection(HTTPContext *c);
static inline void print_stream_params(AVIOContext *pb, FFServerStream *stream);
static void compute_status(HTTPContext *c);
static int open_input_stream(HTTPContext *c, const char *info);
static int http_parse_request(HTTPContext *c);
static int http_send_data(HTTPContext *c);
static int http_start_receive_data(HTTPContext *c);
static int http_receive_data(HTTPContext *c);
static int rtsp_parse_request(HTTPContext *c);
static void rtsp_cmd_describe(HTTPContext *c, const char *url);
static void rtsp_cmd_options(HTTPContext *c, const char *url);
static void rtsp_cmd_setup(HTTPContext *c, const char *url,
RTSPMessageHeader *h);
static void rtsp_cmd_play(HTTPContext *c, const char *url,
RTSPMessageHeader *h);
static void rtsp_cmd_interrupt(HTTPContext *c, const char *url,
RTSPMessageHeader *h, int pause_only);
static int prepare_sdp_description(FFServerStream *stream, uint8_t **pbuffer,
struct in_addr my_ip);
static HTTPContext *rtp_new_connection(struct sockaddr_in *from_addr,
FFServerStream *stream,
const char *session_id,
enum RTSPLowerTransport rtp_protocol);
static int rtp_new_av_stream(HTTPContext *c,
int stream_index, struct sockaddr_in *dest_addr,
HTTPContext *rtsp_c);
static size_t htmlencode (const char *src, char **dest);
static inline void cp_html_entity (char *buffer, const char *entity);
static inline int check_codec_match(AVCodecContext *ccf, AVCodecContext *ccs,
int stream);
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
static int64_t ffm_read_write_index(int fd)
static int ffm_write_write_index(int fd, int64_t pos)
static void ffm_set_write_index(AVFormatContext *s, int64_t pos,
int64_t file_size)
static char *ctime1(char *buf2, size_t buf_size)
static void http_vlog(const char *fmt, va_list vargs)
__attribute__ ((format (printf, 1, 2)))
static void http_log(const char *fmt, ...)
static void http_av_log(void *ptr, int level, const char *fmt, va_list vargs)
static void log_connection(HTTPContext *c)
static void update_datarate(DataRateData *drd, int64_t count)
static int compute_datarate(DataRateData *drd, int64_t count)
static void start_children(FFServerStream *feed)
static int socket_open_listen(struct sockaddr_in *my_addr)
static void start_multicast(void)
static int http_server(void)
static void start_wait_request(HTTPContext *c, int is_rtsp)
static void http_send_too_busy_reply(int fd)
static void new_connection(int server_fd, int is_rtsp)
static void close_connection(HTTPContext *c)
static int handle_connection(HTTPContext *c)
static int extract_rates(char *rates, int ratelen, const char *request)
static int find_stream_in_feed(FFServerStream *feed, AVCodecContext *codec,
int bit_rate)
static int modify_current_stream(HTTPContext *c, char *rates)
static void get_word(char *buf, int buf_size, const char **pp)
static FFServerIPAddressACL* parse_dynamic_acl(FFServerStream *stream,
HTTPContext *c)
static void free_acl_list(FFServerIPAddressACL *in_acl)
static int validate_acl_list(FFServerIPAddressACL *in_acl, HTTPContext *c)
static int validate_acl(FFServerStream *stream, HTTPContext *c)
static void compute_real_filename(char *filename, int max_size)
enum RedirType ;
static int http_parse_request(HTTPContext *c)
static void fmt_bytecount(AVIOContext *pb, int64_t count)
static inline void print_stream_params(AVIOContext *pb, FFServerStream *stream)
static void compute_status(HTTPContext *c)
static int open_input_stream(HTTPContext *c, const char *info)
static int64_t get_server_clock(HTTPContext *c)
static int64_t get_packet_send_clock(HTTPContext *c)
static int http_prepare_data(HTTPContext *c)
static int http_send_data(HTTPContext *c)
static int http_start_receive_data(HTTPContext *c)
static int http_receive_data(HTTPContext *c)
static void rtsp_reply_header(HTTPContext *c, enum RTSPStatusCode error_number)
static void rtsp_reply_error(HTTPContext *c, enum RTSPStatusCode error_number)
static int rtsp_parse_request(HTTPContext *c)
static int prepare_sdp_description(FFServerStream *stream, uint8_t **pbuffer,
struct in_addr my_ip)
static void rtsp_cmd_options(HTTPContext *c, const char *url)
static void rtsp_cmd_describe(HTTPContext *c, const char *url)
static HTTPContext *find_rtp_session(const char *session_id)
static RTSPTransportField *find_transport(RTSPMessageHeader *h, enum RTSPLowerTransport lower_transport)
static void rtsp_cmd_setup(HTTPContext *c, const char *url,
RTSPMessageHeader *h)
static HTTPContext *find_rtp_session_with_url(const char *url,
const char *session_id)
static void rtsp_cmd_play(HTTPContext *c, const char *url, RTSPMessageHeader *h)
static void rtsp_cmd_interrupt(HTTPContext *c, const char *url,
RTSPMessageHeader *h, int pause_only)
static HTTPContext *rtp_new_connection(struct sockaddr_in *from_addr,
FFServerStream *stream,
const char *session_id,
enum RTSPLowerTransport rtp_protocol)
static int rtp_new_av_stream(HTTPContext *c,
int stream_index, struct sockaddr_in *dest_addr,
HTTPContext *rtsp_c)
static AVStream *add_av_stream1(FFServerStream *stream,
AVCodecContext *codec, int copy)
static int add_av_stream(FFServerStream *feed, AVStream *st)
static void remove_stream(FFServerStream *stream)
static void extract_mpeg4_header(AVFormatContext *infile)
static void build_file_streams(void)
static inline
int check_codec_match(AVCodecContext *ccf, AVCodecContext *ccs, int stream)
static int build_feed_streams(void)
static void compute_bandwidth(void)
static void handle_child_exit(int sig)
static void opt_debug(void)
void show_help_default(const char *opt, const char *arg)
static const OptionDef options[] = ;
int main(int argc, char **argv)

#if HAVE_POLL_H
typedef struct TCPContext  TCPContext;
OFFSET offsetof(TCPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass tcp_class = ;
tcp_open
tcp_accept
tcp_read
tcp_write
tcp_shutdown
tcp_close
tcp_get_file_handle
const URLProtocol ff_tcp_protocol = ;

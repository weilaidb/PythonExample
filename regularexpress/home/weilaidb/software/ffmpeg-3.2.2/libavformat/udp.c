#define _DEFAULT_SOURCE
#define _BSD_SOURCE
#if HAVE_UDPLITE_H
#define UDPLITE_SEND_CSCOV                               10
#define UDPLITE_RECV_CSCOV                               11
#define IPPROTO_UDPLITE                                  136
#if HAVE_PTHREAD_CANCEL
#define HAVE_PTHREAD_CANCEL 0
#define IPV6_ADD_MEMBERSHIP IPV6_JOIN_GROUP
#define IPV6_DROP_MEMBERSHIP IPV6_LEAVE_GROUP
#define UDP_TX_BUF_SIZE 32768
#define UDP_MAX_PKT_SIZE 65536
#define UDP_HEADER_SIZE 8
typedef struct UDPContext  UDPContext;
OFFSET offsetof(UDPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass udp_class = ;
static const AVClass udplite_context_class = ;
log_net_error
udp_set_multicast_ttl
udp_join_multicast_group
udp_leave_multicast_group
*udp_resolve_host
udp_set_multicast_sources
udp_set_url
udp_socket_create
udp_port
ff_udp_set_remote_url
ff_udp_get_local_port
udp_get_file_handle
#if HAVE_PTHREAD_CANCEL
*circular_buffer_task_rx
*circular_buffer_task_tx
parse_source_list
udp_open
udplite_open
udp_read
udp_write
udp_close
const URLProtocol ff_udp_protocol = ;
const URLProtocol ff_udplite_protocol = ;

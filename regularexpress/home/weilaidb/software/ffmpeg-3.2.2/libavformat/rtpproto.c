#if HAVE_POLL_H
typedef struct RTPContext  RTPContext;
OFFSET offsetof(RTPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass rtp_class = ;
ff_rtp_set_remote_url
rtp_resolve_host
compare_addr
get_port
set_port
rtp_check_source_lists
url_add_option
build_udp_url
rtp_parse_addr_list
rtp_open
rtp_read
rtp_write
rtp_close
ff_rtp_get_local_rtp_port
ff_rtp_get_local_rtcp_port
rtp_get_file_handle
rtp_get_multi_file_handle
const URLProtocol ff_rtp_protocol = ;

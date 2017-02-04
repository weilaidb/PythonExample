#if HAVE_POLL_H
#define POLL_TIMEOUT_MS 100
#define READ_PACKET_TIMEOUT_S 10
#define MAX_TIMEOUTS READ_PACKET_TIMEOUT_S * 1000 / POLL_TIMEOUT_MS
#define SDP_MAX_SIZE 16384
#define RECVBUF_SIZE 10 * RTP_MAX_PACKET_LENGTH
#define DEFAULT_REORDERING_DELAY 100000
OFFSET offsetof(RTSPState, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
#define ENC AV_OPT_FLAG_ENCODING_PARAM
RTSP_FLAG_OPTS \
, \
RTSP_MEDIATYPE_OPTS \
, \
, \
, \
, \
COMMON_OPTS \
, \
\
const AVOption ff_rtsp_options[] = ;
static const AVOption sdp_options[] = ;
static const AVOption rtp_options[] = ;
*map_to_opts
get_word_until_chars
get_word_sep
get_word
rtsp_parse_range_npt
get_sockaddr
#if CONFIG_RTPDEC
init_rtp_handler
finalize_rtp_handler_init
sdp_parse_rtpmap
ff_rtsp_next_attr_and_value
typedef struct SDPParseState  SDPParseState;
copy_default_source_addrs
parse_fmtp
sdp_parse_line
ff_sdp_parse
ff_rtsp_undo_setup
ff_rtsp_close_streams
ff_rtsp_open_transport_ctx
#if CONFIG_RTSP_DEMUXER || CONFIG_RTSP_MUXER
rtsp_parse_range
rtsp_parse_transport
handle_rtp_info
rtsp_parse_rtp_info
ff_rtsp_parse_line
ff_rtsp_skip_packet
ff_rtsp_read_reply
rtsp_send_cmd_with_content_async
ff_rtsp_send_cmd_async
ff_rtsp_send_cmd
ff_rtsp_send_cmd_with_content
ff_rtsp_make_setup_request
ff_rtsp_close_connections
ff_rtsp_connect
#if CONFIG_RTPDEC
udp_read_packet
pick_stream
ff_rtsp_fetch_packet
#if CONFIG_SDP_DEMUXER
sdp_probe
append_source_addrs
sdp_read_header
sdp_read_close
static const AVClass sdp_demuxer_class = ;
AVInputFormat ff_sdp_demuxer = ;
#if CONFIG_RTP_DEMUXER
rtp_probe
rtp_read_header
static const AVClass rtp_demuxer_class = ;
AVInputFormat ff_rtp_demuxer = ;

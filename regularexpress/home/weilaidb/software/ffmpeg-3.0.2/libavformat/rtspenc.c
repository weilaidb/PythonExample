#if HAVE_POLL_H
#define SDP_MAX_SIZE 16384
static const AVClass rtsp_muxer_class = ;
int ff_rtsp_setup_output_streams(AVFormatContext *s, const char *addr)
static int rtsp_write_record(AVFormatContext *s)
static int rtsp_write_header(AVFormatContext *s)
int ff_rtsp_tcp_write_packet(AVFormatContext *s, RTSPStream *rtsp_st)
static int rtsp_write_packet(AVFormatContext *s, AVPacket *pkt)
static int rtsp_write_close(AVFormatContext *s)
AVOutputFormat ff_rtsp_muxer = ;

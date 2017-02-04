#define AVFORMAT_RTPENC_H
struct RTPMuxContext ;
typedef struct RTPMuxContext RTPMuxContext;
#define FF_RTP_FLAG_MP4A_LATM 1
#define FF_RTP_FLAG_RFC2190   2
#define FF_RTP_FLAG_SKIP_RTCP 4
#define FF_RTP_FLAG_H264_MODE0 8
#define FF_RTP_FLAG_SEND_BYE  16
FF_RTP_FLAG_OPTS \
, \
, \
, \
, \
, \
\
ff_rtp_send_data;
ff_rtp_send_h264_hevc;
ff_rtp_send_h261;
ff_rtp_send_h263;
ff_rtp_send_h263_rfc2190;
ff_rtp_send_aac;
ff_rtp_send_latm;
ff_rtp_send_amr;
ff_rtp_send_mpegvideo;
ff_rtp_send_xiph;
ff_rtp_send_vc2hq;
ff_rtp_send_vp8;
ff_rtp_send_vp9;
ff_rtp_send_jpeg;
*ff_h263_find_resync_marker_reverse;

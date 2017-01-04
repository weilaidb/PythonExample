#define AVFORMAT_RTPENC_H
struct RTPMuxContext ;
typedef struct RTPMuxContext RTPMuxContext;
#define FF_RTP_FLAG_MP4A_LATM 1
#define FF_RTP_FLAG_RFC2190   2
#define FF_RTP_FLAG_SKIP_RTCP 4
#define FF_RTP_FLAG_H264_MODE0 8
#define FF_RTP_FLAG_SEND_BYE  16
#define FF_RTP_FLAG_OPTS(ctx, fieldname) \
, \
, \
, \
, \
, \
\
void ff_rtp_send_data(AVFormatContext *s1, const uint8_t *buf1, int len, int m);
void ff_rtp_send_h264_hevc(AVFormatContext *s1, const uint8_t *buf1, int size);
void ff_rtp_send_h261(AVFormatContext *s1, const uint8_t *buf1, int size);
void ff_rtp_send_h263(AVFormatContext *s1, const uint8_t *buf1, int size);
void ff_rtp_send_h263_rfc2190(AVFormatContext *s1, const uint8_t *buf1, int size,
const uint8_t *mb_info, int mb_info_size);
void ff_rtp_send_aac(AVFormatContext *s1, const uint8_t *buff, int size);
void ff_rtp_send_latm(AVFormatContext *s1, const uint8_t *buff, int size);
void ff_rtp_send_amr(AVFormatContext *s1, const uint8_t *buff, int size);
void ff_rtp_send_mpegvideo(AVFormatContext *s1, const uint8_t *buf1, int size);
void ff_rtp_send_xiph(AVFormatContext *s1, const uint8_t *buff, int size);
void ff_rtp_send_vp8(AVFormatContext *s1, const uint8_t *buff, int size);
void ff_rtp_send_jpeg(AVFormatContext *s1, const uint8_t *buff, int size);
const uint8_t *ff_h263_find_resync_marker_reverse(const uint8_t *av_restrict start,
const uint8_t *av_restrict end);

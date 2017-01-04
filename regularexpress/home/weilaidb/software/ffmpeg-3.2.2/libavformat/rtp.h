#define AVFORMAT_RTP_H
int ff_rtp_get_payload_type(AVFormatContext *fmt, AVCodecParameters *par,
int idx);
int ff_rtp_get_codec_info(AVCodecParameters *par, int payload_type);
const char *ff_rtp_enc_name(int payload_type);
enum AVCodecID ff_rtp_codec_id(const char *buf, enum AVMediaType codec_type);
#define RTP_PT_PRIVATE 96
#define RTP_VERSION 2
#define RTP_MAX_SDES 256
#define RTCP_TX_RATIO_NUM 5
#define RTCP_TX_RATIO_DEN 1000
#define RTP_XIPH_IDENT 0xfecdba
enum RTCPType ;
#define RTP_PT_IS_RTCP(x) (((x) >= RTCP_FIR && (x) <= RTCP_IJ) || \
((x) >= RTCP_SR  && (x) <= RTCP_TOKEN))
#define NTP_TO_RTP_FORMAT(x) av_rescale((x), INT64_C(1) << 32, 1000000)

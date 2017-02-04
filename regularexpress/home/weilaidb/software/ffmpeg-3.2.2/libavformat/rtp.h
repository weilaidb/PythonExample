#define AVFORMAT_RTP_H
ff_rtp_get_payload_type;
ff_rtp_get_codec_info;
*ff_rtp_enc_name;
ff_rtp_codec_id;
#define RTP_PT_PRIVATE 96
#define RTP_VERSION 2
#define RTP_MAX_SDES 256
#define RTCP_TX_RATIO_NUM 5
#define RTCP_TX_RATIO_DEN 1000
#define RTP_XIPH_IDENT 0xfecdba
enum RTCPType ;
RTP_PT_IS_RTCP (((x) >= RTCP_FIR && (x) <= RTCP_IJ) || \
((x) >= RTCP_SR  && (x) <= RTCP_TOKEN))
NTP_TO_RTP_FORMAT av_rescale((x), INT64_C(1) << 32, 1000000)

static const struct  rtp_payload_types[] = ;
int ff_rtp_get_codec_info(AVCodecContext *codec, int payload_type)
int ff_rtp_get_payload_type(AVFormatContext *fmt,
AVCodecContext *codec, int idx)
const char *ff_rtp_enc_name(int payload_type)
enum AVCodecID ff_rtp_codec_id(const char *buf, enum AVMediaType codec_type)

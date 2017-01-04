#define AVCODEC_DV_PROFILE_H
#define DV_PROFILE_BYTES (6 * 80)
typedef struct AVDVProfile  AVDVProfile;
const AVDVProfile *av_dv_frame_profile(const AVDVProfile *sys,
const uint8_t *frame, unsigned buf_size);
const AVDVProfile *av_dv_codec_profile(int width, int height, enum AVPixelFormat pix_fmt);
const AVDVProfile *av_dv_codec_profile2(int width, int height, enum AVPixelFormat pix_fmt, AVRational frame_rate);

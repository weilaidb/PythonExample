#if CONFIG_DVPROFILE
static const uint8_t dv_audio_shuffle525[10][9] = ;
static const uint8_t dv_audio_shuffle625[12][9] = ;
static const uint8_t block_sizes_dv2550[8] = ;
static const uint8_t block_sizes_dv100[8] = ;
static const AVDVProfile dv_profiles[] = ;
void ff_dv_print_profiles(void *logctx, int loglevel)
const AVDVProfile* ff_dv_frame_profile(AVCodecContext* codec, const AVDVProfile *sys,
const uint8_t *frame, unsigned buf_size)
const AVDVProfile *av_dv_frame_profile(const AVDVProfile *sys,
const uint8_t *frame, unsigned buf_size)
const AVDVProfile *av_dv_codec_profile(int width, int height,
enum AVPixelFormat pix_fmt)
const AVDVProfile *av_dv_codec_profile2(int width, int height,
enum AVPixelFormat pix_fmt,
AVRational frame_rate)

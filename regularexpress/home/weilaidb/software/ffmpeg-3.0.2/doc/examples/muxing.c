#define STREAM_DURATION   10.0
#define STREAM_FRAME_RATE 25
#define STREAM_PIX_FMT    AV_PIX_FMT_YUV420P
#define SCALE_FLAGS SWS_BICUBIC
typedef struct OutputStream  OutputStream;
static void log_packet(const AVFormatContext *fmt_ctx, const AVPacket *pkt)
static int write_frame(AVFormatContext *fmt_ctx, const AVRational *time_base, AVStream *st, AVPacket *pkt)
static void add_stream(OutputStream *ost, AVFormatContext *oc,
AVCodec **codec,
enum AVCodecID codec_id)
static AVFrame *alloc_audio_frame(enum AVSampleFormat sample_fmt,
uint64_t channel_layout,
int sample_rate, int nb_samples)
static void open_audio(AVFormatContext *oc, AVCodec *codec, OutputStream *ost, AVDictionary *opt_arg)
static AVFrame *get_audio_frame(OutputStream *ost)
static int write_audio_frame(AVFormatContext *oc, OutputStream *ost)
static AVFrame *alloc_picture(enum AVPixelFormat pix_fmt, int width, int height)
static void open_video(AVFormatContext *oc, AVCodec *codec, OutputStream *ost, AVDictionary *opt_arg)
static void fill_yuv_image(AVFrame *pict, int frame_index,
int width, int height)
static AVFrame *get_video_frame(OutputStream *ost)
static int write_video_frame(AVFormatContext *oc, OutputStream *ost)
static void close_stream(AVFormatContext *oc, OutputStream *ost)
int main(int argc, char **argv)

#if CONFIG_LIBV4L2
static const int desired_video_buffers = 256;
#define V4L_ALLFORMATS  3
#define V4L_RAWFORMATS  1
#define V4L_COMPFORMATS 2
#define V4L_TS_DEFAULT  0
#define V4L_TS_ABS      1
#define V4L_TS_MONO2ABS 2
#define V4L_TS_CONVERT_READY V4L_TS_DEFAULT
struct video_data ;
struct buff_data ;
static int device_open(AVFormatContext *ctx)
static int device_init(AVFormatContext *ctx, int *width, int *height,
uint32_t pixelformat)
static int first_field(const struct video_data *s)
#if HAVE_STRUCT_V4L2_FRMIVALENUM_DISCRETE
static void list_framesizes(AVFormatContext *ctx, uint32_t pixelformat)
static void list_formats(AVFormatContext *ctx, int type)
static void list_standards(AVFormatContext *ctx)
static int mmap_init(AVFormatContext *ctx)
static int enqueue_buffer(struct video_data *s, struct v4l2_buffer *buf)
static void mmap_release_buffer(void *opaque, uint8_t *data)
#if HAVE_CLOCK_GETTIME && defined(CLOCK_MONOTONIC)
static int64_t av_gettime_monotonic(void)
static int init_convert_timestamp(AVFormatContext *ctx, int64_t ts)
static int convert_timestamp(AVFormatContext *ctx, int64_t *ts)
static int mmap_read_frame(AVFormatContext *ctx, AVPacket *pkt)
static int mmap_start(AVFormatContext *ctx)
static void mmap_close(struct video_data *s)
static int v4l2_set_parameters(AVFormatContext *ctx)
static int device_try_init(AVFormatContext *ctx,
enum AVPixelFormat pix_fmt,
int *width,
int *height,
uint32_t *desired_format,
enum AVCodecID *codec_id)
static int v4l2_read_probe(AVProbeData *p)
static int v4l2_read_header(AVFormatContext *ctx)
static int v4l2_read_packet(AVFormatContext *ctx, AVPacket *pkt)
static int v4l2_read_close(AVFormatContext *ctx)
static int v4l2_is_v4l_dev(const char *name)
static int v4l2_get_device_list(AVFormatContext *ctx, AVDeviceInfoList *device_list)
#define OFFSET(x) offsetof(struct video_data, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass v4l2_class = ;
AVInputFormat ff_v4l2_demuxer = ;

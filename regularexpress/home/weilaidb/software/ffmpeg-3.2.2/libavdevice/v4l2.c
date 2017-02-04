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
device_open
device_init
first_field
#if HAVE_STRUCT_V4L2_FRMIVALENUM_DISCRETE
list_framesizes
list_formats
list_standards
mmap_init
enqueue_buffer
mmap_release_buffer
defined
av_gettime_monotonic
init_convert_timestamp
convert_timestamp
mmap_read_frame
mmap_start
mmap_close
v4l2_set_parameters
device_try_init
v4l2_read_probe
v4l2_read_header
v4l2_read_packet
v4l2_read_close
v4l2_is_v4l_dev
v4l2_get_device_list
OFFSET offsetof(struct video_data, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass v4l2_class = ;
AVInputFormat ff_v4l2_demuxer = ;

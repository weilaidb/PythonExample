#if HAVE_LIBDC1394_2
#elif HAVE_LIBDC1394_1
#define DC1394_VIDEO_MODE_320x240_YUV422 MODE_320x240_YUV422
#define DC1394_VIDEO_MODE_640x480_YUV411 MODE_640x480_YUV411
#define DC1394_VIDEO_MODE_640x480_YUV422 MODE_640x480_YUV422
#define DC1394_FRAMERATE_1_875 FRAMERATE_1_875
#define DC1394_FRAMERATE_3_75  FRAMERATE_3_75
#define DC1394_FRAMERATE_7_5   FRAMERATE_7_5
#define DC1394_FRAMERATE_15    FRAMERATE_15
#define DC1394_FRAMERATE_30    FRAMERATE_30
#define DC1394_FRAMERATE_60    FRAMERATE_60
#define DC1394_FRAMERATE_120   FRAMERATE_120
#define DC1394_FRAMERATE_240   FRAMERATE_240
typedef struct dc1394_data  dc1394_data;
static const struct dc1394_frame_format  dc1394_frame_formats[] = ;
static const struct dc1394_frame_rate  dc1394_frame_rates[] = ;
OFFSET offsetof(dc1394_data, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ,
, 0, 0, DEC },
, 0, 0, DEC },
,
};
static const AVClass libdc1394_class = ;
dc1394_read_common
#if HAVE_LIBDC1394_1
dc1394_v1_read_header
dc1394_v1_read_packet
dc1394_v1_close
#elif HAVE_LIBDC1394_2
dc1394_v2_read_header
dc1394_v2_read_packet
dc1394_v2_close
AVInputFormat ff_libdc1394_demuxer = ;
#if HAVE_LIBDC1394_1
AVInputFormat ff_libdc1394_demuxer = ;

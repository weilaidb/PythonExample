typedef struct  V4L2Context;
static av_cold int write_header(AVFormatContext *s1)
static int write_packet(AVFormatContext *s1, AVPacket *pkt)
static int write_trailer(AVFormatContext *s1)
static const AVClass v4l2_class = ;
AVOutputFormat ff_v4l2_muxer = ;

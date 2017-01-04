#undef __STRICT_ANSI__
#define _LINUX_TIME_H 1
typedef struct  VideoData;
static const struct  video_formats [] = ;
static int grab_read_header(AVFormatContext *s1, AVFormatParameters *ap)
static int v4l_mm_read_picture(VideoData *s, uint8_t *buf)
static int grab_read_packet(AVFormatContext *s1, AVPacket *pkt)
static int grab_read_close(AVFormatContext *s1)
static const AVOption options[] = ;
static const AVClass v4l_class = ;
AVInputFormat ff_v4l_demuxer = ;

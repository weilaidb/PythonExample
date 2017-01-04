#define MAX_YUV4_HEADER 80
#define MAX_FRAME_HEADER 80
static int yuv4_read_header(AVFormatContext *s)
static int yuv4_read_packet(AVFormatContext *s, AVPacket *pkt)
static int yuv4_read_seek(AVFormatContext *s, int stream_index,
int64_t pts, int flags)
static int yuv4_probe(AVProbeData *pd)
AVInputFormat ff_yuv4mpegpipe_demuxer = ;

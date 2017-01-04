#define Y4M_LINE_MAX 256
static int yuv4_generate_header(AVFormatContext *s, char* buf)
static int yuv4_write_packet(AVFormatContext *s, AVPacket *pkt)
static int yuv4_write_header(AVFormatContext *s)
AVOutputFormat ff_yuv4mpegpipe_muxer = ;

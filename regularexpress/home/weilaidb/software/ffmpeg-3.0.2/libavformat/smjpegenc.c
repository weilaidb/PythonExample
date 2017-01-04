typedef struct SMJPEGMuxContext  SMJPEGMuxContext;
static int smjpeg_write_header(AVFormatContext *s)
static int smjpeg_write_packet(AVFormatContext *s, AVPacket *pkt)
static int smjpeg_write_trailer(AVFormatContext *s)
AVOutputFormat ff_smjpeg_muxer = ;

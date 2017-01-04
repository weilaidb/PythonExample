typedef struct TTAMuxContext  TTAMuxContext;
static int tta_write_header(AVFormatContext *s)
static int tta_write_packet(AVFormatContext *s, AVPacket *pkt)
static int tta_write_trailer(AVFormatContext *s)
AVOutputFormat ff_tta_muxer = ;

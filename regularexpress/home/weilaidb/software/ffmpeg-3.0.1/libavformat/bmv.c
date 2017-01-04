enum BMVFlags ;
typedef struct BMVContext  BMVContext;
static int bmv_read_header(AVFormatContext *s)
static int bmv_read_packet(AVFormatContext *s, AVPacket *pkt)
static int bmv_read_close(AVFormatContext *s)
AVInputFormat ff_bmv_demuxer = ;

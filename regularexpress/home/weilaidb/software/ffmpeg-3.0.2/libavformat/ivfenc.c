typedef struct IVFEncContext  IVFEncContext;
static int ivf_write_header(AVFormatContext *s)
static int ivf_write_packet(AVFormatContext *s, AVPacket *pkt)
static int ivf_write_trailer(AVFormatContext *s)
AVOutputFormat ff_ivf_muxer = ;

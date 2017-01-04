typedef struct  IcoImage;
typedef struct  IcoMuxContext;
static int ico_check_attributes(AVFormatContext *s, const AVCodecContext *c)
static int ico_write_header(AVFormatContext *s)
static int ico_write_packet(AVFormatContext *s, AVPacket *pkt)
static int ico_write_trailer(AVFormatContext *s)
AVOutputFormat ff_ico_muxer = ;

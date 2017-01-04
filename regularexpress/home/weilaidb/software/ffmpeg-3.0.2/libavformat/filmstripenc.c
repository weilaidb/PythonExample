#define RAND_TAG MKBETAG('R','a','n','d')
typedef struct FilmstripMuxContext  FilmstripMuxContext;
static int write_header(AVFormatContext *s)
static int write_packet(AVFormatContext *s, AVPacket *pkt)
static int write_trailer(AVFormatContext *s)
AVOutputFormat ff_filmstrip_muxer = ;

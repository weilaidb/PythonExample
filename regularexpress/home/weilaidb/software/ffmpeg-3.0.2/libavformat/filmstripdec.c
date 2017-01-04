#define RAND_TAG MKBETAG('R','a','n','d')
typedef struct FilmstripDemuxContext  FilmstripDemuxContext;
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s,
AVPacket *pkt)
static int read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_filmstrip_demuxer = ;

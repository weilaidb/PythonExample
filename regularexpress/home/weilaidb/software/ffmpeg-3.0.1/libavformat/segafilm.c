#define FILM_TAG MKBETAG('F', 'I', 'L', 'M')
#define FDSC_TAG MKBETAG('F', 'D', 'S', 'C')
#define STAB_TAG MKBETAG('S', 'T', 'A', 'B')
#define CVID_TAG MKBETAG('c', 'v', 'i', 'd')
#define RAW_TAG  MKBETAG('r', 'a', 'w', ' ')
typedef struct film_sample  film_sample;
typedef struct FilmDemuxContext  FilmDemuxContext;
static int film_probe(AVProbeData *p)
static int film_read_close(AVFormatContext *s)
static int film_read_header(AVFormatContext *s)
static int film_read_packet(AVFormatContext *s,
AVPacket *pkt)
static int film_read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_segafilm_demuxer = ;

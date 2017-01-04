#define EXTRADATA1_SIZE (6 + 256 * 3)
#define FORM_TAG MKBETAG('F', 'O', 'R', 'M')
#define RLV2_TAG MKBETAG('R', 'L', 'V', '2')
#define RLV3_TAG MKBETAG('R', 'L', 'V', '3')
typedef struct Rl2DemuxContext  Rl2DemuxContext;
static int rl2_probe(AVProbeData *p)
static av_cold int rl2_read_header(AVFormatContext *s)
static int rl2_read_packet(AVFormatContext *s,
AVPacket *pkt)
static int rl2_read_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
AVInputFormat ff_rl2_demuxer = ;

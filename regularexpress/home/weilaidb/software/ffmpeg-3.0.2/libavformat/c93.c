typedef struct C93BlockRecord  C93BlockRecord;
typedef struct C93DemuxContext  C93DemuxContext;
static int probe(AVProbeData *p)
static int read_header(AVFormatContext *s)
#define C93_HAS_PALETTE 0x01
#define C93_FIRST_FRAME 0x02
static int read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_c93_demuxer = ;

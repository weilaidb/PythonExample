#define XA00_TAG MKTAG('X', 'A', 0, 0)
#define XAI0_TAG MKTAG('X', 'A', 'I', 0)
#define XAJ0_TAG MKTAG('X', 'A', 'J', 0)
typedef struct MaxisXADemuxContext  MaxisXADemuxContext;
static int xa_probe(AVProbeData *p)
static int xa_read_header(AVFormatContext *s)
static int xa_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_xa_demuxer = ;

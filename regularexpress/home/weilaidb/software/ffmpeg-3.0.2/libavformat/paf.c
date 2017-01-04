#define MAGIC "Packed Animation File V1.0\n(c) 1992-96 Amazing Studio\x0a\x1a"
typedef struct PAFDemuxContext  PAFDemuxContext;
static int read_probe(AVProbeData *p)
static int read_close(AVFormatContext *s)
static void read_table(AVFormatContext *s, uint32_t *table, uint32_t count)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_paf_demuxer = ;

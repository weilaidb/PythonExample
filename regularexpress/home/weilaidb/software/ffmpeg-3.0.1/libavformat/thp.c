typedef struct ThpDemuxContext  ThpDemuxContext;
static int thp_probe(AVProbeData *p)
static int thp_read_header(AVFormatContext *s)
static int thp_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_thp_demuxer = ;

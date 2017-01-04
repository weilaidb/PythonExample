typedef struct CdataDemuxContext  CdataDemuxContext;
static int cdata_probe(AVProbeData *p)
static int cdata_read_header(AVFormatContext *s)
static int cdata_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_ea_cdata_demuxer = ;

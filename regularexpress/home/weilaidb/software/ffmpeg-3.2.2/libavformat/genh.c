typedef struct GENHDemuxContext  GENHDemuxContext;
static int genh_probe(AVProbeData *p)
static int genh_read_header(AVFormatContext *s)
static int genh_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_genh_demuxer = ;

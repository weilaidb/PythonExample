typedef struct VPKDemuxContext  VPKDemuxContext;
static int vpk_probe(AVProbeData *p)
static int vpk_read_header(AVFormatContext *s)
static int vpk_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_vpk_demuxer = ;

typedef struct VivoContext  VivoContext;
static int vivo_probe(AVProbeData *p)
static int vivo_get_packet_header(AVFormatContext *s)
static int vivo_read_header(AVFormatContext *s)
static int vivo_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_vivo_demuxer = ;

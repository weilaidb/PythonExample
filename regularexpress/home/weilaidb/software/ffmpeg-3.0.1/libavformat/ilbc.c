static const char mode20_header[] = "#!iLBC20\n";
static const char mode30_header[] = "#!iLBC30\n";
static int ilbc_write_header(AVFormatContext *s)
static int ilbc_write_packet(AVFormatContext *s, AVPacket *pkt)
static int ilbc_probe(AVProbeData *p)
static int ilbc_read_header(AVFormatContext *s)
static int ilbc_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_ilbc_demuxer = ;
AVOutputFormat ff_ilbc_muxer = ;

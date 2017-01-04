static int sdr2_probe(AVProbeData *p)
#define FIRST 0xA8
static int sdr2_read_header(AVFormatContext *s)
static const uint8_t header[24] = ;
static int sdr2_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_sdr2_demuxer = ;

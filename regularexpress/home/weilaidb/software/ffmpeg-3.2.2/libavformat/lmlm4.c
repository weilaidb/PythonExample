#define LMLM4_I_FRAME   0x00
#define LMLM4_P_FRAME   0x01
#define LMLM4_B_FRAME   0x02
#define LMLM4_INVALID   0x03
#define LMLM4_MPEG1L2   0x04
#define LMLM4_MAX_PACKET_SIZE   1024 * 1024
static int lmlm4_probe(AVProbeData *pd)
static int lmlm4_read_header(AVFormatContext *s)
static int lmlm4_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_lmlm4_demuxer = ;

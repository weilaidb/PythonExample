#define AUD_HEADER_SIZE 12
#define AUD_CHUNK_PREAMBLE_SIZE 8
#define AUD_CHUNK_SIGNATURE 0x0000DEAF
static int wsaud_probe(AVProbeData *p)
static int wsaud_read_header(AVFormatContext *s)
static int wsaud_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_wsaud_demuxer = ;

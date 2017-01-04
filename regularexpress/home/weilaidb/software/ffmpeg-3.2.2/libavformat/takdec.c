#define BITSTREAM_READER_LE
typedef struct TAKDemuxContext  TAKDemuxContext;
static int tak_probe(AVProbeData *p)
static unsigned long tak_check_crc(unsigned long checksum, const uint8_t *buf,
unsigned int len)
static int tak_read_header(AVFormatContext *s)
static int raw_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_tak_demuxer = ;

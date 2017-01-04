#define MAX_FRAME_SIZE 10
#define SYNC_WORD  0x6b21
#define BIT_0      0x7f
#define BIT_1      0x81
static int probe(AVProbeData *p)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_bit_demuxer = ;
#if CONFIG_MUXERS
static int write_header(AVFormatContext *s)
static int write_packet(AVFormatContext *s, AVPacket *pkt)
AVOutputFormat ff_bit_muxer = ;

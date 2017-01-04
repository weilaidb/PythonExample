#define MM_PREAMBLE_SIZE    6
#define MM_TYPE_HEADER      0x0
#define MM_TYPE_INTER       0x5
#define MM_TYPE_INTRA       0x8
#define MM_TYPE_INTRA_HH    0xc
#define MM_TYPE_INTER_HH    0xd
#define MM_TYPE_INTRA_HHV   0xe
#define MM_TYPE_INTER_HHV   0xf
#define MM_TYPE_AUDIO       0x15
#define MM_TYPE_PALETTE     0x31
#define MM_HEADER_LEN_V     0x16
#define MM_HEADER_LEN_AV    0x18
#define MM_PALETTE_COUNT    128
#define MM_PALETTE_SIZE     (MM_PALETTE_COUNT*3)
typedef struct MmDemuxContext  MmDemuxContext;
static int probe(AVProbeData *p)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_mm_demuxer = ;

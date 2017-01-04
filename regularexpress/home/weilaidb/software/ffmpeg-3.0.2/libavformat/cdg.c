#define CDG_PACKET_SIZE    24
#define CDG_COMMAND        0x09
#define CDG_MASK           0x3F
typedef struct CDGContext  CDGContext;
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_cdg_demuxer = ;

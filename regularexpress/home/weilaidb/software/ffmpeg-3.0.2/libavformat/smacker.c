#define SMACKER_PAL 0x01
#define SMACKER_FLAG_RING_FRAME 0x01
enum SAudFlags ;
typedef struct SmackerContext  SmackerContext;
typedef struct SmackerFrame  SmackerFrame;
static const uint8_t smk_pal[64] = ;
static int smacker_probe(AVProbeData *p)
static int smacker_read_header(AVFormatContext *s)
static int smacker_read_packet(AVFormatContext *s, AVPacket *pkt)
static int smacker_read_close(AVFormatContext *s)
AVInputFormat ff_smacker_demuxer = ;

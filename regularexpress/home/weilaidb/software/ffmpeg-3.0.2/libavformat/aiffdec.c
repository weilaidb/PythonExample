#define AIFF                    0
#define AIFF_C_VERSION1         0xA2805140
typedef struct AIFFInputContext  AIFFInputContext;
static enum AVCodecID aiff_codec_get_id(int bps)
static int get_tag(AVIOContext *pb, uint32_t * tag)
static void get_meta(AVFormatContext *s, const char *key, int size)
static int get_aiff_header(AVFormatContext *s, int size,
unsigned version)
static int aiff_probe(AVProbeData *p)
static int aiff_read_header(AVFormatContext *s)
#define MAX_SIZE 4096
static int aiff_read_packet(AVFormatContext *s,
AVPacket *pkt)
AVInputFormat ff_aiff_demuxer = ;

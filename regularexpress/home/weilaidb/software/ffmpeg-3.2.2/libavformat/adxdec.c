#define BLOCK_SIZE    18
#define BLOCK_SAMPLES 32
typedef struct ADXDemuxerContext  ADXDemuxerContext;
static int adx_probe(AVProbeData *p)
static int adx_read_packet(AVFormatContext *s, AVPacket *pkt)
static int adx_read_header(AVFormatContext *s)
AVInputFormat ff_adx_demuxer = ;

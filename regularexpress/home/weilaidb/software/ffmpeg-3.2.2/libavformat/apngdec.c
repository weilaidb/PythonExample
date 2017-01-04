#define DEFAULT_APNG_FPS 15
typedef struct APNGDemuxContext  APNGDemuxContext;
static int apng_probe(AVProbeData *p)
static int append_extradata(AVCodecParameters *par, AVIOContext *pb, int len)
static int apng_read_header(AVFormatContext *s)
static int decode_fctl_chunk(AVFormatContext *s, APNGDemuxContext *ctx, AVPacket *pkt)
static int apng_read_packet(AVFormatContext *s, AVPacket *pkt)
static const AVOption options[] = ;
static const AVClass demuxer_class = ;
AVInputFormat ff_apng_demuxer = ;

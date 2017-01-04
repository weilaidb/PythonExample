typedef struct GIFDemuxContext  GIFDemuxContext;
#define GIF_DEFAULT_DELAY   10
#define GIF_MIN_DELAY       2
static int gif_probe(AVProbeData *p)
static int resync(AVIOContext *pb)
static int gif_read_header(AVFormatContext *s)
static int gif_skip_subblocks(AVIOContext *pb)
static int gif_read_ext(AVFormatContext *s)
static int gif_read_packet(AVFormatContext *s, AVPacket *pkt)
static const AVOption options[] = ;
static const AVClass demuxer_class = ;
AVInputFormat ff_gif_demuxer = ;

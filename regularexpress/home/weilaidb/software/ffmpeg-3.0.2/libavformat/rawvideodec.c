typedef struct RawVideoDemuxerContext  RawVideoDemuxerContext;
static int rawvideo_read_header(AVFormatContext *ctx)
static int rawvideo_read_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(RawVideoDemuxerContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption rawvideo_options[] = ;
static const AVClass rawvideo_demuxer_class = ;
AVInputFormat ff_rawvideo_demuxer = ;

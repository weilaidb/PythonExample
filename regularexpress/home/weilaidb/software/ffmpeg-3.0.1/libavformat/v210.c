typedef struct V210DemuxerContext  V210DemuxerContext;
#define GET_PACKET_SIZE(w, h) (((w + 47) / 48) * 48 * h * 8 / 3)
static int v210_read_header(AVFormatContext *ctx)
static int v210_read_packet(AVFormatContext *s, AVPacket *pkt)
#define OFFSET(x) offsetof(V210DemuxerContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption v210_options[] = ;
#if CONFIG_V210_DEMUXER
static const AVClass v210_demuxer_class = ;
AVInputFormat ff_v210_demuxer = ;
#if CONFIG_V210X_DEMUXER
static const AVClass v210x_demuxer_class = ;
AVInputFormat ff_v210x_demuxer = ;

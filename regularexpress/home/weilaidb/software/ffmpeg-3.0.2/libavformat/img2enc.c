typedef struct VideoMuxData  VideoMuxData;
static int write_header(AVFormatContext *s)
static int write_packet(AVFormatContext *s, AVPacket *pkt)
static int query_codec(enum AVCodecID id, int std_compliance)
#define OFFSET(x) offsetof(VideoMuxData, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption muxoptions[] = ;
#if CONFIG_IMAGE2_MUXER
static const AVClass img2mux_class = ;
AVOutputFormat ff_image2_muxer = ;
#if CONFIG_IMAGE2PIPE_MUXER
AVOutputFormat ff_image2pipe_muxer = ;

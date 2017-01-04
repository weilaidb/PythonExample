typedef struct  AQTitleContext;
static int aqt_probe(AVProbeData *p)
static int aqt_read_header(AVFormatContext *s)
static int aqt_read_packet(AVFormatContext *s, AVPacket *pkt)
static int aqt_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int aqt_read_close(AVFormatContext *s)
#define OFFSET(x) offsetof(AQTitleContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM|AV_OPT_FLAG_DECODING_PARAM
static const AVOption aqt_options[] = ;
static const AVClass aqt_class = ;
AVInputFormat ff_aqtitle_demuxer = ;

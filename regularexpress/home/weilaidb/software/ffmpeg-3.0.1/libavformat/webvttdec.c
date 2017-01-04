typedef struct  WebVTTContext;
static int webvtt_probe(AVProbeData *p)
static int64_t read_ts(const char *s)
static int webvtt_read_header(AVFormatContext *s)
static int webvtt_read_packet(AVFormatContext *s, AVPacket *pkt)
static int webvtt_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int webvtt_read_close(AVFormatContext *s)
#define OFFSET(x) offsetof(WebVTTContext, x)
#define KIND_FLAGS AV_OPT_FLAG_SUBTITLE_PARAM
static const AVOption options[] = ;
static const AVClass webvtt_demuxer_class = ;
AVInputFormat ff_webvtt_demuxer = ;

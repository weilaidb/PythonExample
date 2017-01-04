#define MAX_LINESIZE 2048
typedef struct  MicroDVDContext;
static int microdvd_probe(AVProbeData *p)
static int64_t get_pts(const char *buf)
static int microdvd_read_packet(AVFormatContext *s, AVPacket *pkt)
static int microdvd_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int microdvd_read_close(AVFormatContext *s)
#define OFFSET(x) offsetof(MicroDVDContext, x)
#define SD AV_OPT_FLAG_SUBTITLE_PARAM|AV_OPT_FLAG_DECODING_PARAM
static const AVOption microdvd_options[] = ;
static const AVClass microdvd_class = ;
AVInputFormat ff_microdvd_demuxer = ;

typedef struct  SRTContext;
static int srt_probe(AVProbeData *p)
struct event_info ;
static int get_event_info(const char *line, struct event_info *ei)
static int add_event(FFDemuxSubtitlesQueue *q, AVBPrint *buf, char *line_cache,
const struct event_info *ei, int append_cache)
static int srt_read_header(AVFormatContext *s)
static int srt_read_packet(AVFormatContext *s, AVPacket *pkt)
static int srt_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int srt_read_close(AVFormatContext *s)
AVInputFormat ff_srt_demuxer = ;

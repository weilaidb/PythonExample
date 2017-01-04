typedef struct  PJSContext;
static int pjs_probe(AVProbeData *p)
static int64_t read_ts(char **line, int *duration)
static int pjs_read_header(AVFormatContext *s)
static int pjs_read_packet(AVFormatContext *s, AVPacket *pkt)
static int pjs_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int pjs_read_close(AVFormatContext *s)
AVInputFormat ff_pjs_demuxer = ;

typedef struct  RealTextContext;
static int realtext_probe(AVProbeData *p)
static int read_ts(const char *s)
static int realtext_read_header(AVFormatContext *s)
static int realtext_read_packet(AVFormatContext *s, AVPacket *pkt)
static int realtext_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int realtext_read_close(AVFormatContext *s)
AVInputFormat ff_realtext_demuxer = ;

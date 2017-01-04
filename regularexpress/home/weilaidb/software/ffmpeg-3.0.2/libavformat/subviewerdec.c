typedef struct  SubViewerContext;
static int subviewer_probe(AVProbeData *p)
static int read_ts(const char *s, int64_t *start, int *duration)
static int subviewer_read_header(AVFormatContext *s)
static int subviewer_read_packet(AVFormatContext *s, AVPacket *pkt)
static int subviewer_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int subviewer_read_close(AVFormatContext *s)
AVInputFormat ff_subviewer_demuxer = ;

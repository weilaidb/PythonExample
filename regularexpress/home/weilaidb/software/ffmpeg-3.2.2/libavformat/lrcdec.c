typedef struct LRCContext  LRCContext;
static int64_t find_header(const char *p)
static int64_t count_ts(const char *p)
static int64_t read_ts(const char *p, int64_t *start)
static int64_t read_line(AVBPrint *buf, AVIOContext *pb)
static int lrc_probe(AVProbeData *p)
static int lrc_read_header(AVFormatContext *s)
static int lrc_read_packet(AVFormatContext *s, AVPacket *pkt)
static int lrc_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int lrc_read_close(AVFormatContext *s)
AVInputFormat ff_lrc_demuxer = ;

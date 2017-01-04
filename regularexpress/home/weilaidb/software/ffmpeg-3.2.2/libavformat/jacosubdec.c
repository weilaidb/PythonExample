typedef struct  JACOsubContext;
static int timed_line(const char *ptr)
static int jacosub_probe(AVProbeData *p)
static const char * const cmds[] = ;
static int get_jss_cmd(char k)
static int jacosub_read_close(AVFormatContext *s)
static const char *read_ts(JACOsubContext *jacosub, const char *buf,
int64_t *start, int64_t *duration)
static int get_shift(int timeres, const char *buf)
static int jacosub_read_header(AVFormatContext *s)
static int jacosub_read_packet(AVFormatContext *s, AVPacket *pkt)
static int jacosub_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
AVInputFormat ff_jacosub_demuxer = ;

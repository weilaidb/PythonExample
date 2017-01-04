typedef struct ASSContext  ASSContext;
static int ass_probe(AVProbeData *p)
static int ass_read_close(AVFormatContext *s)
static int read_dialogue(ASSContext *ass, AVBPrint *dst, const uint8_t *p,
int64_t *start, int *duration)
static int64_t get_line(AVBPrint *buf, FFTextReader *tr)
static int ass_read_header(AVFormatContext *s)
static int ass_read_packet(AVFormatContext *s, AVPacket *pkt)
static int ass_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
AVInputFormat ff_ass_demuxer = ;

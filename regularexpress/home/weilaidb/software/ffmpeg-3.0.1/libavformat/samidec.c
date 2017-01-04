typedef struct  SAMIContext;
static int sami_probe(AVProbeData *p)
static int sami_read_header(AVFormatContext *s)
static int sami_read_packet(AVFormatContext *s, AVPacket *pkt)
static int sami_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int sami_read_close(AVFormatContext *s)
AVInputFormat ff_sami_demuxer = ;

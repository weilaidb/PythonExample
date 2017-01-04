typedef struct  MPSubContext;
static int mpsub_probe(AVProbeData *p)
static int mpsub_read_header(AVFormatContext *s)
static int mpsub_read_packet(AVFormatContext *s, AVPacket *pkt)
static int mpsub_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int mpsub_read_close(AVFormatContext *s)
AVInputFormat ff_mpsub_demuxer = ;

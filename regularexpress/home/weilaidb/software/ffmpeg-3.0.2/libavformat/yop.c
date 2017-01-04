typedef struct yop_dec_context  YopDecContext;
static int yop_probe(AVProbeData *probe_packet)
static int yop_read_header(AVFormatContext *s)
static int yop_read_packet(AVFormatContext *s, AVPacket *pkt)
static int yop_read_close(AVFormatContext *s)
static int yop_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_yop_demuxer = ;

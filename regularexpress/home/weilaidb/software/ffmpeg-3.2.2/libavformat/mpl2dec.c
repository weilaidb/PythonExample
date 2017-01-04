typedef struct  MPL2Context;
static int mpl2_probe(AVProbeData *p)
static int read_ts(char **line, int64_t *pts_start, int *duration)
static int mpl2_read_header(AVFormatContext *s)
static int mpl2_read_packet(AVFormatContext *s, AVPacket *pkt)
static int mpl2_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int mpl2_read_close(AVFormatContext *s)
AVInputFormat ff_mpl2_demuxer = ;

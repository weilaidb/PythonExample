typedef struct  STLContext;
static int stl_probe(AVProbeData *p)
static int64_t get_pts(char **buf, int *duration)
static int stl_read_header(AVFormatContext *s)
static int stl_read_packet(AVFormatContext *s, AVPacket *pkt)
static int stl_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int stl_read_close(AVFormatContext *s)
AVInputFormat ff_stl_demuxer = ;

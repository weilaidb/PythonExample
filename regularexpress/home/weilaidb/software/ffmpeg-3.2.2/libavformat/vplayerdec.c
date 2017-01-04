typedef struct  VPlayerContext;
static int vplayer_probe(AVProbeData *p)
static int64_t read_ts(char **line)
static int vplayer_read_header(AVFormatContext *s)
static int vplayer_read_packet(AVFormatContext *s, AVPacket *pkt)
static int vplayer_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int vplayer_read_close(AVFormatContext *s)
AVInputFormat ff_vplayer_demuxer = ;

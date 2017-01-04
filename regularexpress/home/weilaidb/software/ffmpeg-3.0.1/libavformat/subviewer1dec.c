typedef struct  SubViewer1Context;
static int subviewer1_probe(AVProbeData *p)
static int subviewer1_read_header(AVFormatContext *s)
static int subviewer1_read_packet(AVFormatContext *s, AVPacket *pkt)
static int subviewer1_read_seek(AVFormatContext *s, int stream_index,
int64_t min_ts, int64_t ts, int64_t max_ts, int flags)
static int subviewer1_read_close(AVFormatContext *s)
AVInputFormat ff_subviewer1_demuxer = ;

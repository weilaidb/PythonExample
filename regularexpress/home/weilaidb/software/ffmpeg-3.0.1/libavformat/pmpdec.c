typedef struct  PMPContext;
static int pmp_probe(AVProbeData *p)
static int pmp_header(AVFormatContext *s)
static int pmp_packet(AVFormatContext *s, AVPacket *pkt)
static int pmp_seek(AVFormatContext *s, int stream_index, int64_t ts, int flags)
static int pmp_close(AVFormatContext *s)
AVInputFormat ff_pmp_demuxer = ;

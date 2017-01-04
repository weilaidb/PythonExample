int
ff_voc_get_packet(AVFormatContext *s, AVPacket *pkt, AVStream *st, int max_size)
#if CONFIG_VOC_DEMUXER
static int voc_probe(AVProbeData *p)
static int voc_read_header(AVFormatContext *s)
static int voc_read_packet(AVFormatContext *s, AVPacket *pkt)
static int voc_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
AVInputFormat ff_voc_demuxer = ;

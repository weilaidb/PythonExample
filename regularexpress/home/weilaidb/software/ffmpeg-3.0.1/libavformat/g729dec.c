typedef struct G729DemuxerContext  G729DemuxerContext;
static int g729_read_header(AVFormatContext *s)
static int g729_read_packet(AVFormatContext *s, AVPacket *pkt)
static const AVOption g729_options[] = ;
static const AVClass g729_demuxer_class = ;
AVInputFormat ff_g729_demuxer = ;

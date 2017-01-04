enum WV_FLAGS ;
static const int wv_rates[16] = ;
typedef struct WVContext  WVContext;
static int wv_probe(AVProbeData *p)
static int wv_read_block_header(AVFormatContext *ctx, AVIOContext *pb)
static int wv_read_header(AVFormatContext *s)
static int wv_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_wv_demuxer = ;

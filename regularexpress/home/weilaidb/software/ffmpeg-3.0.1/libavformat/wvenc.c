typedef struct WvMuxContext  WvMuxContext;
static av_cold int wv_write_header(AVFormatContext *ctx)
static int wv_write_packet(AVFormatContext *ctx, AVPacket *pkt)
static av_cold int wv_write_trailer(AVFormatContext *ctx)
AVOutputFormat ff_wv_muxer = ;

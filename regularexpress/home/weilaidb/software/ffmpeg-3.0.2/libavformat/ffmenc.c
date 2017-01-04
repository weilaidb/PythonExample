static void flush_packet(AVFormatContext *s)
static void ffm_write_data(AVFormatContext *s,
const uint8_t *buf, int size,
int64_t dts, int header)
static void write_header_chunk(AVIOContext *pb, AVIOContext *dpb, unsigned id)
static int ffm_write_header_codec_private_ctx(AVFormatContext *s, AVCodecContext *ctx, int type)
static int ffm_write_header_codec_ctx(AVIOContext *pb, AVCodecContext *ctx, unsigned tag, int type)
static int ffm_write_recommended_config(AVIOContext *pb, AVCodecContext *ctx, unsigned tag,
const char *configuration)
static int ffm_write_header(AVFormatContext *s)
static int ffm_write_packet(AVFormatContext *s, AVPacket *pkt)
static int ffm_write_trailer(AVFormatContext *s)
AVOutputFormat ff_ffm_muxer = ;

struct MD5Context ;
static void md5_finish(struct AVFormatContext *s, char *buf)
#define OFFSET(x) offsetof(struct MD5Context, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption hash_options[] = ;
static const AVClass md5enc_class = ;
#if CONFIG_MD5_MUXER
static int write_header(struct AVFormatContext *s)
static int write_packet(struct AVFormatContext *s, AVPacket *pkt)
static int write_trailer(struct AVFormatContext *s)
AVOutputFormat ff_md5_muxer = ;
#if CONFIG_FRAMEMD5_MUXER
static int framemd5_write_header(struct AVFormatContext *s)
static int framemd5_write_packet(struct AVFormatContext *s, AVPacket *pkt)
static int framemd5_write_trailer(struct AVFormatContext *s)
static const AVClass framemd5_class = ;
AVOutputFormat ff_framemd5_muxer = ;

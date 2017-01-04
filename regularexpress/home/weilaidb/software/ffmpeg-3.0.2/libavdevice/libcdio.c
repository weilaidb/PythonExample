#if HAVE_CDIO_PARANOIA_H
#elif HAVE_CDIO_PARANOIA_PARANOIA_H
typedef struct CDIOContext  CDIOContext;
static av_cold int read_header(AVFormatContext *ctx)
static int read_packet(AVFormatContext *ctx, AVPacket *pkt)
static av_cold int read_close(AVFormatContext *ctx)
static int read_seek(AVFormatContext *ctx, int stream_index, int64_t timestamp,
int flags)
#define OFFSET(x) offsetof(CDIOContext, x)
#define DEC AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass libcdio_class = ;
AVInputFormat ff_libcdio_demuxer = ;

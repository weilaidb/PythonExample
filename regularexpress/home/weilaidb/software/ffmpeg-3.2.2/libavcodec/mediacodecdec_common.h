#define AVCODEC_MEDIACODECDEC_COMMON_H
typedef struct MediaCodecDecContext  MediaCodecDecContext;
int ff_mediacodec_dec_init(AVCodecContext *avctx,
MediaCodecDecContext *s,
const char *mime,
FFAMediaFormat *format);
int ff_mediacodec_dec_decode(AVCodecContext *avctx,
MediaCodecDecContext *s,
AVFrame *frame,
int *got_frame,
AVPacket *pkt);
int ff_mediacodec_dec_flush(AVCodecContext *avctx,
MediaCodecDecContext *s);
int ff_mediacodec_dec_close(AVCodecContext *avctx,
MediaCodecDecContext *s);
int ff_mediacodec_dec_is_flushing(AVCodecContext *avctx,
MediaCodecDecContext *s);
typedef struct MediaCodecBuffer  MediaCodecBuffer;

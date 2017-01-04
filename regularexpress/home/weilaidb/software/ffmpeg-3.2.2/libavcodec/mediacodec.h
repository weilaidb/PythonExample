#define AVCODEC_MEDIACODEC_H
typedef struct AVMediaCodecContext  AVMediaCodecContext;
AVMediaCodecContext *av_mediacodec_alloc_context(void);
int av_mediacodec_default_init(AVCodecContext *avctx, AVMediaCodecContext *ctx, void *surface);
void av_mediacodec_default_free(AVCodecContext *avctx);
typedef struct MediaCodecBuffer AVMediaCodecBuffer;
int av_mediacodec_release_buffer(AVMediaCodecBuffer *buffer, int render);

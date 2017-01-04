#define AVCODEC_VIDEOTOOLBOX_H
#define Picture QuickdrawPicture
#undef Picture
typedef struct AVVideotoolboxContext  AVVideotoolboxContext;
AVVideotoolboxContext *av_videotoolbox_alloc_context(void);
int av_videotoolbox_default_init(AVCodecContext *avctx);
int av_videotoolbox_default_init2(AVCodecContext *avctx, AVVideotoolboxContext *vtctx);
void av_videotoolbox_default_free(AVCodecContext *avctx);

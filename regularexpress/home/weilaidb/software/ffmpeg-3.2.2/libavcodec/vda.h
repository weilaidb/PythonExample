#define AVCODEC_VDA_H
#undef __GNUC_STDC_INLINE__
#define Picture QuickdrawPicture
#undef Picture
enum ;
struct vda_context ;
int ff_vda_create_decoder(struct vda_context *vda_ctx,
uint8_t *extradata,
int extradata_size);
int ff_vda_destroy_decoder(struct vda_context *vda_ctx);
typedef struct AVVDAContext  AVVDAContext;
AVVDAContext *av_vda_alloc_context(void);
int av_vda_default_init(AVCodecContext *avctx);
int av_vda_default_init2(AVCodecContext *avctx, AVVDAContext *vdactx);
void av_vda_default_free(AVCodecContext *avctx);

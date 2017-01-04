#define AVCODEC_VAAPI_INTERNAL_H
typedef struct  FFVAContext;
static inline FFVAContext *ff_vaapi_get_context(AVCodecContext *avctx)
static inline VASurfaceID ff_vaapi_get_surface_id(AVFrame *pic)
int ff_vaapi_context_init(AVCodecContext *avctx);
int ff_vaapi_context_fini(AVCodecContext *avctx);
void ff_vaapi_common_end_frame(AVCodecContext *avctx);
void *ff_vaapi_alloc_pic_param(FFVAContext *vactx, unsigned int size);
void *ff_vaapi_alloc_iq_matrix(FFVAContext *vactx, unsigned int size);
uint8_t *ff_vaapi_alloc_bitplane(FFVAContext *vactx, uint32_t size);
VASliceParameterBufferBase *ff_vaapi_alloc_slice(FFVAContext *vactx, const uint8_t *buffer, uint32_t size);
int ff_vaapi_mpeg_end_frame(AVCodecContext *avctx);
int ff_vaapi_commit_slices(FFVAContext *vactx);
int ff_vaapi_render_picture(FFVAContext *vactx, VASurfaceID surface);

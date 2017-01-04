static void destroy_buffers(VADisplay display, VABufferID *buffers, unsigned int n_buffers)
int ff_vaapi_context_init(AVCodecContext *avctx)
int ff_vaapi_context_fini(AVCodecContext *avctx)
int ff_vaapi_render_picture(FFVAContext *vactx, VASurfaceID surface)
int ff_vaapi_commit_slices(FFVAContext *vactx)
static void *alloc_buffer(FFVAContext *vactx, int type, unsigned int size, uint32_t *buf_id)
void *ff_vaapi_alloc_pic_param(FFVAContext *vactx, unsigned int size)
void *ff_vaapi_alloc_iq_matrix(FFVAContext *vactx, unsigned int size)
uint8_t *ff_vaapi_alloc_bitplane(FFVAContext *vactx, uint32_t size)
VASliceParameterBufferBase *ff_vaapi_alloc_slice(FFVAContext *vactx, const uint8_t *buffer, uint32_t size)
void ff_vaapi_common_end_frame(AVCodecContext *avctx)
#if CONFIG_H263_VAAPI_HWACCEL  || CONFIG_MPEG1_VAAPI_HWACCEL || \
CONFIG_MPEG2_VAAPI_HWACCEL || CONFIG_MPEG4_VAAPI_HWACCEL || \
CONFIG_VC1_VAAPI_HWACCEL   || CONFIG_WMV3_VAAPI_HWACCEL
int ff_vaapi_mpeg_end_frame(AVCodecContext *avctx)

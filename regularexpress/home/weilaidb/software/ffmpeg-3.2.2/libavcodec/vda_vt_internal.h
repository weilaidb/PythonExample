#define AVCODEC_VDA_VT_INTERNAL_H
void ff_vda_output_callback(void *vda_hw_ctx,
CFDictionaryRef user_info,
OSStatus status,
uint32_t infoFlags,
CVImageBufferRef image_buffer);
int ff_vda_default_init(AVCodecContext *avctx);
void ff_vda_default_free(AVCodecContext *avctx);
typedef struct VTContext  VTContext;
int ff_videotoolbox_alloc_frame(AVCodecContext *avctx, AVFrame *frame);
int ff_videotoolbox_uninit(AVCodecContext *avctx);
int ff_videotoolbox_buffer_create(VTContext *vtctx, AVFrame *frame);
int ff_videotoolbox_h264_start_frame(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size);
int ff_videotoolbox_h264_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size);
CFDataRef ff_videotoolbox_avcc_extradata_create(AVCodecContext *avctx);

struct vda_buffer ;
static void vda_decoder_callback(void *vda_hw_ctx,
CFDictionaryRef user_info,
OSStatus status,
uint32_t infoFlags,
CVImageBufferRef image_buffer)
static int vda_sync_decode(VTContext *ctx, struct vda_context *vda_ctx)
static int vda_old_h264_start_frame(AVCodecContext *avctx,
av_unused const uint8_t *buffer,
av_unused uint32_t size)
static int vda_old_h264_decode_slice(AVCodecContext *avctx,
const uint8_t *buffer,
uint32_t size)
static void vda_h264_release_buffer(void *opaque, uint8_t *data)
static int vda_old_h264_end_frame(AVCodecContext *avctx)
int ff_vda_create_decoder(struct vda_context *vda_ctx,
uint8_t *extradata,
int extradata_size)
int ff_vda_destroy_decoder(struct vda_context *vda_ctx)
AVHWAccel ff_h264_vda_old_hwaccel = ;
void ff_vda_output_callback(void *opaque,
CFDictionaryRef user_info,
OSStatus status,
uint32_t infoFlags,
CVImageBufferRef image_buffer)
static int vda_h264_end_frame(AVCodecContext *avctx)
int ff_vda_default_init(AVCodecContext *avctx)
AVHWAccel ff_h264_vda_hwaccel = ;

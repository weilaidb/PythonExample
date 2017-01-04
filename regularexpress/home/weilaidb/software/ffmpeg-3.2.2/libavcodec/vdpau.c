#if FF_API_BUFS_VDPAU
#if FF_API_VDPAU
#undef NDEBUG
static int vdpau_error(VdpStatus status)
AVVDPAUContext *av_alloc_vdpaucontext(void)
MAKE_ACCESSORS(AVVDPAUContext, vdpau_hwaccel, AVVDPAU_Render2, render2)
int av_vdpau_get_surface_parameters(AVCodecContext *avctx,
VdpChromaType *type,
uint32_t *width, uint32_t *height)
int ff_vdpau_common_init(AVCodecContext *avctx, VdpDecoderProfile profile,
int level)
int ff_vdpau_common_uninit(AVCodecContext *avctx)
static int ff_vdpau_common_reinit(AVCodecContext *avctx)
int ff_vdpau_common_start_frame(struct vdpau_picture_context *pic_ctx,
av_unused const uint8_t *buffer,
av_unused uint32_t size)
int ff_vdpau_common_end_frame(AVCodecContext *avctx, AVFrame *frame,
struct vdpau_picture_context *pic_ctx)
#if CONFIG_MPEG1_VDPAU_HWACCEL || \
CONFIG_MPEG2_VDPAU_HWACCEL || CONFIG_MPEG4_VDPAU_HWACCEL || \
CONFIG_VC1_VDPAU_HWACCEL   || CONFIG_WMV3_VDPAU_HWACCEL
int ff_vdpau_mpeg_end_frame(AVCodecContext *avctx)
int ff_vdpau_add_buffer(struct vdpau_picture_context *pic_ctx,
const uint8_t *buf, uint32_t size)
#if FF_API_VDPAU
void ff_vdpau_add_data_chunk(uint8_t *data, const uint8_t *buf, int buf_size)
#if CONFIG_H264_VDPAU_DECODER
void ff_vdpau_h264_set_reference_frames(H264Context *h)
void ff_vdpau_h264_picture_start(H264Context *h)
void ff_vdpau_h264_picture_complete(H264Context *h)
#if CONFIG_MPEG_VDPAU_DECODER || CONFIG_MPEG1_VDPAU_DECODER
void ff_vdpau_mpeg_picture_complete(MpegEncContext *s, const uint8_t *buf,
int buf_size, int slice_count)
#if CONFIG_VC1_VDPAU_DECODER
void ff_vdpau_vc1_decode_picture(MpegEncContext *s, const uint8_t *buf,
int buf_size)
#if CONFIG_MPEG4_VDPAU_DECODER
void ff_vdpau_mpeg4_decode_picture(Mpeg4DecContext *ctx, const uint8_t *buf,
int buf_size)
#if FF_API_VDPAU_PROFILE
int av_vdpau_get_profile(AVCodecContext *avctx, VdpDecoderProfile *profile)
AVVDPAUContext *av_vdpau_alloc_context(void)
int av_vdpau_bind_context(AVCodecContext *avctx, VdpDevice device,
VdpGetProcAddress *get_proc, unsigned flags)

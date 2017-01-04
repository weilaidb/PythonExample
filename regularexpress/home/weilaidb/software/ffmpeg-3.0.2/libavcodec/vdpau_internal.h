#define AVCODEC_VDPAU_INTERNAL_H
#if CONFIG_VDPAU
static inline uintptr_t ff_vdpau_get_surface_id(AVFrame *pic)
struct vdpau_picture_context;
#if CONFIG_VDPAU
union VDPAUPictureInfo ;
typedef struct VDPAUHWContext  VDPAUHWContext;
typedef struct VDPAUContext  VDPAUContext;
struct vdpau_picture_context ;
int ff_vdpau_common_init(AVCodecContext *avctx, VdpDecoderProfile profile,
int level);
int ff_vdpau_common_uninit(AVCodecContext *avctx);
int ff_vdpau_common_start_frame(struct vdpau_picture_context *pic,
const uint8_t *buffer, uint32_t size);
int ff_vdpau_common_end_frame(AVCodecContext *avctx, AVFrame *frame,
struct vdpau_picture_context *pic);
int ff_vdpau_mpeg_end_frame(AVCodecContext *avctx);
int ff_vdpau_add_buffer(struct vdpau_picture_context *pic, const uint8_t *buf,
uint32_t buf_size);

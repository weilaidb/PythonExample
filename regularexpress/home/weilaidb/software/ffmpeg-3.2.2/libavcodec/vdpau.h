#define AVCODEC_VDPAU_H
#if FF_API_BUFS_VDPAU
union AVVDPAUPictureInfo ;
struct AVCodecContext;
struct AVFrame;
typedef int (*AVVDPAU_Render2)(struct AVCodecContext *, struct AVFrame *,
const VdpPictureInfo *, uint32_t,
const VdpBitstreamBuffer *);
typedef struct AVVDPAUContext  AVVDPAUContext;
*av_alloc_vdpaucontext;
av_vdpau_hwaccel_get_render2;
av_vdpau_hwaccel_set_render2;
av_vdpau_bind_context;
av_vdpau_get_surface_parameters;
*av_vdpau_alloc_context;
#if FF_API_VDPAU_PROFILE
attribute_deprecated
av_vdpau_get_profile;
#if FF_API_CAP_VDPAU
#define FF_VDPAU_STATE_USED_FOR_RENDER 1
#define FF_VDPAU_STATE_USED_FOR_REFERENCE 2
struct vdpau_render_state ;

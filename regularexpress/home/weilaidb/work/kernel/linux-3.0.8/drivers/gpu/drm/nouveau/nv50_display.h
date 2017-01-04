#define __NV50_DISPLAY_H__
struct nv50_display_crtc ;
struct nv50_display ;
static inline struct nv50_display *
nv50_display(struct drm_device *dev)
int nv50_display_early_init(struct drm_device *dev);
void nv50_display_late_takedown(struct drm_device *dev);
int nv50_display_create(struct drm_device *dev);
int nv50_display_init(struct drm_device *dev);
void nv50_display_destroy(struct drm_device *dev);
int nv50_crtc_blank(struct nouveau_crtc *, bool blank);
int nv50_crtc_set_clock(struct drm_device *, int head, int pclk);
int  nv50_display_flip_next(struct drm_crtc *, struct drm_framebuffer *,
struct nouveau_channel *chan);
void nv50_display_flip_stop(struct drm_crtc *);
int  nv50_evo_init(struct drm_device *dev);
void nv50_evo_fini(struct drm_device *dev);
void nv50_evo_dmaobj_init(struct nouveau_gpuobj *, u32 memtype, u64 base,
u64 size);
int  nv50_evo_dmaobj_new(struct nouveau_channel *, u32 handle, u32 memtype,
u64 base, u64 size, struct nouveau_gpuobj **);

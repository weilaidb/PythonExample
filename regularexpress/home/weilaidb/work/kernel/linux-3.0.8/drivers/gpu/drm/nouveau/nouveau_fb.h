#define __NOUVEAU_FB_H__
struct nouveau_framebuffer ;
static inline struct nouveau_framebuffer *
nouveau_framebuffer(struct drm_framebuffer *fb)
extern const struct drm_mode_config_funcs nouveau_mode_config_funcs;
int nouveau_framebuffer_init(struct drm_device *dev, struct nouveau_framebuffer *nouveau_fb,
struct drm_mode_fb_cmd *mode_cmd, struct nouveau_bo *nvbo);

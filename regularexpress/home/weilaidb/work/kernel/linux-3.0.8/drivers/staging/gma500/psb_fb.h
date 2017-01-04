#define _PSB_FB_H_
struct psb_framebuffer ;
struct psb_fbdev ;
#define to_psb_fb(x) container_of(x, struct psb_framebuffer, base)
extern int psb_intel_connector_clones(struct drm_device *dev, int type_mask);

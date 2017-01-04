#define _PSB_GTT_H_
struct psb_gtt ;
extern int psb_gtt_init(struct drm_device *dev, int resume);
extern void psb_gtt_takedown(struct drm_device *dev);
struct gtt_range ;
extern struct gtt_range *psb_gtt_alloc_range(struct drm_device *dev, int len,
const char *name, int backed);
extern void psb_gtt_kref_put(struct gtt_range *gt);
extern void psb_gtt_free_range(struct drm_device *dev, struct gtt_range *gt);
extern int psb_gtt_pin(struct gtt_range *gt);
extern void psb_gtt_unpin(struct gtt_range *gt);

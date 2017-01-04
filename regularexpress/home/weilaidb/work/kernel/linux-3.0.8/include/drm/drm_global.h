#define _DRM_GLOBAL_H_
enum drm_global_types ;
struct drm_global_reference ;
extern void drm_global_init(void);
extern void drm_global_release(void);
extern int drm_global_item_ref(struct drm_global_reference *ref);
extern void drm_global_item_unref(struct drm_global_reference *ref);

struct drm_global_item ;
static struct drm_global_item glob[DRM_GLOBAL_NUM];
void drm_global_init(void)
void drm_global_release(void)
int drm_global_item_ref(struct drm_global_reference *ref)
EXPORT_SYMBOL(drm_global_item_ref);
void drm_global_item_unref(struct drm_global_reference *ref)
EXPORT_SYMBOL(drm_global_item_unref);

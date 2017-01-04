#define DRM_SMAN_H
struct drm_sman_mm ;
struct drm_memblock_item ;
struct drm_sman ;
extern void drm_sman_takedown(struct drm_sman * sman);
extern int drm_sman_init(struct drm_sman * sman, unsigned int num_managers,
unsigned int user_order, unsigned int owner_order);
extern int drm_sman_set_range(struct drm_sman * sman, unsigned int manager,
unsigned long start, unsigned long size);
extern int drm_sman_set_manager(struct drm_sman * sman, unsigned int mananger,
struct drm_sman_mm * allocator);
extern struct drm_memblock_item *drm_sman_alloc(struct drm_sman * sman,
unsigned int manager,
unsigned long size,
unsigned alignment,
unsigned long owner);
extern int drm_sman_free_key(struct drm_sman * sman, unsigned int key);
extern int drm_sman_owner_clean(struct drm_sman * sman, unsigned long owner);
extern void drm_sman_owner_cleanup(struct drm_sman * sman, unsigned long owner);
extern void drm_sman_cleanup(struct drm_sman * sman);

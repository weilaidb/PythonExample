int drm_mem_info(char *buf, char **start, off_t offset,
int len, int *eof, void *data)
#if __OS_HAS_AGP
static void *agp_remap(unsigned long offset, unsigned long size,
struct drm_device * dev)
void drm_free_agp(DRM_AGP_MEM * handle, int pages)
EXPORT_SYMBOL(drm_free_agp);
int drm_bind_agp(DRM_AGP_MEM * handle, unsigned int start)
int drm_unbind_agp(DRM_AGP_MEM * handle)
EXPORT_SYMBOL(drm_unbind_agp);
static inline void *agp_remap(unsigned long offset, unsigned long size,
struct drm_device * dev)
void drm_core_ioremap(struct drm_local_map *map, struct drm_device *dev)
EXPORT_SYMBOL(drm_core_ioremap);
void drm_core_ioremap_wc(struct drm_local_map *map, struct drm_device *dev)
EXPORT_SYMBOL(drm_core_ioremap_wc);
void drm_core_ioremapfree(struct drm_local_map *map, struct drm_device *dev)
EXPORT_SYMBOL(drm_core_ioremapfree);

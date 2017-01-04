# define ATI_PCIGART_PAGE_SIZE		4096
static int drm_ati_alloc_pcigart_table(struct drm_device *dev,
struct drm_ati_pcigart_info *gart_info)
static void drm_ati_free_pcigart_table(struct drm_device *dev,
struct drm_ati_pcigart_info *gart_info)
int drm_ati_pcigart_cleanup(struct drm_device *dev, struct drm_ati_pcigart_info *gart_info)
EXPORT_SYMBOL(drm_ati_pcigart_cleanup);
int drm_ati_pcigart_init(struct drm_device *dev, struct drm_ati_pcigart_info *gart_info)
EXPORT_SYMBOL(drm_ati_pcigart_init);

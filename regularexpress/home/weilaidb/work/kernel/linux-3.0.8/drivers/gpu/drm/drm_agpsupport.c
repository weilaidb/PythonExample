#if __OS_HAS_AGP
int drm_agp_info(struct drm_device *dev, struct drm_agp_info *info)
EXPORT_SYMBOL(drm_agp_info);
int drm_agp_info_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_agp_acquire(struct drm_device * dev)
EXPORT_SYMBOL(drm_agp_acquire);
int drm_agp_acquire_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_agp_release(struct drm_device * dev)
EXPORT_SYMBOL(drm_agp_release);
int drm_agp_release_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_agp_enable(struct drm_device * dev, struct drm_agp_mode mode)
EXPORT_SYMBOL(drm_agp_enable);
int drm_agp_enable_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_agp_alloc(struct drm_device *dev, struct drm_agp_buffer *request)
EXPORT_SYMBOL(drm_agp_alloc);
int drm_agp_alloc_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static struct drm_agp_mem *drm_agp_lookup_entry(struct drm_device * dev,
unsigned long handle)
int drm_agp_unbind(struct drm_device *dev, struct drm_agp_binding *request)
EXPORT_SYMBOL(drm_agp_unbind);
int drm_agp_unbind_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_agp_bind(struct drm_device *dev, struct drm_agp_binding *request)
EXPORT_SYMBOL(drm_agp_bind);
int drm_agp_bind_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_agp_free(struct drm_device *dev, struct drm_agp_buffer *request)
EXPORT_SYMBOL(drm_agp_free);
int drm_agp_free_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
struct drm_agp_head *drm_agp_init(struct drm_device *dev)
DRM_AGP_MEM *
drm_agp_bind_pages(struct drm_device *dev,
struct page **pages,
unsigned long num_pages,
uint32_t gtt_offset,
u32 type)
EXPORT_SYMBOL(drm_agp_bind_pages);

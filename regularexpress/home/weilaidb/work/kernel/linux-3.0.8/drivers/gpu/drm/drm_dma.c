int drm_dma_setup(struct drm_device *dev)
void drm_dma_takedown(struct drm_device *dev)
void drm_free_buffer(struct drm_device *dev, struct drm_buf * buf)
void drm_core_reclaim_buffers(struct drm_device *dev,
struct drm_file *file_priv)
EXPORT_SYMBOL(drm_core_reclaim_buffers);

#define VIA_MM_ALIGN_SHIFT 4
#define VIA_MM_ALIGN_MASK ((1 << VIA_MM_ALIGN_SHIFT) - 1)
int via_agp_init(struct drm_device *dev, void *data, struct drm_file *file_priv)
int via_fb_init(struct drm_device *dev, void *data, struct drm_file *file_priv)
int via_final_context(struct drm_device *dev, int context)
void via_lastclose(struct drm_device *dev)
int via_mem_alloc(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int via_mem_free(struct drm_device *dev, void *data, struct drm_file *file_priv)
void via_reclaim_buffers_locked(struct drm_device *dev,
struct drm_file *file_priv)

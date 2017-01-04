#define DEBUG_SCATTER 0
static inline void *drm_vmalloc_dma(unsigned long size)
void drm_sg_cleanup(struct drm_sg_mem * entry)
# define ScatterHandle(x) (unsigned int)((x >> 32) + (x & ((1L << 32) - 1)))
# define ScatterHandle(x) (unsigned int)(x)
int drm_sg_alloc(struct drm_device *dev, struct drm_scatter_gather * request)
int drm_sg_alloc_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int drm_sg_free(struct drm_device *dev, void *data,
struct drm_file *file_priv)

static int
nouveau_channel_pushbuf_ctxdma_init(struct nouveau_channel *chan)
static struct nouveau_bo *
nouveau_channel_user_pushbuf_alloc(struct drm_device *dev)
int
nouveau_channel_alloc(struct drm_device *dev, struct nouveau_channel **chan_ret,
struct drm_file *file_priv,
uint32_t vram_handle, uint32_t gart_handle)
struct nouveau_channel *
nouveau_channel_get_unlocked(struct nouveau_channel *ref)
struct nouveau_channel *
nouveau_channel_get(struct drm_device *dev, struct drm_file *file_priv, int id)
void
nouveau_channel_put_unlocked(struct nouveau_channel **pchan)
void
nouveau_channel_put(struct nouveau_channel **pchan)
static void
nouveau_channel_del(struct kref *ref)
void
nouveau_channel_ref(struct nouveau_channel *chan,
struct nouveau_channel **pchan)
void
nouveau_channel_idle(struct nouveau_channel *chan)
void
nouveau_channel_cleanup(struct drm_device *dev, struct drm_file *file_priv)
static int
nouveau_ioctl_fifo_alloc(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int
nouveau_ioctl_fifo_free(struct drm_device *dev, void *data,
struct drm_file *file_priv)
struct drm_ioctl_desc nouveau_ioctls[] = ;
int nouveau_max_ioctl = DRM_ARRAY_SIZE(nouveau_ioctls);

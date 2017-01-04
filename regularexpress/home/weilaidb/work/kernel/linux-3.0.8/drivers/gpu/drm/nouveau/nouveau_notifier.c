int
nouveau_notifier_init_channel(struct nouveau_channel *chan)
void
nouveau_notifier_takedown_channel(struct nouveau_channel *chan)
static void
nouveau_notifier_gpuobj_dtor(struct drm_device *dev,
struct nouveau_gpuobj *gpuobj)
int
nouveau_notifier_alloc(struct nouveau_channel *chan, uint32_t handle,
int size, uint32_t start, uint32_t end,
uint32_t *b_offset)
int
nouveau_notifier_offset(struct nouveau_gpuobj *nobj, uint32_t *poffset)
int
nouveau_ioctl_notifier_alloc(struct drm_device *dev, void *data,
struct drm_file *file_priv)

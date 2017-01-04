#define NV10_RAMFC(c) (dev_priv->ramfc->pinst + ((c) * NV10_RAMFC__SIZE))
#define NV10_RAMFC__SIZE ((dev_priv->chipset) >= 0x17 ? 64 : 32)
int
nv10_fifo_channel_id(struct drm_device *dev)
int
nv10_fifo_create_context(struct nouveau_channel *chan)
static void
nv10_fifo_do_load_context(struct drm_device *dev, int chid)
int
nv10_fifo_load_context(struct nouveau_channel *chan)
int
nv10_fifo_unload_context(struct drm_device *dev)
static void
nv10_fifo_init_reset(struct drm_device *dev)
static void
nv10_fifo_init_ramxx(struct drm_device *dev)
static void
nv10_fifo_init_intr(struct drm_device *dev)
int
nv10_fifo_init(struct drm_device *dev)

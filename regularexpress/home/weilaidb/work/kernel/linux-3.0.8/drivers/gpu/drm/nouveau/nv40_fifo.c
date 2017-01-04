#define NV40_RAMFC(c) (dev_priv->ramfc->pinst + ((c) * NV40_RAMFC__SIZE))
#define NV40_RAMFC__SIZE 128
int
nv40_fifo_create_context(struct nouveau_channel *chan)
static void
nv40_fifo_do_load_context(struct drm_device *dev, int chid)
int
nv40_fifo_load_context(struct nouveau_channel *chan)
int
nv40_fifo_unload_context(struct drm_device *dev)
static void
nv40_fifo_init_reset(struct drm_device *dev)
static void
nv40_fifo_init_ramxx(struct drm_device *dev)
static void
nv40_fifo_init_intr(struct drm_device *dev)
int
nv40_fifo_init(struct drm_device *dev)

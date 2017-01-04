static void
nv50_fifo_playlist_update(struct drm_device *dev)
static void
nv50_fifo_channel_enable(struct drm_device *dev, int channel)
static void
nv50_fifo_channel_disable(struct drm_device *dev, int channel)
static void
nv50_fifo_init_reset(struct drm_device *dev)
static void
nv50_fifo_init_intr(struct drm_device *dev)
static void
nv50_fifo_init_context_table(struct drm_device *dev)
static void
nv50_fifo_init_regs__nv(struct drm_device *dev)
static void
nv50_fifo_init_regs(struct drm_device *dev)
int
nv50_fifo_init(struct drm_device *dev)
void
nv50_fifo_takedown(struct drm_device *dev)
int
nv50_fifo_channel_id(struct drm_device *dev)
int
nv50_fifo_create_context(struct nouveau_channel *chan)
void
nv50_fifo_destroy_context(struct nouveau_channel *chan)
int
nv50_fifo_load_context(struct nouveau_channel *chan)
int
nv50_fifo_unload_context(struct drm_device *dev)
void
nv50_fifo_tlb_flush(struct drm_device *dev)

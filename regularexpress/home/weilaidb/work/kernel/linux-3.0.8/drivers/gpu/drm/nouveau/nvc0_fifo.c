static void nvc0_fifo_isr(struct drm_device *);
struct nvc0_fifo_priv ;
struct nvc0_fifo_chan ;
static void
nvc0_fifo_playlist_update(struct drm_device *dev)
void
nvc0_fifo_disable(struct drm_device *dev)
void
nvc0_fifo_enable(struct drm_device *dev)
bool
nvc0_fifo_reassign(struct drm_device *dev, bool enable)
bool
nvc0_fifo_cache_pull(struct drm_device *dev, bool enable)
int
nvc0_fifo_channel_id(struct drm_device *dev)
int
nvc0_fifo_create_context(struct nouveau_channel *chan)
void
nvc0_fifo_destroy_context(struct nouveau_channel *chan)
int
nvc0_fifo_load_context(struct nouveau_channel *chan)
int
nvc0_fifo_unload_context(struct drm_device *dev)
static void
nvc0_fifo_destroy(struct drm_device *dev)
void
nvc0_fifo_takedown(struct drm_device *dev)
static int
nvc0_fifo_create(struct drm_device *dev)
int
nvc0_fifo_init(struct drm_device *dev)
struct nouveau_enum nvc0_fifo_fault_unit[] = ;
struct nouveau_enum nvc0_fifo_fault_reason[] = ;
struct nouveau_enum nvc0_fifo_fault_hubclient[] = ;
struct nouveau_enum nvc0_fifo_fault_gpcclient[] = ;
struct nouveau_bitfield nvc0_fifo_subfifo_intr[] = ;
static void
nvc0_fifo_isr_vm_fault(struct drm_device *dev, int unit)
static void
nvc0_fifo_isr_subfifo_intr(struct drm_device *dev, int unit)
static void
nvc0_fifo_isr(struct drm_device *dev)

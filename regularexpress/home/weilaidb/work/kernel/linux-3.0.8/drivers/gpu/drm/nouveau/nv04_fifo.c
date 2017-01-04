#define NV04_RAMFC(c) (dev_priv->ramfc->pinst + ((c) * NV04_RAMFC__SIZE))
#define NV04_RAMFC__SIZE 32
#define NV04_RAMFC_DMA_PUT                                       0x00
#define NV04_RAMFC_DMA_GET                                       0x04
#define NV04_RAMFC_DMA_INSTANCE                                  0x08
#define NV04_RAMFC_DMA_STATE                                     0x0C
#define NV04_RAMFC_DMA_FETCH                                     0x10
#define NV04_RAMFC_ENGINE                                        0x14
#define NV04_RAMFC_PULL1_ENGINE                                  0x18
#define RAMFC_WR(offset, val) nv_wo32(chan->ramfc, NV04_RAMFC_##offset, (val))
#define RAMFC_RD(offset)      nv_ro32(chan->ramfc, NV04_RAMFC_##offset)
void
nv04_fifo_disable(struct drm_device *dev)
void
nv04_fifo_enable(struct drm_device *dev)
bool
nv04_fifo_reassign(struct drm_device *dev, bool enable)
bool
nv04_fifo_cache_pull(struct drm_device *dev, bool enable)
int
nv04_fifo_channel_id(struct drm_device *dev)
#define DMA_FETCH_ENDIANNESS NV_PFIFO_CACHE1_BIG_ENDIAN
#define DMA_FETCH_ENDIANNESS 0
int
nv04_fifo_create_context(struct nouveau_channel *chan)
void
nv04_fifo_destroy_context(struct nouveau_channel *chan)
static void
nv04_fifo_do_load_context(struct drm_device *dev, int chid)
int
nv04_fifo_load_context(struct nouveau_channel *chan)
int
nv04_fifo_unload_context(struct drm_device *dev)
static void
nv04_fifo_init_reset(struct drm_device *dev)
static void
nv04_fifo_init_ramxx(struct drm_device *dev)
static void
nv04_fifo_init_intr(struct drm_device *dev)
int
nv04_fifo_init(struct drm_device *dev)
void
nv04_fifo_fini(struct drm_device *dev)
static bool
nouveau_fifo_swmthd(struct drm_device *dev, u32 chid, u32 addr, u32 data)
static const char *nv_dma_state_err(u32 state)
void
nv04_fifo_isr(struct drm_device *dev)

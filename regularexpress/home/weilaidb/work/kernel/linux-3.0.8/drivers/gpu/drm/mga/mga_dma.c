#define MGA_DEFAULT_USEC_TIMEOUT	10000
#define MGA_FREELIST_DEBUG		0
#define MINIMAL_CLEANUP 0
#define FULL_CLEANUP 1
static int mga_do_cleanup_dma(struct drm_device *dev, int full_cleanup);
int mga_do_wait_for_idle(drm_mga_private_t *dev_priv)
static int mga_do_dma_reset(drm_mga_private_t *dev_priv)
void mga_do_dma_flush(drm_mga_private_t *dev_priv)
void mga_do_dma_wrap_start(drm_mga_private_t *dev_priv)
void mga_do_dma_wrap_end(drm_mga_private_t *dev_priv)
#define MGA_BUFFER_USED		(~0)
#define MGA_BUFFER_FREE		0
#if MGA_FREELIST_DEBUG
static void mga_freelist_print(struct drm_device *dev)
static int mga_freelist_init(struct drm_device *dev, drm_mga_private_t *dev_priv)
static void mga_freelist_cleanup(struct drm_device *dev)
static struct drm_buf *mga_freelist_get(struct drm_device * dev)
int mga_freelist_put(struct drm_device *dev, struct drm_buf *buf)
int mga_driver_load(struct drm_device *dev, unsigned long flags)
#if __OS_HAS_AGP
static int mga_do_agp_dma_bootstrap(struct drm_device *dev,
drm_mga_dma_bootstrap_t *dma_bs)
static int mga_do_agp_dma_bootstrap(struct drm_device *dev,
drm_mga_dma_bootstrap_t *dma_bs)
static int mga_do_pci_dma_bootstrap(struct drm_device *dev,
drm_mga_dma_bootstrap_t *dma_bs)
static int mga_do_dma_bootstrap(struct drm_device *dev,
drm_mga_dma_bootstrap_t *dma_bs)
int mga_dma_bootstrap(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int mga_do_init_dma(struct drm_device *dev, drm_mga_init_t *init)
static int mga_do_cleanup_dma(struct drm_device *dev, int full_cleanup)
int mga_dma_init(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int mga_dma_flush(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int mga_dma_reset(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int mga_dma_get_buffers(struct drm_device *dev,
struct drm_file *file_priv, struct drm_dma *d)
int mga_dma_buffers(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int mga_driver_unload(struct drm_device *dev)
void mga_driver_lastclose(struct drm_device *dev)
int mga_driver_dma_quiescent(struct drm_device *dev)

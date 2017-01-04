#define SAVAGE_DEFAULT_USEC_TIMEOUT	1000000
#define SAVAGE_EVENT_USEC_TIMEOUT	5000000
#define SAVAGE_FREELIST_DEBUG		0
static int savage_do_cleanup_bci(struct drm_device *dev);
static int
savage_bci_wait_fifo_shadow(drm_savage_private_t * dev_priv, unsigned int n)
static int
savage_bci_wait_fifo_s3d(drm_savage_private_t * dev_priv, unsigned int n)
static int
savage_bci_wait_fifo_s4(drm_savage_private_t * dev_priv, unsigned int n)
static int
savage_bci_wait_event_shadow(drm_savage_private_t * dev_priv, uint16_t e)
static int
savage_bci_wait_event_reg(drm_savage_private_t * dev_priv, uint16_t e)
uint16_t savage_bci_emit_event(drm_savage_private_t * dev_priv,
unsigned int flags)
static int savage_freelist_init(struct drm_device * dev)
static struct drm_buf *savage_freelist_get(struct drm_device * dev)
void savage_freelist_put(struct drm_device * dev, struct drm_buf * buf)
static int savage_dma_init(drm_savage_private_t * dev_priv)
void savage_dma_reset(drm_savage_private_t * dev_priv)
void savage_dma_wait(drm_savage_private_t * dev_priv, unsigned int page)
uint32_t *savage_dma_alloc(drm_savage_private_t * dev_priv, unsigned int n)
static void savage_dma_flush(drm_savage_private_t * dev_priv)
static void savage_fake_dma_flush(drm_savage_private_t * dev_priv)
int savage_driver_load(struct drm_device *dev, unsigned long chipset)
int savage_driver_firstopen(struct drm_device *dev)
void savage_driver_lastclose(struct drm_device *dev)
int savage_driver_unload(struct drm_device *dev)
static int savage_do_init_bci(struct drm_device * dev, drm_savage_init_t * init)
static int savage_do_cleanup_bci(struct drm_device * dev)
static int savage_bci_init(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int savage_bci_event_emit(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int savage_bci_event_wait(struct drm_device *dev, void *data, struct drm_file *file_priv)
static int savage_bci_get_buffers(struct drm_device *dev,
struct drm_file *file_priv,
struct drm_dma *d)
int savage_bci_buffers(struct drm_device *dev, void *data, struct drm_file *file_priv)
void savage_reclaim_buffers(struct drm_device *dev, struct drm_file *file_priv)
struct drm_ioctl_desc savage_ioctls[] = ;
int savage_max_ioctl = DRM_ARRAY_SIZE(savage_ioctls);

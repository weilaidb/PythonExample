#define R128_FIFO_DEBUG		0
#define FIRMWARE_NAME		"r128/r128_cce.bin"
MODULE_FIRMWARE(FIRMWARE_NAME);
static int R128_READ_PLL(struct drm_device *dev, int addr)
#if R128_FIFO_DEBUG
static void r128_status(drm_r128_private_t *dev_priv)
static int r128_do_pixcache_flush(drm_r128_private_t *dev_priv)
static int r128_do_wait_for_fifo(drm_r128_private_t *dev_priv, int entries)
static int r128_do_wait_for_idle(drm_r128_private_t *dev_priv)
static int r128_cce_load_microcode(drm_r128_private_t *dev_priv)
static void r128_do_cce_flush(drm_r128_private_t *dev_priv)
int r128_do_cce_idle(drm_r128_private_t *dev_priv)
static void r128_do_cce_start(drm_r128_private_t *dev_priv)
static void r128_do_cce_reset(drm_r128_private_t *dev_priv)
static void r128_do_cce_stop(drm_r128_private_t *dev_priv)
static int r128_do_engine_reset(struct drm_device *dev)
static void r128_cce_init_ring_buffer(struct drm_device *dev,
drm_r128_private_t *dev_priv)
static int r128_do_init_cce(struct drm_device *dev, drm_r128_init_t *init)
int r128_do_cleanup_cce(struct drm_device *dev)
int r128_cce_init(struct drm_device *dev, void *data, struct drm_file *file_priv)
int r128_cce_start(struct drm_device *dev, void *data, struct drm_file *file_priv)
int r128_cce_stop(struct drm_device *dev, void *data, struct drm_file *file_priv)
int r128_cce_reset(struct drm_device *dev, void *data, struct drm_file *file_priv)
int r128_cce_idle(struct drm_device *dev, void *data, struct drm_file *file_priv)
int r128_engine_reset(struct drm_device *dev, void *data, struct drm_file *file_priv)
int r128_fullscreen(struct drm_device *dev, void *data, struct drm_file *file_priv)
#define R128_BUFFER_USED	0xffffffff
#define R128_BUFFER_FREE	0
static struct drm_buf *r128_freelist_get(struct drm_device * dev)
void r128_freelist_reset(struct drm_device *dev)
int r128_wait_ring(drm_r128_private_t *dev_priv, int n)
static int r128_cce_get_buffers(struct drm_device *dev,
struct drm_file *file_priv,
struct drm_dma *d)
int r128_cce_buffers(struct drm_device *dev, void *data, struct drm_file *file_priv)

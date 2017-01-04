#define I810_BUF_FREE		2
#define I810_BUF_CLIENT		1
#define I810_BUF_HARDWARE	0
#define I810_BUF_UNMAPPED 0
#define I810_BUF_MAPPED   1
static struct drm_buf *i810_freelist_get(struct drm_device * dev)
static int i810_freelist_put(struct drm_device *dev, struct drm_buf *buf)
static int i810_mmap_buffers(struct file *filp, struct vm_area_struct *vma)
static const struct file_operations i810_buffer_fops = ;
static int i810_map_buffer(struct drm_buf *buf, struct drm_file *file_priv)
static int i810_unmap_buffer(struct drm_buf *buf)
static int i810_dma_get_buffer(struct drm_device *dev, drm_i810_dma_t *d,
struct drm_file *file_priv)
static int i810_dma_cleanup(struct drm_device *dev)
static int i810_wait_ring(struct drm_device *dev, int n)
static void i810_kernel_lost_context(struct drm_device *dev)
static int i810_freelist_init(struct drm_device *dev, drm_i810_private_t *dev_priv)
static int i810_dma_initialize(struct drm_device *dev,
drm_i810_private_t *dev_priv,
drm_i810_init_t *init)
static int i810_dma_init(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static void i810EmitContextVerified(struct drm_device *dev,
volatile unsigned int *code)
static void i810EmitTexVerified(struct drm_device *dev, volatile unsigned int *code)
static void i810EmitDestVerified(struct drm_device *dev,
volatile unsigned int *code)
static void i810EmitState(struct drm_device *dev)
static void i810_dma_dispatch_clear(struct drm_device *dev, int flags,
unsigned int clear_color,
unsigned int clear_zval)
static void i810_dma_dispatch_swap(struct drm_device *dev)
static void i810_dma_dispatch_vertex(struct drm_device *dev,
struct drm_buf *buf, int discard, int used)
static void i810_dma_dispatch_flip(struct drm_device *dev)
static void i810_dma_quiescent(struct drm_device *dev)
static int i810_flush_queue(struct drm_device *dev)
static void i810_reclaim_buffers(struct drm_device *dev,
struct drm_file *file_priv)
static int i810_flush_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_dma_vertex(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_clear_bufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_swap_bufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_getage(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_getbuf(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_copybuf(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_docopy(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static void i810_dma_dispatch_mc(struct drm_device *dev, struct drm_buf *buf, int used,
unsigned int last_render)
static int i810_dma_mc(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_rstatus(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_ov0_info(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_fstatus(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i810_ov0_flip(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static void i810_do_init_pageflip(struct drm_device *dev)
static int i810_do_cleanup_pageflip(struct drm_device *dev)
static int i810_flip_bufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
int i810_driver_load(struct drm_device *dev, unsigned long flags)
void i810_driver_lastclose(struct drm_device *dev)
void i810_driver_preclose(struct drm_device *dev, struct drm_file *file_priv)
void i810_driver_reclaim_buffers_locked(struct drm_device *dev,
struct drm_file *file_priv)
int i810_driver_dma_quiescent(struct drm_device *dev)
struct drm_ioctl_desc i810_ioctls[] = ;
int i810_max_ioctl = DRM_ARRAY_SIZE(i810_ioctls);
int i810_driver_device_is_agp(struct drm_device *dev)

#define RADEON_FIFO_DEBUG	0
#define FIRMWARE_R100		"radeon/R100_cp.bin"
#define FIRMWARE_R200		"radeon/R200_cp.bin"
#define FIRMWARE_R300		"radeon/R300_cp.bin"
#define FIRMWARE_R420		"radeon/R420_cp.bin"
#define FIRMWARE_RS690		"radeon/RS690_cp.bin"
#define FIRMWARE_RS600		"radeon/RS600_cp.bin"
#define FIRMWARE_R520		"radeon/R520_cp.bin"
MODULE_FIRMWARE(FIRMWARE_R100);
MODULE_FIRMWARE(FIRMWARE_R200);
MODULE_FIRMWARE(FIRMWARE_R300);
MODULE_FIRMWARE(FIRMWARE_R420);
MODULE_FIRMWARE(FIRMWARE_RS690);
MODULE_FIRMWARE(FIRMWARE_RS600);
MODULE_FIRMWARE(FIRMWARE_R520);
static int radeon_do_cleanup_cp(struct drm_device * dev);
static void radeon_do_cp_start(drm_radeon_private_t * dev_priv);
u32 radeon_read_ring_rptr(drm_radeon_private_t *dev_priv, u32 off)
u32 radeon_get_ring_head(drm_radeon_private_t *dev_priv)
void radeon_write_ring_rptr(drm_radeon_private_t *dev_priv, u32 off, u32 val)
void radeon_set_ring_head(drm_radeon_private_t *dev_priv, u32 val)
u32 radeon_get_scratch(drm_radeon_private_t *dev_priv, int index)
u32 RADEON_READ_MM(drm_radeon_private_t *dev_priv, int addr)
static u32 R500_READ_MCIND(drm_radeon_private_t *dev_priv, int addr)
static u32 RS480_READ_MCIND(drm_radeon_private_t *dev_priv, int addr)
static u32 RS690_READ_MCIND(drm_radeon_private_t *dev_priv, int addr)
static u32 RS600_READ_MCIND(drm_radeon_private_t *dev_priv, int addr)
static u32 IGP_READ_MCIND(drm_radeon_private_t *dev_priv, int addr)
u32 radeon_read_fb_location(drm_radeon_private_t *dev_priv)
static void radeon_write_fb_location(drm_radeon_private_t *dev_priv, u32 fb_loc)
void radeon_write_agp_location(drm_radeon_private_t *dev_priv, u32 agp_loc)
void radeon_write_agp_base(drm_radeon_private_t *dev_priv, u64 agp_base)
void radeon_enable_bm(struct drm_radeon_private *dev_priv)
static int RADEON_READ_PLL(struct drm_device * dev, int addr)
static u32 RADEON_READ_PCIE(drm_radeon_private_t *dev_priv, int addr)
#if RADEON_FIFO_DEBUG
static void radeon_status(drm_radeon_private_t * dev_priv)
static int radeon_do_pixcache_flush(drm_radeon_private_t * dev_priv)
static int radeon_do_wait_for_fifo(drm_radeon_private_t * dev_priv, int entries)
static int radeon_do_wait_for_idle(drm_radeon_private_t * dev_priv)
static void radeon_init_pipes(struct drm_device *dev)
static int radeon_cp_init_microcode(drm_radeon_private_t *dev_priv)
static void radeon_cp_load_microcode(drm_radeon_private_t *dev_priv)
static void radeon_do_cp_flush(drm_radeon_private_t * dev_priv)
int radeon_do_cp_idle(drm_radeon_private_t * dev_priv)
static void radeon_do_cp_start(drm_radeon_private_t * dev_priv)
static void radeon_do_cp_reset(drm_radeon_private_t * dev_priv)
static void radeon_do_cp_stop(drm_radeon_private_t * dev_priv)
static int radeon_do_engine_reset(struct drm_device * dev)
static void radeon_cp_init_ring_buffer(struct drm_device * dev,
drm_radeon_private_t *dev_priv,
struct drm_file *file_priv)
static void radeon_test_writeback(drm_radeon_private_t * dev_priv)
static void radeon_set_igpgart(drm_radeon_private_t * dev_priv, int on)
static void rs600_set_igpgart(drm_radeon_private_t *dev_priv, int on)
static void radeon_set_pciegart(drm_radeon_private_t * dev_priv, int on)
static void radeon_set_pcigart(drm_radeon_private_t * dev_priv, int on)
static int radeon_setup_pcigart_surface(drm_radeon_private_t *dev_priv)
static int radeon_do_init_cp(struct drm_device *dev, drm_radeon_init_t *init,
struct drm_file *file_priv)
static int radeon_do_cleanup_cp(struct drm_device * dev)
static int radeon_do_resume_cp(struct drm_device *dev, struct drm_file *file_priv)
int radeon_cp_init(struct drm_device *dev, void *data, struct drm_file *file_priv)
int radeon_cp_start(struct drm_device *dev, void *data, struct drm_file *file_priv)
int radeon_cp_stop(struct drm_device *dev, void *data, struct drm_file *file_priv)
void radeon_do_release(struct drm_device * dev)
int radeon_cp_reset(struct drm_device *dev, void *data, struct drm_file *file_priv)
int radeon_cp_idle(struct drm_device *dev, void *data, struct drm_file *file_priv)
int radeon_cp_resume(struct drm_device *dev, void *data, struct drm_file *file_priv)
int radeon_engine_reset(struct drm_device *dev, void *data, struct drm_file *file_priv)
int radeon_fullscreen(struct drm_device *dev, void *data, struct drm_file *file_priv)
struct drm_buf *radeon_freelist_get(struct drm_device * dev)
void radeon_freelist_reset(struct drm_device * dev)
int radeon_wait_ring(drm_radeon_private_t * dev_priv, int n)
static int radeon_cp_get_buffers(struct drm_device *dev,
struct drm_file *file_priv,
struct drm_dma * d)
int radeon_cp_buffers(struct drm_device *dev, void *data, struct drm_file *file_priv)
int radeon_driver_load(struct drm_device *dev, unsigned long flags)
int radeon_master_create(struct drm_device *dev, struct drm_master *master)
void radeon_master_destroy(struct drm_device *dev, struct drm_master *master)
int radeon_driver_firstopen(struct drm_device *dev)
int radeon_driver_unload(struct drm_device *dev)
void radeon_commit_ring(drm_radeon_private_t *dev_priv)

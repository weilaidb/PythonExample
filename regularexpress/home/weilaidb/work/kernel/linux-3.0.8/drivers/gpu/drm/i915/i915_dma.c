static void i915_write_hws_pga(struct drm_device *dev)
static int i915_init_phys_hws(struct drm_device *dev)
static void i915_free_hws(struct drm_device *dev)
void i915_kernel_lost_context(struct drm_device * dev)
static int i915_dma_cleanup(struct drm_device * dev)
static int i915_initialize(struct drm_device * dev, drm_i915_init_t * init)
static int i915_dma_resume(struct drm_device * dev)
static int i915_dma_init(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int validate_cmd(int cmd)
static int i915_emit_cmds(struct drm_device * dev, int *buffer, int dwords)
int
i915_emit_box(struct drm_device *dev,
struct drm_clip_rect *box,
int DR1, int DR4)
static void i915_emit_breadcrumb(struct drm_device *dev)
static int i915_dispatch_cmdbuffer(struct drm_device * dev,
drm_i915_cmdbuffer_t *cmd,
struct drm_clip_rect *cliprects,
void *cmdbuf)
static int i915_dispatch_batchbuffer(struct drm_device * dev,
drm_i915_batchbuffer_t * batch,
struct drm_clip_rect *cliprects)
static int i915_dispatch_flip(struct drm_device * dev)
static int i915_quiescent(struct drm_device *dev)
static int i915_flush_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i915_batchbuffer(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i915_cmdbuffer(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i915_flip_bufs(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i915_getparam(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i915_setparam(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i915_set_status_page(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int i915_get_bridge_dev(struct drm_device *dev)
#define MCHBAR_I915 0x44
#define MCHBAR_I965 0x48
#define MCHBAR_SIZE (4*4096)
#define DEVEN_REG 0x54
#define   DEVEN_MCHBAR_EN (1 << 28)
static int
intel_alloc_mchbar_resource(struct drm_device *dev)
static void
intel_setup_mchbar(struct drm_device *dev)
static void
intel_teardown_mchbar(struct drm_device *dev)
#define PTE_ADDRESS_MASK		0xfffff000
#define PTE_ADDRESS_MASK_HIGH		0x000000f0
#define PTE_MAPPING_TYPE_UNCACHED	(0 << 1)
#define PTE_MAPPING_TYPE_DCACHE		(1 << 1)
#define PTE_MAPPING_TYPE_CACHED		(3 << 1)
#define PTE_MAPPING_TYPE_MASK		(3 << 1)
#define PTE_VALID			(1 << 0)
static unsigned long i915_stolen_to_phys(struct drm_device *dev, u32 offset)
static void i915_warn_stolen(struct drm_device *dev)
static void i915_setup_compression(struct drm_device *dev, int size)
static void i915_cleanup_compression(struct drm_device *dev)
static unsigned int i915_vga_set_decode(void *cookie, bool state)
static void i915_switcheroo_set_state(struct pci_dev *pdev, enum vga_switcheroo_state state)
static bool i915_switcheroo_can_switch(struct pci_dev *pdev)
static int i915_load_gem_init(struct drm_device *dev)
static int i915_load_modeset_init(struct drm_device *dev)
int i915_master_create(struct drm_device *dev, struct drm_master *master)
void i915_master_destroy(struct drm_device *dev, struct drm_master *master)
static void i915_pineview_get_mem_freq(struct drm_device *dev)
static void i915_ironlake_get_mem_freq(struct drm_device *dev)
static const struct cparams  cparams[] = ;
unsigned long i915_chipset_val(struct drm_i915_private *dev_priv)
unsigned long i915_mch_val(struct drm_i915_private *dev_priv)
static u16 pvid_to_extvid(struct drm_i915_private *dev_priv, u8 pxvid)
void i915_update_gfx_val(struct drm_i915_private *dev_priv)
unsigned long i915_gfx_val(struct drm_i915_private *dev_priv)
static struct drm_i915_private *i915_mch_dev;
static DEFINE_SPINLOCK(mchdev_lock);
unsigned long i915_read_mch_val(void)
EXPORT_SYMBOL_GPL(i915_read_mch_val);
bool i915_gpu_raise(void)
EXPORT_SYMBOL_GPL(i915_gpu_raise);
bool i915_gpu_lower(void)
EXPORT_SYMBOL_GPL(i915_gpu_lower);
bool i915_gpu_busy(void)
EXPORT_SYMBOL_GPL(i915_gpu_busy);
bool i915_gpu_turbo_disable(void)
EXPORT_SYMBOL_GPL(i915_gpu_turbo_disable);
static void
ips_ping_for_i915_load(void)
int i915_driver_load(struct drm_device *dev, unsigned long flags)
int i915_driver_unload(struct drm_device *dev)
int i915_driver_open(struct drm_device *dev, struct drm_file *file)
void i915_driver_lastclose(struct drm_device * dev)
void i915_driver_preclose(struct drm_device * dev, struct drm_file *file_priv)
void i915_driver_postclose(struct drm_device *dev, struct drm_file *file)
struct drm_ioctl_desc i915_ioctls[] = ;
int i915_max_ioctl = DRM_ARRAY_SIZE(i915_ioctls);
int i915_driver_device_is_agp(struct drm_device * dev)

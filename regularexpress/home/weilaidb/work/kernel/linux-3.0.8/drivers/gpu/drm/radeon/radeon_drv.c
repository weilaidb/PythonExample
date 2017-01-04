#define KMS_DRIVER_MAJOR	2
#define KMS_DRIVER_MINOR	10
#define KMS_DRIVER_PATCHLEVEL	0
int radeon_driver_load_kms(struct drm_device *dev, unsigned long flags);
int radeon_driver_unload_kms(struct drm_device *dev);
int radeon_driver_firstopen_kms(struct drm_device *dev);
void radeon_driver_lastclose_kms(struct drm_device *dev);
int radeon_driver_open_kms(struct drm_device *dev, struct drm_file *file_priv);
void radeon_driver_postclose_kms(struct drm_device *dev,
struct drm_file *file_priv);
void radeon_driver_preclose_kms(struct drm_device *dev,
struct drm_file *file_priv);
int radeon_suspend_kms(struct drm_device *dev, pm_message_t state);
int radeon_resume_kms(struct drm_device *dev);
u32 radeon_get_vblank_counter_kms(struct drm_device *dev, int crtc);
int radeon_enable_vblank_kms(struct drm_device *dev, int crtc);
void radeon_disable_vblank_kms(struct drm_device *dev, int crtc);
int radeon_get_vblank_timestamp_kms(struct drm_device *dev, int crtc,
int *max_error,
struct timeval *vblank_time,
unsigned flags);
void radeon_driver_irq_preinstall_kms(struct drm_device *dev);
int radeon_driver_irq_postinstall_kms(struct drm_device *dev);
void radeon_driver_irq_uninstall_kms(struct drm_device *dev);
irqreturn_t radeon_driver_irq_handler_kms(DRM_IRQ_ARGS);
int radeon_dma_ioctl_kms(struct drm_device *dev, void *data,
struct drm_file *file_priv);
int radeon_gem_object_init(struct drm_gem_object *obj);
void radeon_gem_object_free(struct drm_gem_object *obj);
extern int radeon_get_crtc_scanoutpos(struct drm_device *dev, int crtc,
int *vpos, int *hpos);
extern struct drm_ioctl_desc radeon_ioctls_kms[];
extern int radeon_max_kms_ioctl;
int radeon_mmap(struct file *filp, struct vm_area_struct *vma);
int radeon_mode_dumb_mmap(struct drm_file *filp,
struct drm_device *dev,
uint32_t handle, uint64_t *offset_p);
int radeon_mode_dumb_create(struct drm_file *file_priv,
struct drm_device *dev,
struct drm_mode_create_dumb *args);
int radeon_mode_dumb_destroy(struct drm_file *file_priv,
struct drm_device *dev,
uint32_t handle);
#if defined(CONFIG_DEBUG_FS)
int radeon_debugfs_init(struct drm_minor *minor);
void radeon_debugfs_cleanup(struct drm_minor *minor);
int radeon_no_wb;
int radeon_modeset = -1;
int radeon_dynclks = -1;
int radeon_r4xx_atom = 0;
int radeon_agpmode = 0;
int radeon_vram_limit = 0;
int radeon_gart_size = 512;
int radeon_benchmarking = 0;
int radeon_testing = 0;
int radeon_connector_table = 0;
int radeon_tv = 1;
int radeon_audio = 0;
int radeon_disp_priority = 0;
int radeon_hw_i2c = 0;
int radeon_pcie_gen2 = 0;
MODULE_PARM_DESC(no_wb, "Disable AGP writeback for scratch registers");
module_param_named(no_wb, radeon_no_wb, int, 0444);
MODULE_PARM_DESC(modeset, "Disable/Enable modesetting");
module_param_named(modeset, radeon_modeset, int, 0400);
MODULE_PARM_DESC(dynclks, "Disable/Enable dynamic clocks");
module_param_named(dynclks, radeon_dynclks, int, 0444);
MODULE_PARM_DESC(r4xx_atom, "Enable ATOMBIOS modesetting for R4xx");
module_param_named(r4xx_atom, radeon_r4xx_atom, int, 0444);
MODULE_PARM_DESC(vramlimit, "Restrict VRAM for testing");
module_param_named(vramlimit, radeon_vram_limit, int, 0600);
MODULE_PARM_DESC(agpmode, "AGP Mode (-1 == PCI)");
module_param_named(agpmode, radeon_agpmode, int, 0444);
MODULE_PARM_DESC(gartsize, "Size of PCIE/IGP gart to setup in megabytes (32,64, etc)\n");
module_param_named(gartsize, radeon_gart_size, int, 0600);
MODULE_PARM_DESC(benchmark, "Run benchmark");
module_param_named(benchmark, radeon_benchmarking, int, 0444);
MODULE_PARM_DESC(test, "Run tests");
module_param_named(test, radeon_testing, int, 0444);
MODULE_PARM_DESC(connector_table, "Force connector table");
module_param_named(connector_table, radeon_connector_table, int, 0444);
MODULE_PARM_DESC(tv, "TV enable (0 = disable)");
module_param_named(tv, radeon_tv, int, 0444);
MODULE_PARM_DESC(audio, "Audio enable (1 = enable)");
module_param_named(audio, radeon_audio, int, 0444);
MODULE_PARM_DESC(disp_priority, "Display Priority (0 = auto, 1 = normal, 2 = high)");
module_param_named(disp_priority, radeon_disp_priority, int, 0444);
MODULE_PARM_DESC(hw_i2c, "hw i2c engine enable (0 = disable)");
module_param_named(hw_i2c, radeon_hw_i2c, int, 0444);
MODULE_PARM_DESC(pcie_gen2, "PCIE Gen2 mode (1 = enable)");
module_param_named(pcie_gen2, radeon_pcie_gen2, int, 0444);
static int radeon_suspend(struct drm_device *dev, pm_message_t state)
static int radeon_resume(struct drm_device *dev)
static struct pci_device_id pciidlist[] = ;
#if defined(CONFIG_DRM_RADEON_KMS)
MODULE_DEVICE_TABLE(pci, pciidlist);
static struct drm_driver driver_old = ;
static struct drm_driver kms_driver;
static void radeon_kick_out_firmware_fb(struct pci_dev *pdev)
static int __devinit
radeon_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void
radeon_pci_remove(struct pci_dev *pdev)
static int
radeon_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int
radeon_pci_resume(struct pci_dev *pdev)
static struct drm_driver kms_driver = ;
static struct drm_driver *driver;
static struct pci_driver *pdriver;
static struct pci_driver radeon_pci_driver = ;
static struct pci_driver radeon_kms_pci_driver = ;
static int __init radeon_init(void)
static void __exit radeon_exit(void)
module_init(radeon_init);
module_exit(radeon_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");

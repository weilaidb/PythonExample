int drm_psb_debug;
static int drm_psb_trap_pagefaults;
int drm_psb_no_fb;
static int psb_probe(struct pci_dev *pdev, const struct pci_device_id *ent);
MODULE_PARM_DESC(debug, "Enable debug output");
MODULE_PARM_DESC(no_fb, "Disable FBdev");
MODULE_PARM_DESC(trap_pagefaults, "Error and reset on MMU pagefaults");
module_param_named(debug, drm_psb_debug, int, 0600);
module_param_named(no_fb, drm_psb_no_fb, int, 0600);
module_param_named(trap_pagefaults, drm_psb_trap_pagefaults, int, 0600);
static struct pci_device_id pciidlist[] = ;
MODULE_DEVICE_TABLE(pci, pciidlist);
#define DRM_IOCTL_PSB_KMS_OFF	\
DRM_IO(DRM_PSB_KMS_OFF + DRM_COMMAND_BASE)
#define DRM_IOCTL_PSB_KMS_ON	\
DRM_IO(DRM_PSB_KMS_ON + DRM_COMMAND_BASE)
#define DRM_IOCTL_PSB_SIZES	\
DRM_IOR(DRM_PSB_SIZES + DRM_COMMAND_BASE, \
struct drm_psb_sizes_arg)
#define DRM_IOCTL_PSB_FUSE_REG	\
DRM_IOWR(DRM_PSB_FUSE_REG + DRM_COMMAND_BASE, uint32_t)
#define DRM_IOCTL_PSB_DC_STATE	\
DRM_IOW(DRM_PSB_DC_STATE + DRM_COMMAND_BASE, \
struct drm_psb_dc_state_arg)
#define DRM_IOCTL_PSB_ADB	\
DRM_IOWR(DRM_PSB_ADB + DRM_COMMAND_BASE, uint32_t)
#define DRM_IOCTL_PSB_MODE_OPERATION	\
DRM_IOWR(DRM_PSB_MODE_OPERATION + DRM_COMMAND_BASE, \
struct drm_psb_mode_operation_arg)
#define DRM_IOCTL_PSB_STOLEN_MEMORY	\
DRM_IOWR(DRM_PSB_STOLEN_MEMORY + DRM_COMMAND_BASE, \
struct drm_psb_stolen_memory_arg)
#define DRM_IOCTL_PSB_REGISTER_RW	\
DRM_IOWR(DRM_PSB_REGISTER_RW + DRM_COMMAND_BASE, \
struct drm_psb_register_rw_arg)
#define DRM_IOCTL_PSB_DPST	\
DRM_IOWR(DRM_PSB_DPST + DRM_COMMAND_BASE, \
uint32_t)
#define DRM_IOCTL_PSB_GAMMA	\
DRM_IOWR(DRM_PSB_GAMMA + DRM_COMMAND_BASE, \
struct drm_psb_dpst_lut_arg)
#define DRM_IOCTL_PSB_DPST_BL	\
DRM_IOWR(DRM_PSB_DPST_BL + DRM_COMMAND_BASE, \
uint32_t)
#define DRM_IOCTL_PSB_GET_PIPE_FROM_CRTC_ID	\
DRM_IOWR(DRM_PSB_GET_PIPE_FROM_CRTC_ID + DRM_COMMAND_BASE, \
struct drm_psb_get_pipe_from_crtc_id_arg)
static int psb_sizes_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
static int psb_dc_state_ioctl(struct drm_device *dev, void * data,
struct drm_file *file_priv);
static int psb_adb_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
static int psb_mode_operation_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
static int psb_stolen_memory_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
static int psb_register_rw_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
static int psb_dpst_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
static int psb_gamma_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
static int psb_dpst_bl_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv);
#define PSB_IOCTL_DEF(ioctl, func, flags) \
[DRM_IOCTL_NR(ioctl) - DRM_COMMAND_BASE] =
static struct drm_ioctl_desc psb_ioctls[] = ;
static void psb_lastclose(struct drm_device *dev)
static void psb_do_takedown(struct drm_device *dev)
void mrst_get_fuse_settings(struct drm_device *dev)
void mid_get_pci_revID (struct drm_psb_private *dev_priv)
void mrst_get_vbt_data(struct drm_psb_private *dev_priv)
static void psb_get_core_freq(struct drm_device *dev)
static int psb_do_init(struct drm_device *dev)
static int psb_driver_unload(struct drm_device *dev)
static int psb_driver_load(struct drm_device *dev, unsigned long chipset)
int psb_driver_device_is_agp(struct drm_device *dev)
static int psb_sizes_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psb_dc_state_ioctl(struct drm_device *dev, void * data,
struct drm_file *file_priv)
static int psb_dpst_bl_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psb_adb_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psb_dpst_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psb_gamma_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psb_mode_operation_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psb_stolen_memory_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psb_register_rw_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psb_driver_open(struct drm_device *dev, struct drm_file *priv)
static void psb_driver_close(struct drm_device *dev, struct drm_file *priv)
static long psb_unlocked_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
void psb_driver_preclose(struct drm_device *dev, struct drm_file *priv)
static void psb_remove(struct pci_dev *pdev)
static const struct dev_pm_ops psb_pm_ops = ;
static struct vm_operations_struct psb_gem_vm_ops = ;
static struct drm_driver driver = ;
static struct pci_driver psb_pci_driver = ;
static int psb_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __init psb_init(void)
static void __exit psb_exit(void)
late_initcall(psb_init);
module_exit(psb_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");

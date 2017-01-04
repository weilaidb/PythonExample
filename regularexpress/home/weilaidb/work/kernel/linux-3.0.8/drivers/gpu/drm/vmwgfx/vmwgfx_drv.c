#define VMWGFX_DRIVER_NAME "vmwgfx"
#define VMWGFX_DRIVER_DESC "Linux drm driver for VMware graphics devices"
#define VMWGFX_CHIP_SVGAII 0
#define VMW_FB_RESERVATION 0
#define DRM_IOCTL_VMW_GET_PARAM					\
DRM_IOWR(DRM_COMMAND_BASE + DRM_VMW_GET_PARAM,		\
struct drm_vmw_getparam_arg)
#define DRM_IOCTL_VMW_ALLOC_DMABUF				\
DRM_IOWR(DRM_COMMAND_BASE + DRM_VMW_ALLOC_DMABUF,	\
union drm_vmw_alloc_dmabuf_arg)
#define DRM_IOCTL_VMW_UNREF_DMABUF				\
DRM_IOW(DRM_COMMAND_BASE + DRM_VMW_UNREF_DMABUF,	\
struct drm_vmw_unref_dmabuf_arg)
#define DRM_IOCTL_VMW_CURSOR_BYPASS				\
DRM_IOW(DRM_COMMAND_BASE + DRM_VMW_CURSOR_BYPASS,	\
struct drm_vmw_cursor_bypass_arg)
#define DRM_IOCTL_VMW_CONTROL_STREAM				\
DRM_IOW(DRM_COMMAND_BASE + DRM_VMW_CONTROL_STREAM,	\
struct drm_vmw_control_stream_arg)
#define DRM_IOCTL_VMW_CLAIM_STREAM				\
DRM_IOR(DRM_COMMAND_BASE + DRM_VMW_CLAIM_STREAM,	\
struct drm_vmw_stream_arg)
#define DRM_IOCTL_VMW_UNREF_STREAM				\
DRM_IOW(DRM_COMMAND_BASE + DRM_VMW_UNREF_STREAM,	\
struct drm_vmw_stream_arg)
#define DRM_IOCTL_VMW_CREATE_CONTEXT				\
DRM_IOR(DRM_COMMAND_BASE + DRM_VMW_CREATE_CONTEXT,	\
struct drm_vmw_context_arg)
#define DRM_IOCTL_VMW_UNREF_CONTEXT				\
DRM_IOW(DRM_COMMAND_BASE + DRM_VMW_UNREF_CONTEXT,	\
struct drm_vmw_context_arg)
#define DRM_IOCTL_VMW_CREATE_SURFACE				\
DRM_IOWR(DRM_COMMAND_BASE + DRM_VMW_CREATE_SURFACE,	\
union drm_vmw_surface_create_arg)
#define DRM_IOCTL_VMW_UNREF_SURFACE				\
DRM_IOW(DRM_COMMAND_BASE + DRM_VMW_UNREF_SURFACE,	\
struct drm_vmw_surface_arg)
#define DRM_IOCTL_VMW_REF_SURFACE				\
DRM_IOWR(DRM_COMMAND_BASE + DRM_VMW_REF_SURFACE,	\
union drm_vmw_surface_reference_arg)
#define DRM_IOCTL_VMW_EXECBUF					\
DRM_IOW(DRM_COMMAND_BASE + DRM_VMW_EXECBUF,		\
struct drm_vmw_execbuf_arg)
#define DRM_IOCTL_VMW_FIFO_DEBUG				\
DRM_IOWR(DRM_COMMAND_BASE + DRM_VMW_FIFO_DEBUG,		\
struct drm_vmw_fifo_debug_arg)
#define DRM_IOCTL_VMW_FENCE_WAIT				\
DRM_IOWR(DRM_COMMAND_BASE + DRM_VMW_FENCE_WAIT,		\
struct drm_vmw_fence_wait_arg)
#define DRM_IOCTL_VMW_UPDATE_LAYOUT				\
DRM_IOWR(DRM_COMMAND_BASE + DRM_VMW_UPDATE_LAYOUT,	\
struct drm_vmw_update_layout_arg)
#define VMW_IOCTL_DEF(ioctl, func, flags) \
[DRM_IOCTL_NR(DRM_IOCTL_##ioctl) - DRM_COMMAND_BASE] =
static struct drm_ioctl_desc vmw_ioctls[] = ;
static struct pci_device_id vmw_pci_id_list[] = ;
static int enable_fbdev;
static int vmw_probe(struct pci_dev *, const struct pci_device_id *);
static void vmw_master_init(struct vmw_master *);
static int vmwgfx_pm_notifier(struct notifier_block *nb, unsigned long val,
void *ptr);
MODULE_PARM_DESC(enable_fbdev, "Enable vmwgfx fbdev");
module_param_named(enable_fbdev, enable_fbdev, int, 0600);
static void vmw_print_capabilities(uint32_t capabilities)
static int vmw_request_device(struct vmw_private *dev_priv)
static void vmw_release_device(struct vmw_private *dev_priv)
int vmw_3d_resource_inc(struct vmw_private *dev_priv)
void vmw_3d_resource_dec(struct vmw_private *dev_priv)
static int vmw_driver_load(struct drm_device *dev, unsigned long chipset)
static int vmw_driver_unload(struct drm_device *dev)
static void vmw_postclose(struct drm_device *dev,
struct drm_file *file_priv)
static int vmw_driver_open(struct drm_device *dev, struct drm_file *file_priv)
static long vmw_unlocked_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static int vmw_firstopen(struct drm_device *dev)
static void vmw_lastclose(struct drm_device *dev)
static void vmw_master_init(struct vmw_master *vmaster)
static int vmw_master_create(struct drm_device *dev,
struct drm_master *master)
static void vmw_master_destroy(struct drm_device *dev,
struct drm_master *master)
static int vmw_master_set(struct drm_device *dev,
struct drm_file *file_priv,
bool from_open)
static void vmw_master_drop(struct drm_device *dev,
struct drm_file *file_priv,
bool from_release)
static void vmw_remove(struct pci_dev *pdev)
static int vmwgfx_pm_notifier(struct notifier_block *nb, unsigned long val,
void *ptr)
static int vmw_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int vmw_pci_resume(struct pci_dev *pdev)
static int vmw_pm_suspend(struct device *kdev)
static int vmw_pm_resume(struct device *kdev)
static int vmw_pm_prepare(struct device *kdev)
static void vmw_pm_complete(struct device *kdev)
static const struct dev_pm_ops vmw_pm_ops = ;
static struct drm_driver driver = ;
static struct pci_driver vmw_pci_driver = ;
static int vmw_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static int __init vmwgfx_init(void)
static void __exit vmwgfx_exit(void)
module_init(vmwgfx_init);
module_exit(vmwgfx_exit);
MODULE_AUTHOR("VMware Inc. and others");
MODULE_DESCRIPTION("Standalone drm driver for the VMware SVGA device");
MODULE_LICENSE("GPL and additional rights");
MODULE_VERSION(__stringify(VMWGFX_DRIVER_MAJOR) "."
__stringify(VMWGFX_DRIVER_MINOR) "."
__stringify(VMWGFX_DRIVER_PATCHLEVEL) "."
"0");

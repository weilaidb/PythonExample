static int i915_modeset = -1;
module_param_named(modeset, i915_modeset, int, 0400);
unsigned int i915_fbpercrtc = 0;
module_param_named(fbpercrtc, i915_fbpercrtc, int, 0400);
int i915_panel_ignore_lid = 0;
module_param_named(panel_ignore_lid, i915_panel_ignore_lid, int, 0600);
unsigned int i915_powersave = 1;
module_param_named(powersave, i915_powersave, int, 0600);
unsigned int i915_semaphores = 0;
module_param_named(semaphores, i915_semaphores, int, 0600);
unsigned int i915_enable_rc6 = 0;
module_param_named(i915_enable_rc6, i915_enable_rc6, int, 0600);
unsigned int i915_enable_fbc = 0;
module_param_named(i915_enable_fbc, i915_enable_fbc, int, 0600);
unsigned int i915_lvds_downclock = 0;
module_param_named(lvds_downclock, i915_lvds_downclock, int, 0400);
unsigned int i915_panel_use_ssc = 1;
module_param_named(lvds_use_ssc, i915_panel_use_ssc, int, 0600);
int i915_vbt_sdvo_panel_type = -1;
module_param_named(vbt_sdvo_panel_type, i915_vbt_sdvo_panel_type, int, 0600);
static bool i915_try_reset = true;
module_param_named(reset, i915_try_reset, bool, 0600);
static struct drm_driver driver;
extern int intel_agp_enabled;
#define INTEL_VGA_DEVICE(id, info)
static const struct intel_device_info intel_i830_info = ;
static const struct intel_device_info intel_845g_info = ;
static const struct intel_device_info intel_i85x_info = ;
static const struct intel_device_info intel_i865g_info = ;
static const struct intel_device_info intel_i915g_info = ;
static const struct intel_device_info intel_i915gm_info = ;
static const struct intel_device_info intel_i945g_info = ;
static const struct intel_device_info intel_i945gm_info = ;
static const struct intel_device_info intel_i965g_info = ;
static const struct intel_device_info intel_i965gm_info = ;
static const struct intel_device_info intel_g33_info = ;
static const struct intel_device_info intel_g45_info = ;
static const struct intel_device_info intel_gm45_info = ;
static const struct intel_device_info intel_pineview_info = ;
static const struct intel_device_info intel_ironlake_d_info = ;
static const struct intel_device_info intel_ironlake_m_info = ;
static const struct intel_device_info intel_sandybridge_d_info = ;
static const struct intel_device_info intel_sandybridge_m_info = ;
static const struct intel_device_info intel_ivybridge_d_info = ;
static const struct intel_device_info intel_ivybridge_m_info = ;
static const struct pci_device_id pciidlist[] = ;
#if defined(CONFIG_DRM_I915_KMS)
MODULE_DEVICE_TABLE(pci, pciidlist);
#define INTEL_PCH_DEVICE_ID_MASK	0xff00
#define INTEL_PCH_IBX_DEVICE_ID_TYPE	0x3b00
#define INTEL_PCH_CPT_DEVICE_ID_TYPE	0x1c00
#define INTEL_PCH_PPT_DEVICE_ID_TYPE	0x1e00
void intel_detect_pch (struct drm_device *dev)
static void __gen6_gt_force_wake_get(struct drm_i915_private *dev_priv)
void gen6_gt_force_wake_get(struct drm_i915_private *dev_priv)
static void __gen6_gt_force_wake_put(struct drm_i915_private *dev_priv)
void gen6_gt_force_wake_put(struct drm_i915_private *dev_priv)
void __gen6_gt_wait_for_fifo(struct drm_i915_private *dev_priv)
static int i915_drm_freeze(struct drm_device *dev)
int i915_suspend(struct drm_device *dev, pm_message_t state)
static int i915_drm_thaw(struct drm_device *dev)
int i915_resume(struct drm_device *dev)
static int i8xx_do_reset(struct drm_device *dev, u8 flags)
static int i965_reset_complete(struct drm_device *dev)
static int i965_do_reset(struct drm_device *dev, u8 flags)
static int ironlake_do_reset(struct drm_device *dev, u8 flags)
static int gen6_do_reset(struct drm_device *dev, u8 flags)
int i915_reset(struct drm_device *dev, u8 flags)
static int __devinit
i915_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void
i915_pci_remove(struct pci_dev *pdev)
static int i915_pm_suspend(struct device *dev)
static int i915_pm_resume(struct device *dev)
static int i915_pm_freeze(struct device *dev)
static int i915_pm_thaw(struct device *dev)
static int i915_pm_poweroff(struct device *dev)
static const struct dev_pm_ops i915_pm_ops = ;
static struct vm_operations_struct i915_gem_vm_ops = ;
static struct drm_driver driver = ;
static struct pci_driver i915_pci_driver = ;
static int __init i915_init(void)
static void __exit i915_exit(void)
module_init(i915_init);
module_exit(i915_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");

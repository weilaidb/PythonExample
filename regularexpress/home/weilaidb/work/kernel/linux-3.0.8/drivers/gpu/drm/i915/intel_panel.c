#define PCI_LBPC 0xf4
void
intel_fixed_panel_mode(struct drm_display_mode *fixed_mode,
struct drm_display_mode *adjusted_mode)
void
intel_pch_panel_fitting(struct drm_device *dev,
int fitting_mode,
struct drm_display_mode *mode,
struct drm_display_mode *adjusted_mode)
static int is_backlight_combination_mode(struct drm_device *dev)
static u32 i915_read_blc_pwm_ctl(struct drm_i915_private *dev_priv)
u32 intel_panel_get_max_backlight(struct drm_device *dev)
u32 intel_panel_get_backlight(struct drm_device *dev)
static void intel_pch_panel_set_backlight(struct drm_device *dev, u32 level)
void intel_panel_set_backlight(struct drm_device *dev, u32 level)
void intel_panel_disable_backlight(struct drm_device *dev)
void intel_panel_enable_backlight(struct drm_device *dev)
void intel_panel_setup_backlight(struct drm_device *dev)
enum drm_connector_status
intel_panel_detect(struct drm_device *dev)

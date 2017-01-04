MODULE_AUTHOR("David Airlie, Jesse Barnes");
MODULE_DESCRIPTION("DRM KMS helper");
MODULE_LICENSE("GPL and additional rights");
static LIST_HEAD(kernel_fb_helper_list);
int drm_fb_helper_single_add_all_connectors(struct drm_fb_helper *fb_helper)
EXPORT_SYMBOL(drm_fb_helper_single_add_all_connectors);
static int drm_fb_helper_parse_command_line(struct drm_fb_helper *fb_helper)
static void drm_fb_helper_save_lut_atomic(struct drm_crtc *crtc, struct drm_fb_helper *helper)
static void drm_fb_helper_restore_lut_atomic(struct drm_crtc *crtc)
int drm_fb_helper_debug_enter(struct fb_info *info)
EXPORT_SYMBOL(drm_fb_helper_debug_enter);
static struct drm_framebuffer *drm_mode_config_fb(struct drm_crtc *crtc)
int drm_fb_helper_debug_leave(struct fb_info *info)
EXPORT_SYMBOL(drm_fb_helper_debug_leave);
bool drm_fb_helper_restore_fbdev_mode(struct drm_fb_helper *fb_helper)
EXPORT_SYMBOL(drm_fb_helper_restore_fbdev_mode);
bool drm_fb_helper_force_kernel_mode(void)
int drm_fb_helper_panic(struct notifier_block *n, unsigned long ununsed,
void *panic_str)
EXPORT_SYMBOL(drm_fb_helper_panic);
static struct notifier_block paniced = ;
void drm_fb_helper_restore(void)
EXPORT_SYMBOL(drm_fb_helper_restore);
static void drm_fb_helper_restore_work_fn(struct work_struct *ignored)
static DECLARE_WORK(drm_fb_helper_restore_work, drm_fb_helper_restore_work_fn);
static void drm_fb_helper_sysrq(int dummy1)
static struct sysrq_key_op sysrq_drm_fb_helper_restore_op = ;
static struct sysrq_key_op sysrq_drm_fb_helper_restore_op = ;
static void drm_fb_helper_on(struct fb_info *info)
static void drm_fb_helper_off(struct fb_info *info, int dpms_mode)
int drm_fb_helper_blank(int blank, struct fb_info *info)
EXPORT_SYMBOL(drm_fb_helper_blank);
static void drm_fb_helper_crtc_free(struct drm_fb_helper *helper)
int drm_fb_helper_init(struct drm_device *dev,
struct drm_fb_helper *fb_helper,
int crtc_count, int max_conn_count)
EXPORT_SYMBOL(drm_fb_helper_init);
void drm_fb_helper_fini(struct drm_fb_helper *fb_helper)
EXPORT_SYMBOL(drm_fb_helper_fini);
static int setcolreg(struct drm_crtc *crtc, u16 red, u16 green,
u16 blue, u16 regno, struct fb_info *info)
int drm_fb_helper_setcmap(struct fb_cmap *cmap, struct fb_info *info)
EXPORT_SYMBOL(drm_fb_helper_setcmap);
int drm_fb_helper_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
EXPORT_SYMBOL(drm_fb_helper_check_var);
int drm_fb_helper_set_par(struct fb_info *info)
EXPORT_SYMBOL(drm_fb_helper_set_par);
int drm_fb_helper_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
EXPORT_SYMBOL(drm_fb_helper_pan_display);
int drm_fb_helper_single_fb_probe(struct drm_fb_helper *fb_helper,
int preferred_bpp)
EXPORT_SYMBOL(drm_fb_helper_single_fb_probe);
void drm_fb_helper_fill_fix(struct fb_info *info, uint32_t pitch,
uint32_t depth)
EXPORT_SYMBOL(drm_fb_helper_fill_fix);
void drm_fb_helper_fill_var(struct fb_info *info, struct drm_fb_helper *fb_helper,
uint32_t fb_width, uint32_t fb_height)
EXPORT_SYMBOL(drm_fb_helper_fill_var);
static int drm_fb_helper_probe_connector_modes(struct drm_fb_helper *fb_helper,
uint32_t maxX,
uint32_t maxY)
static struct drm_display_mode *drm_has_preferred_mode(struct drm_fb_helper_connector *fb_connector, int width, int height)
static bool drm_has_cmdline_mode(struct drm_fb_helper_connector *fb_connector)
static struct drm_display_mode *drm_pick_cmdline_mode(struct drm_fb_helper_connector *fb_helper_conn,
int width, int height)
static bool drm_connector_enabled(struct drm_connector *connector, bool strict)
static void drm_enable_connectors(struct drm_fb_helper *fb_helper,
bool *enabled)
static bool drm_target_cloned(struct drm_fb_helper *fb_helper,
struct drm_display_mode **modes,
bool *enabled, int width, int height)
static bool drm_target_preferred(struct drm_fb_helper *fb_helper,
struct drm_display_mode **modes,
bool *enabled, int width, int height)
static int drm_pick_crtcs(struct drm_fb_helper *fb_helper,
struct drm_fb_helper_crtc **best_crtcs,
struct drm_display_mode **modes,
int n, int width, int height)
static void drm_setup_crtcs(struct drm_fb_helper *fb_helper)
bool drm_fb_helper_initial_config(struct drm_fb_helper *fb_helper, int bpp_sel)
EXPORT_SYMBOL(drm_fb_helper_initial_config);
int drm_fb_helper_hotplug_event(struct drm_fb_helper *fb_helper)
EXPORT_SYMBOL(drm_fb_helper_hotplug_event);
#if defined(CONFIG_FRAMEBUFFER_CONSOLE_MODULE) && !defined(CONFIG_EXPERT)
static int __init drm_fb_helper_modinit(void)
module_init(drm_fb_helper_modinit);

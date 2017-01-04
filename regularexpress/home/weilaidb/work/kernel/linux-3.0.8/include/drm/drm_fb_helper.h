#define DRM_FB_HELPER_H
struct drm_fb_helper;
struct drm_fb_helper_crtc ;
struct drm_fb_helper_surface_size ;
struct drm_fb_helper_funcs ;
struct drm_fb_helper_connector ;
struct drm_fb_helper ;
int drm_fb_helper_single_fb_probe(struct drm_fb_helper *helper,
int preferred_bpp);
int drm_fb_helper_init(struct drm_device *dev,
struct drm_fb_helper *helper, int crtc_count,
int max_conn);
void drm_fb_helper_fini(struct drm_fb_helper *helper);
int drm_fb_helper_blank(int blank, struct fb_info *info);
int drm_fb_helper_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
int drm_fb_helper_set_par(struct fb_info *info);
int drm_fb_helper_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
int drm_fb_helper_setcolreg(unsigned regno,
unsigned red,
unsigned green,
unsigned blue,
unsigned transp,
struct fb_info *info);
bool drm_fb_helper_restore_fbdev_mode(struct drm_fb_helper *fb_helper);
void drm_fb_helper_restore(void);
void drm_fb_helper_fill_var(struct fb_info *info, struct drm_fb_helper *fb_helper,
uint32_t fb_width, uint32_t fb_height);
void drm_fb_helper_fill_fix(struct fb_info *info, uint32_t pitch,
uint32_t depth);
int drm_fb_helper_setcmap(struct fb_cmap *cmap, struct fb_info *info);
int drm_fb_helper_hotplug_event(struct drm_fb_helper *fb_helper);
bool drm_fb_helper_initial_config(struct drm_fb_helper *fb_helper, int bpp_sel);
int drm_fb_helper_single_add_all_connectors(struct drm_fb_helper *fb_helper);
int drm_fb_helper_debug_enter(struct fb_info *info);
int drm_fb_helper_debug_leave(struct fb_info *info);

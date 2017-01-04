struct radeon_fbdev ;
static struct fb_ops radeonfb_ops = ;
int radeon_align_pitch(struct radeon_device *rdev, int width, int bpp, bool tiled)
static void radeonfb_destroy_pinned_object(struct drm_gem_object *gobj)
static int radeonfb_create_pinned_object(struct radeon_fbdev *rfbdev,
struct drm_mode_fb_cmd *mode_cmd,
struct drm_gem_object **gobj_p)
static int radeonfb_create(struct radeon_fbdev *rfbdev,
struct drm_fb_helper_surface_size *sizes)
static int radeon_fb_find_or_create_single(struct drm_fb_helper *helper,
struct drm_fb_helper_surface_size *sizes)
static char *mode_option;
int radeon_parse_options(char *options)
void radeon_fb_output_poll_changed(struct radeon_device *rdev)
static int radeon_fbdev_destroy(struct drm_device *dev, struct radeon_fbdev *rfbdev)
static struct drm_fb_helper_funcs radeon_fb_helper_funcs = ;
int radeon_fbdev_init(struct radeon_device *rdev)
void radeon_fbdev_fini(struct radeon_device *rdev)
void radeon_fbdev_set_suspend(struct radeon_device *rdev, int state)
int radeon_fbdev_total_size(struct radeon_device *rdev)
bool radeon_fbdev_robj_is_fb(struct radeon_device *rdev, struct radeon_bo *robj)

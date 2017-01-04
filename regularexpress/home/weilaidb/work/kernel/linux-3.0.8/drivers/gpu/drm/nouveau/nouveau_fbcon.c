static void
nouveau_fbcon_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void
nouveau_fbcon_copyarea(struct fb_info *info, const struct fb_copyarea *image)
static void
nouveau_fbcon_imageblit(struct fb_info *info, const struct fb_image *image)
static int
nouveau_fbcon_sync(struct fb_info *info)
static struct fb_ops nouveau_fbcon_ops = ;
static struct fb_ops nouveau_fbcon_sw_ops = ;
static void nouveau_fbcon_gamma_set(struct drm_crtc *crtc, u16 red, u16 green,
u16 blue, int regno)
static void nouveau_fbcon_gamma_get(struct drm_crtc *crtc, u16 *red, u16 *green,
u16 *blue, int regno)
static void
nouveau_fbcon_zfill(struct drm_device *dev, struct nouveau_fbdev *nfbdev)
static int
nouveau_fbcon_create(struct nouveau_fbdev *nfbdev,
struct drm_fb_helper_surface_size *sizes)
static int
nouveau_fbcon_find_or_create_single(struct drm_fb_helper *helper,
struct drm_fb_helper_surface_size *sizes)
void
nouveau_fbcon_output_poll_changed(struct drm_device *dev)
static int
nouveau_fbcon_destroy(struct drm_device *dev, struct nouveau_fbdev *nfbdev)
void nouveau_fbcon_gpu_lockup(struct fb_info *info)
static struct drm_fb_helper_funcs nouveau_fbcon_helper_funcs = ;
int nouveau_fbcon_init(struct drm_device *dev)
void nouveau_fbcon_fini(struct drm_device *dev)
void nouveau_fbcon_save_disable_accel(struct drm_device *dev)
void nouveau_fbcon_restore_accel(struct drm_device *dev)
void nouveau_fbcon_set_suspend(struct drm_device *dev, int state)
void nouveau_fbcon_zfill_all(struct drm_device *dev)

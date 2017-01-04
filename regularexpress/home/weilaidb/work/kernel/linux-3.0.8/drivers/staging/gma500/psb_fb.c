static void psb_user_framebuffer_destroy(struct drm_framebuffer *fb);
static int psb_user_framebuffer_create_handle(struct drm_framebuffer *fb,
struct drm_file *file_priv,
unsigned int *handle);
static const struct drm_framebuffer_funcs psb_fb_funcs = ;
#define CMAP_TOHW(_val, _width) ((((_val) << (_width)) + 0x7FFF - (_val)) >> 16)
void *psbfb_vdc_reg(struct drm_device *dev)
static int psbfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int psbfb_kms_off(struct drm_device *dev, int suspend)
int psbfb_kms_off_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
static int psbfb_kms_on(struct drm_device *dev, int resume)
int psbfb_kms_on_ioctl(struct drm_device *dev, void *data,
struct drm_file *file_priv)
void psbfb_suspend(struct drm_device *dev)
void psbfb_resume(struct drm_device *dev)
static int psbfb_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static void psbfb_vm_open(struct vm_area_struct *vma)
static void psbfb_vm_close(struct vm_area_struct *vma)
static struct vm_operations_struct psbfb_vm_ops = ;
static int psbfb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int psbfb_ioctl(struct fb_info *info, unsigned int cmd, unsigned long arg)
static struct fb_ops psbfb_ops = ;
static struct drm_framebuffer *psb_framebuffer_create
(struct drm_device *dev, struct drm_mode_fb_cmd *r,
struct gtt_range *gt)
static struct gtt_range *psbfb_alloc(struct drm_device *dev, int aligned_size)
static int psbfb_create(struct psb_fbdev *fbdev,
struct drm_fb_helper_surface_size *sizes)
static struct drm_framebuffer *psb_user_framebuffer_create
(struct drm_device *dev, struct drm_file *filp,
struct drm_mode_fb_cmd *cmd)
static void psbfb_gamma_set(struct drm_crtc *crtc, u16 red, u16 green,
u16 blue, int regno)
static void psbfb_gamma_get(struct drm_crtc *crtc, u16 *red,
u16 *green, u16 *blue, int regno)
static int psbfb_probe(struct drm_fb_helper *helper,
struct drm_fb_helper_surface_size *sizes)
struct drm_fb_helper_funcs psb_fb_helper_funcs = ;
int psb_fbdev_destroy(struct drm_device *dev, struct psb_fbdev *fbdev)
int psb_fbdev_init(struct drm_device *dev)
void psb_fbdev_fini(struct drm_device *dev)
static void psbfb_output_poll_changed(struct drm_device *dev)
int psbfb_remove(struct drm_device *dev, struct drm_framebuffer *fb)
static int psb_user_framebuffer_create_handle(struct drm_framebuffer *fb,
struct drm_file *file_priv,
unsigned int *handle)
static void psb_user_framebuffer_destroy(struct drm_framebuffer *fb)
static const struct drm_mode_config_funcs psb_mode_funcs = ;
static int psb_create_backlight_property(struct drm_device *dev)
static void psb_setup_outputs(struct drm_device *dev)
void psb_modeset_init(struct drm_device *dev)
void psb_modeset_cleanup(struct drm_device *dev)

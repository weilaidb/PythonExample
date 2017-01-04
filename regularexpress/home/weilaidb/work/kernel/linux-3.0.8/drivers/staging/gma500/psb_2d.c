void psb_spank(struct drm_psb_private *dev_priv)
static int psb_2d_wait_available(struct drm_psb_private *dev_priv,
unsigned size)
int psbfb_2d_submit(struct drm_psb_private *dev_priv, uint32_t *cmdbuf,
unsigned size)
static int psb_accel_2d_fillrect(struct drm_psb_private *dev_priv,
uint32_t dst_offset, uint32_t dst_stride,
uint32_t dst_format, uint16_t dst_x,
uint16_t dst_y, uint16_t size_x,
uint16_t size_y, uint32_t fill)
static void psbfb_fillrect_accel(struct fb_info *info,
const struct fb_fillrect *r)
void psbfb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static u32 psb_accel_2d_copy_direction(int xdir, int ydir)
static int psb_accel_2d_copy(struct drm_psb_private *dev_priv,
uint32_t src_offset, uint32_t src_stride,
uint32_t src_format, uint32_t dst_offset,
uint32_t dst_stride, uint32_t dst_format,
uint16_t src_x, uint16_t src_y,
uint16_t dst_x, uint16_t dst_y,
uint16_t size_x, uint16_t size_y)
static void psbfb_copyarea_accel(struct fb_info *info,
const struct fb_copyarea *a)
void psbfb_copyarea(struct fb_info *info,
const struct fb_copyarea *region)
void psbfb_imageblit(struct fb_info *info, const struct fb_image *image)
int psbfb_sync(struct fb_info *info)

#if defined(CONFIG_OF)
static void mb862xxfb_write_fifo(u32 count, u32 *data, struct fb_info *info)
static void mb86290fb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void mb86290fb_imageblit1(u32 *cmd, u16 step, u16 dx, u16 dy,
u16 width, u16 height, u32 fgcolor,
u32 bgcolor, const struct fb_image *image,
struct fb_info *info)
static void mb86290fb_imageblit8(u32 *cmd, u16 step, u16 dx, u16 dy,
u16 width, u16 height, u32 fgcolor,
u32 bgcolor, const struct fb_image *image,
struct fb_info *info)
static void mb86290fb_imageblit16(u32 *cmd, u16 step, u16 dx, u16 dy,
u16 width, u16 height, u32 fgcolor,
u32 bgcolor, const struct fb_image *image,
struct fb_info *info)
static void mb86290fb_imageblit(struct fb_info *info,
const struct fb_image *image)
static void mb86290fb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
void mb862xxfb_init_accel(struct fb_info *info, int xres)
EXPORT_SYMBOL(mb862xxfb_init_accel);
MODULE_LICENSE("GPL v2");

#define DEBUG
#define DPRINTK(fmt, args...) printk(KERN_DEBUG "%s: " fmt,__func__,## args)
#define DPRINTK(fmt, args...)
static const u32 cfb_tab8_be[] = ;
static const u32 cfb_tab8_le[] = ;
static const u32 cfb_tab16_be[] = ;
static const u32 cfb_tab16_le[] = ;
static const u32 cfb_tab32[] = ;
static void color_imageblit(const struct fb_image *image, struct fb_info *p,
void *dst1, u32 start_index, u32 pitch_index)
static void slow_imageblit(const struct fb_image *image, struct fb_info *p,
void *dst1, u32 fgcolor, u32 bgcolor,
u32 start_index, u32 pitch_index)
static void fast_imageblit(const struct fb_image *image, struct fb_info *p,
void *dst1, u32 fgcolor, u32 bgcolor)
void sys_imageblit(struct fb_info *p, const struct fb_image *image)
EXPORT_SYMBOL(sys_imageblit);
MODULE_AUTHOR("Antonino Daplas <adaplas@pol.net>");
MODULE_DESCRIPTION("1-bit/8-bit to 1-32 bit color expansion (sys-to-sys)");
MODULE_LICENSE("GPL");

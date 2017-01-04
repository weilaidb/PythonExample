#define DEBUG
#define DPRINTK(fmt, args...) printk(KERN_DEBUG "%s: " fmt,__func__,## args)
#define DPRINTK(fmt, args...)
static const u32 cfb_tab8_be[] = ;
static const u32 cfb_tab8_le[] = ;
static const u32 cfb_tab16_be[] = ;
static const u32 cfb_tab16_le[] = ;
static const u32 cfb_tab32[] = ;
#define FB_WRITEL fb_writel
#define FB_READL  fb_readl
static inline void color_imageblit(const struct fb_image *image,
struct fb_info *p, u8 __iomem *dst1,
u32 start_index,
u32 pitch_index)
static inline void slow_imageblit(const struct fb_image *image, struct fb_info *p,
u8 __iomem *dst1, u32 fgcolor,
u32 bgcolor,
u32 start_index,
u32 pitch_index)
static inline void fast_imageblit(const struct fb_image *image, struct fb_info *p,
u8 __iomem *dst1, u32 fgcolor,
u32 bgcolor)
void cfb_imageblit(struct fb_info *p, const struct fb_image *image)
EXPORT_SYMBOL(cfb_imageblit);
MODULE_AUTHOR("James Simmons <jsimmons@users.sf.net>");
MODULE_DESCRIPTION("Generic software accelerated imaging drawing");
MODULE_LICENSE("GPL");

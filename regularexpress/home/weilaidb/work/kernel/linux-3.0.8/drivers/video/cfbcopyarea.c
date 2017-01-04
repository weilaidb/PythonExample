#if BITS_PER_LONG == 32
#  define FB_WRITEL fb_writel
#  define FB_READL  fb_readl
#  define FB_WRITEL fb_writeq
#  define FB_READL  fb_readq
static void
bitcpy(struct fb_info *p, unsigned long __iomem *dst, int dst_idx,
const unsigned long __iomem *src, int src_idx, int bits,
unsigned n, u32 bswapmask)
static void
bitcpy_rev(struct fb_info *p, unsigned long __iomem *dst, int dst_idx,
const unsigned long __iomem *src, int src_idx, int bits,
unsigned n, u32 bswapmask)
void cfb_copyarea(struct fb_info *p, const struct fb_copyarea *area)
EXPORT_SYMBOL(cfb_copyarea);
MODULE_AUTHOR("James Simmons <jsimmons@users.sf.net>");
MODULE_DESCRIPTION("Generic software accelerated copyarea");
MODULE_LICENSE("GPL");

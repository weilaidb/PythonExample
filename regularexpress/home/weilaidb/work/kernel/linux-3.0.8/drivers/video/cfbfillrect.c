#if BITS_PER_LONG == 32
#  define FB_WRITEL fb_writel
#  define FB_READL  fb_readl
#  define FB_WRITEL fb_writeq
#  define FB_READL  fb_readq
static void
bitfill_aligned(struct fb_info *p, unsigned long __iomem *dst, int dst_idx,
unsigned long pat, unsigned n, int bits, u32 bswapmask)
static void
bitfill_unaligned(struct fb_info *p, unsigned long __iomem *dst, int dst_idx,
unsigned long pat, int left, int right, unsigned n, int bits)
static void
bitfill_aligned_rev(struct fb_info *p, unsigned long __iomem *dst,
int dst_idx, unsigned long pat, unsigned n, int bits,
u32 bswapmask)
static void
bitfill_unaligned_rev(struct fb_info *p, unsigned long __iomem *dst,
int dst_idx, unsigned long pat, int left, int right,
unsigned n, int bits)
void cfb_fillrect(struct fb_info *p, const struct fb_fillrect *rect)
EXPORT_SYMBOL(cfb_fillrect);
MODULE_AUTHOR("James Simmons <jsimmons@users.sf.net>");
MODULE_DESCRIPTION("Generic software accelerated fill rectangle");
MODULE_LICENSE("GPL");

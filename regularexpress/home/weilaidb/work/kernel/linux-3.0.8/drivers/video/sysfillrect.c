static void
bitfill_aligned(struct fb_info *p, unsigned long *dst, int dst_idx,
unsigned long pat, unsigned n, int bits)
static void
bitfill_unaligned(struct fb_info *p, unsigned long *dst, int dst_idx,
unsigned long pat, int left, int right, unsigned n, int bits)
static void
bitfill_aligned_rev(struct fb_info *p, unsigned long *dst, int dst_idx,
unsigned long pat, unsigned n, int bits)
static void
bitfill_unaligned_rev(struct fb_info *p, unsigned long *dst, int dst_idx,
unsigned long pat, int left, int right, unsigned n,
int bits)
void sys_fillrect(struct fb_info *p, const struct fb_fillrect *rect)
EXPORT_SYMBOL(sys_fillrect);
MODULE_AUTHOR("Antonino Daplas <adaplas@pol.net>");
MODULE_DESCRIPTION("Generic fill rectangle (sys-to-sys)");
MODULE_LICENSE("GPL");

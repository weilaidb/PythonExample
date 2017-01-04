static void
bitcpy(struct fb_info *p, unsigned long *dst, int dst_idx,
const unsigned long *src, int src_idx, int bits, unsigned n)
static void
bitcpy_rev(struct fb_info *p, unsigned long *dst, int dst_idx,
const unsigned long *src, int src_idx, int bits, unsigned n)
void sys_copyarea(struct fb_info *p, const struct fb_copyarea *area)
EXPORT_SYMBOL(sys_copyarea);
MODULE_AUTHOR("Antonino Daplas <adaplas@pol.net>");
MODULE_DESCRIPTION("Generic copyarea (sys-to-sys)");
MODULE_LICENSE("GPL");

void atafb_mfb_copyarea(struct fb_info *info, u_long next_line,
int sy, int sx, int dy, int dx,
int height, int width)
void atafb_mfb_fillrect(struct fb_info *info, u_long next_line, u32 color,
int sy, int sx, int height, int width)
void atafb_mfb_linefill(struct fb_info *info, u_long next_line,
int dy, int dx, u32 width,
const u8 *data, u32 bgcolor, u32 fgcolor)
MODULE_LICENSE("GPL");
int init_module(void)
void cleanup_module(void)
EXPORT_SYMBOL(atafb_mfb_copyarea);
EXPORT_SYMBOL(atafb_mfb_fillrect);
EXPORT_SYMBOL(atafb_mfb_linefill);

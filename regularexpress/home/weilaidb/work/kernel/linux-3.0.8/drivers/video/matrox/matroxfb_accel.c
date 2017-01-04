#define curr_ydstorg(x)	((x)->curr.ydstorg.pixels)
#define mga_ydstlen(y,l) mga_outl(M_YDSTLEN | M_EXEC, ((y) << 16) | (l))
static inline void matrox_cfb4_pal(u_int32_t* pal)
static inline void matrox_cfb8_pal(u_int32_t* pal)
static void matroxfb_copyarea(struct fb_info* info, const struct fb_copyarea* area);
static void matroxfb_fillrect(struct fb_info* info, const struct fb_fillrect* rect);
static void matroxfb_imageblit(struct fb_info* info, const struct fb_image* image);
static void matroxfb_cfb4_fillrect(struct fb_info* info, const struct fb_fillrect* rect);
static void matroxfb_cfb4_copyarea(struct fb_info* info, const struct fb_copyarea* area);
void matrox_cfbX_init(struct matrox_fb_info *minfo)
EXPORT_SYMBOL(matrox_cfbX_init);
static void matrox_accel_bmove(struct matrox_fb_info *minfo, int vxres, int sy,
int sx, int dy, int dx, int height, int width)
static void matrox_accel_bmove_lin(struct matrox_fb_info *minfo, int vxres,
int sy, int sx, int dy, int dx, int height,
int width)
static void matroxfb_cfb4_copyarea(struct fb_info* info, const struct fb_copyarea* area)
static void matroxfb_copyarea(struct fb_info* info, const struct fb_copyarea* area)
static void matroxfb_accel_clear(struct matrox_fb_info *minfo, u_int32_t color,
int sy, int sx, int height, int width)
static void matroxfb_fillrect(struct fb_info* info, const struct fb_fillrect* rect)
static void matroxfb_cfb4_clear(struct matrox_fb_info *minfo, u_int32_t bgx,
int sy, int sx, int height, int width)
static void matroxfb_cfb4_fillrect(struct fb_info* info, const struct fb_fillrect* rect)
static void matroxfb_1bpp_imageblit(struct matrox_fb_info *minfo, u_int32_t fgx,
u_int32_t bgx, const u_int8_t *chardata,
int width, int height, int yy, int xx)
static void matroxfb_imageblit(struct fb_info* info, const struct fb_image* image)
MODULE_LICENSE("GPL");

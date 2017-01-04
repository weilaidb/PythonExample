static void cw_update_attr(u8 *dst, u8 *src, int attribute,
struct vc_data *vc)
static void cw_bmove(struct vc_data *vc, struct fb_info *info, int sy,
int sx, int dy, int dx, int height, int width)
static void cw_clear(struct vc_data *vc, struct fb_info *info, int sy,
int sx, int height, int width)
static inline void cw_putcs_aligned(struct vc_data *vc, struct fb_info *info,
const u16 *s, u32 attr, u32 cnt,
u32 d_pitch, u32 s_pitch, u32 cellsize,
struct fb_image *image, u8 *buf, u8 *dst)
static void cw_putcs(struct vc_data *vc, struct fb_info *info,
const unsigned short *s, int count, int yy, int xx,
int fg, int bg)
static void cw_clear_margins(struct vc_data *vc, struct fb_info *info,
int bottom_only)
static void cw_cursor(struct vc_data *vc, struct fb_info *info, int mode,
int softback_lines, int fg, int bg)
static int cw_update_start(struct fb_info *info)
void fbcon_rotate_cw(struct fbcon_ops *ops)
EXPORT_SYMBOL(fbcon_rotate_cw);
MODULE_AUTHOR("Antonino Daplas <adaplas@pol.net>");
MODULE_DESCRIPTION("Console Rotation (90 degrees) Support");
MODULE_LICENSE("GPL");

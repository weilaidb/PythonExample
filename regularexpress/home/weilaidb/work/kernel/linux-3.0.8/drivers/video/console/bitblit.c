static void update_attr(u8 *dst, u8 *src, int attribute,
struct vc_data *vc)
static void bit_bmove(struct vc_data *vc, struct fb_info *info, int sy,
int sx, int dy, int dx, int height, int width)
static void bit_clear(struct vc_data *vc, struct fb_info *info, int sy,
int sx, int height, int width)
static inline void bit_putcs_aligned(struct vc_data *vc, struct fb_info *info,
const u16 *s, u32 attr, u32 cnt,
u32 d_pitch, u32 s_pitch, u32 cellsize,
struct fb_image *image, u8 *buf, u8 *dst)
static inline void bit_putcs_unaligned(struct vc_data *vc,
struct fb_info *info, const u16 *s,
u32 attr, u32 cnt, u32 d_pitch,
u32 s_pitch, u32 cellsize,
struct fb_image *image, u8 *buf,
u8 *dst)
static void bit_putcs(struct vc_data *vc, struct fb_info *info,
const unsigned short *s, int count, int yy, int xx,
int fg, int bg)
static void bit_clear_margins(struct vc_data *vc, struct fb_info *info,
int bottom_only)
static void bit_cursor(struct vc_data *vc, struct fb_info *info, int mode,
int softback_lines, int fg, int bg)
static int bit_update_start(struct fb_info *info)
void fbcon_set_bitops(struct fbcon_ops *ops)
EXPORT_SYMBOL(fbcon_set_bitops);
MODULE_AUTHOR("Antonino Daplas <adaplas@pol.net>");
MODULE_DESCRIPTION("Bit Blitting Operation");
MODULE_LICENSE("GPL");

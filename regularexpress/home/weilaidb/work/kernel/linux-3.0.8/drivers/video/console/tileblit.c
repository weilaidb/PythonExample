static void tile_bmove(struct vc_data *vc, struct fb_info *info, int sy,
int sx, int dy, int dx, int height, int width)
static void tile_clear(struct vc_data *vc, struct fb_info *info, int sy,
int sx, int height, int width)
static void tile_putcs(struct vc_data *vc, struct fb_info *info,
const unsigned short *s, int count, int yy, int xx,
int fg, int bg)
static void tile_clear_margins(struct vc_data *vc, struct fb_info *info,
int bottom_only)
static void tile_cursor(struct vc_data *vc, struct fb_info *info, int mode,
int softback_lines, int fg, int bg)
static int tile_update_start(struct fb_info *info)
void fbcon_set_tileops(struct vc_data *vc, struct fb_info *info)
EXPORT_SYMBOL(fbcon_set_tileops);
MODULE_AUTHOR("Antonino Daplas <adaplas@pol.net>");
MODULE_DESCRIPTION("Tile Blitting Operation");
MODULE_LICENSE("GPL");

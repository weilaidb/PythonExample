static u16 red2[] __read_mostly = ;
static u16 green2[] __read_mostly = ;
static u16 blue2[] __read_mostly = ;
static u16 red4[] __read_mostly = ;
static u16 green4[] __read_mostly = ;
static u16 blue4[] __read_mostly = ;
static u16 red8[] __read_mostly = ;
static u16 green8[] __read_mostly = ;
static u16 blue8[] __read_mostly = ;
static u16 red16[] __read_mostly = ;
static u16 green16[] __read_mostly = ;
static u16 blue16[] __read_mostly = ;
static const struct fb_cmap default_2_colors = ;
static const struct fb_cmap default_8_colors = ;
static const struct fb_cmap default_4_colors = ;
static const struct fb_cmap default_16_colors = ;
int fb_alloc_cmap_gfp(struct fb_cmap *cmap, int len, int transp, gfp_t flags)
int fb_alloc_cmap(struct fb_cmap *cmap, int len, int transp)
void fb_dealloc_cmap(struct fb_cmap *cmap)
int fb_copy_cmap(const struct fb_cmap *from, struct fb_cmap *to)
int fb_cmap_to_user(const struct fb_cmap *from, struct fb_cmap_user *to)
int fb_set_cmap(struct fb_cmap *cmap, struct fb_info *info)
int fb_set_user_cmap(struct fb_cmap_user *cmap, struct fb_info *info)
const struct fb_cmap *fb_default_cmap(int len)
void fb_invert_cmaps(void)
EXPORT_SYMBOL(fb_alloc_cmap);
EXPORT_SYMBOL(fb_dealloc_cmap);
EXPORT_SYMBOL(fb_copy_cmap);
EXPORT_SYMBOL(fb_set_cmap);
EXPORT_SYMBOL(fb_default_cmap);
EXPORT_SYMBOL(fb_invert_cmaps);

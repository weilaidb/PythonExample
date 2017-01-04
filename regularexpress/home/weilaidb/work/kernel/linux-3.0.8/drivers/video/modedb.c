#undef DEBUG
#define name_matches(v, s, l) \
((v).name && !strncmp((s), (v).name, (l)) && strlen((v).name) == (l))
#define res_matches(v, x, y) \
((v).xres == (x) && (v).yres == (y))
#define DPRINTK(fmt, args...)	printk("modedb %s: " fmt, __func__ , ## args)
#define DPRINTK(fmt, args...)
const char *fb_mode_option;
EXPORT_SYMBOL_GPL(fb_mode_option);
static const struct fb_videomode modedb[] = ;
const struct fb_videomode cea_modes[64] = ;
const struct fb_videomode vesa_modes[] = ;
EXPORT_SYMBOL(vesa_modes);
static int fb_try_mode(struct fb_var_screeninfo *var, struct fb_info *info,
const struct fb_videomode *mode, unsigned int bpp)
int fb_find_mode(struct fb_var_screeninfo *var,
struct fb_info *info, const char *mode_option,
const struct fb_videomode *db, unsigned int dbsize,
const struct fb_videomode *default_mode,
unsigned int default_bpp)
void fb_var_to_videomode(struct fb_videomode *mode,
const struct fb_var_screeninfo *var)
void fb_videomode_to_var(struct fb_var_screeninfo *var,
const struct fb_videomode *mode)
int fb_mode_is_equal(const struct fb_videomode *mode1,
const struct fb_videomode *mode2)
const struct fb_videomode *fb_find_best_mode(const struct fb_var_screeninfo *var,
struct list_head *head)
const struct fb_videomode *fb_find_nearest_mode(const struct fb_videomode *mode,
struct list_head *head)
const struct fb_videomode *fb_match_mode(const struct fb_var_screeninfo *var,
struct list_head *head)
int fb_add_videomode(const struct fb_videomode *mode, struct list_head *head)
void fb_delete_videomode(const struct fb_videomode *mode,
struct list_head *head)
void fb_destroy_modelist(struct list_head *head)
EXPORT_SYMBOL_GPL(fb_destroy_modelist);
void fb_videomode_to_modelist(const struct fb_videomode *modedb, int num,
struct list_head *head)
const struct fb_videomode *fb_find_best_display(const struct fb_monspecs *specs,
struct list_head *head)
EXPORT_SYMBOL(fb_find_best_display);
EXPORT_SYMBOL(fb_videomode_to_var);
EXPORT_SYMBOL(fb_var_to_videomode);
EXPORT_SYMBOL(fb_mode_is_equal);
EXPORT_SYMBOL(fb_add_videomode);
EXPORT_SYMBOL(fb_match_mode);
EXPORT_SYMBOL(fb_find_best_mode);
EXPORT_SYMBOL(fb_find_nearest_mode);
EXPORT_SYMBOL(fb_videomode_to_modelist);
EXPORT_SYMBOL(fb_find_mode);
EXPORT_SYMBOL(fb_find_mode_cvt);

struct wm_info ;
static struct wm_info i810_wm_8_100[] = ;
static struct wm_info i810_wm_16_100[] = ;
static struct wm_info i810_wm_24_100[] = ;
static struct wm_info i810_wm_8_133[] = ;
static struct wm_info i810_wm_16_133[] = ;
static struct wm_info i810_wm_24_133[] = ;
void round_off_xres(u32 *xres)
void round_off_yres(u32 *xres, u32 *yres)
void i810fb_encode_registers(const struct fb_var_screeninfo *var,
struct i810fb_par *par, u32 xres, u32 yres)
void i810fb_fill_var_timings(struct fb_var_screeninfo *var)
u32 i810_get_watermark(const struct fb_var_screeninfo *var,
struct i810fb_par *par)

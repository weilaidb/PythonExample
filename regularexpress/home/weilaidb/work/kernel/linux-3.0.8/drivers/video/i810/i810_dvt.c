struct mode_registers std_modes[] = ;
void round_off_xres(u32 *xres)
inline void round_off_yres(u32 *xres, u32 *yres)
static int i810fb_find_best_mode(u32 xres, u32 yres, u32 pixclock)
void i810fb_encode_registers(const struct fb_var_screeninfo *var,
struct i810fb_par *par, u32 xres, u32 yres)
void i810fb_fill_var_timings(struct fb_var_screeninfo *var)
u32 i810_get_watermark(struct fb_var_screeninfo *var,
struct i810fb_par *par)

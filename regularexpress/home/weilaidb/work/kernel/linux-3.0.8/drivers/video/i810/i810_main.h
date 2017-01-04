#define __I810_MAIN_H__
extern void round_off_xres         (u32 *xres);
extern void round_off_yres         (u32 *xres, u32 *yres);
extern u32 i810_get_watermark      (const struct fb_var_screeninfo *var,
struct i810fb_par *par);
extern void i810fb_encode_registers(const struct fb_var_screeninfo *var,
struct i810fb_par *par, u32 xres, u32 yres);
extern void i810fb_fill_var_timings(struct fb_var_screeninfo *var);
extern void i810fb_fillrect (struct fb_info *p,
const struct fb_fillrect *rect);
extern void i810fb_copyarea (struct fb_info *p,
const struct fb_copyarea *region);
extern void i810fb_imageblit(struct fb_info *p, const struct fb_image *image);
extern int  i810fb_sync     (struct fb_info *p);
extern void i810fb_init_ringbuffer(struct fb_info *info);
extern void i810fb_load_front     (u32 offset, struct fb_info *info);
extern int i810_probe_i2c_connector(struct fb_info *info, u8 **out_edid,
int conn);
extern void i810_create_i2c_busses(struct i810fb_par *par);
extern void i810_delete_i2c_busses(struct i810fb_par *par);
static inline int i810_probe_i2c_connector(struct fb_info *info, u8 **out_edid,
int conn)
static inline void i810_create_i2c_busses(struct i810fb_par *par)
static inline void i810_delete_i2c_busses(struct i810fb_par *par)
static inline void flush_cache(void)
#define flush_cache() do  while(0)
static inline void __devinit set_mtrr(struct i810fb_par *par)
static inline void unset_mtrr(struct i810fb_par *par)
#define set_mtrr(x) printk("set_mtrr: MTRR is disabled in the kernel\n")
#define unset_mtrr(x) do  while (0)
#define IS_DVT (0)
#define IS_DVT (1)

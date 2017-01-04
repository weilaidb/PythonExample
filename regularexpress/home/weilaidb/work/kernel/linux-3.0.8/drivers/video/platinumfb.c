#undef DEBUG
static int default_vmode = VMODE_NVRAM;
static int default_cmode = CMODE_NVRAM;
struct fb_info_platinum ;
static int platinumfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int platinumfb_blank(int blank_mode, struct fb_info *info);
static int platinumfb_set_par (struct fb_info *info);
static int platinumfb_check_var (struct fb_var_screeninfo *var, struct fb_info *info);
static inline int platinum_vram_reqd(int video_mode, int color_mode);
static int read_platinum_sense(struct fb_info_platinum *pinfo);
static void set_platinum_clock(struct fb_info_platinum *pinfo);
static void platinum_set_hardware(struct fb_info_platinum *pinfo);
static int platinum_var_to_par(struct fb_var_screeninfo *var,
struct fb_info_platinum *pinfo,
int check_only);
static struct fb_ops platinumfb_ops = ;
static int platinumfb_check_var (struct fb_var_screeninfo *var, struct fb_info *info)
static int platinumfb_set_par (struct fb_info *info)
static int platinumfb_blank(int blank,  struct fb_info *fb)
static int platinumfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static inline int platinum_vram_reqd(int video_mode, int color_mode)
#define STORE_D2(a, d)
static void set_platinum_clock(struct fb_info_platinum *pinfo)
static void platinum_set_hardware(struct fb_info_platinum *pinfo)
static void __devinit platinum_init_info(struct fb_info *info, struct fb_info_platinum *pinfo)
static int __devinit platinum_init_fb(struct fb_info *info)
static int read_platinum_sense(struct fb_info_platinum *info)
static int platinum_var_to_par(struct fb_var_screeninfo *var,
struct fb_info_platinum *pinfo,
int check_only)
static int __init platinumfb_setup(char *options)
#define invalidate_cache(addr) \
asm volatile("eieio; dcbf 0,%1" \
: "=m" (*(addr)) : "r" (addr) : "memory");
#define invalidate_cache(addr)
static int __devinit platinumfb_probe(struct platform_device* odev)
static int __devexit platinumfb_remove(struct platform_device* odev)
static struct of_device_id platinumfb_match[] =
;
static struct platform_driver platinum_driver =
;
static int __init platinumfb_init(void)
static void __exit platinumfb_exit(void)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("framebuffer driver for Apple Platinum video");
module_init(platinumfb_init);
module_exit(platinumfb_exit);

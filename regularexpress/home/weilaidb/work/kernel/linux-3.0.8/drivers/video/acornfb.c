#undef FBCON_HAS_CFB16
#undef FBCON_HAS_CFB32
#define DEFAULT_XRES	640
#define DEFAULT_YRES	480
#define DEFAULT_BPP	4
#undef DEBUG_MODE_SELECTION
#define NR_MONTYPES	6
static struct fb_monspecs monspecs[NR_MONTYPES] __devinitdata = ;
static struct fb_info fb_info;
static struct acornfb_par current_par;
static struct vidc_timing current_vidc;
extern unsigned int vram_size;
#define MAX_SIZE	480*1024
struct pixclock ;
static struct pixclock arc_clocks[] = ;
static struct pixclock *
acornfb_valid_pixrate(struct fb_var_screeninfo *var)
static void
acornfb_set_timing(struct fb_var_screeninfo *var)
static int
acornfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
#define MAX_SIZE	2*1024*1024
static void acornfb_set_timing(struct fb_info *info)
static int
acornfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static int
acornfb_adjust_timing(struct fb_info *info, struct fb_var_screeninfo *var, u_int fontht)
static int
acornfb_validate_timing(struct fb_var_screeninfo *var,
struct fb_monspecs *monspecs)
static inline void
acornfb_update_dma(struct fb_info *info, struct fb_var_screeninfo *var)
static int
acornfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int acornfb_set_par(struct fb_info *info)
static int
acornfb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static struct fb_ops acornfb_ops = ;
static struct fb_videomode modedb[] __devinitdata = ;
static struct fb_videomode acornfb_default_mode __devinitdata = ;
static void __devinit acornfb_init_fbinfo(void)
static void __devinit acornfb_parse_mon(char *opt)
static void __devinit acornfb_parse_montype(char *opt)
static void __devinit acornfb_parse_dram(char *opt)
static struct options  opt_table[] __devinitdata = ;
static int __devinit acornfb_setup(char *options)
static int __devinit acornfb_detect_monitortype(void)
static inline void
free_unused_pages(unsigned int virtual_start, unsigned int virtual_end)
static int __devinit acornfb_probe(struct platform_device *dev)
static struct platform_driver acornfb_driver = ;
static int __init acornfb_init(void)
module_init(acornfb_init);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("VIDC 1/1a/20 framebuffer driver");
MODULE_LICENSE("GPL");

#define	WIDTH 640
static struct fb_var_screeninfo hitfb_var __devinitdata = ;
static struct fb_fix_screeninfo hitfb_fix __devinitdata = ;
static inline void hitfb_accel_wait(void)
static inline void hitfb_accel_start(int truecolor)
static inline void hitfb_accel_set_dest(int truecolor, u16 dx, u16 dy,
u16 width, u16 height)
static inline void hitfb_accel_bitblt(int truecolor, u16 sx, u16 sy, u16 dx,
u16 dy, u16 width, u16 height, u16 rop,
u32 mask_addr)
static void hitfb_fillrect(struct fb_info *p, const struct fb_fillrect *rect)
static void hitfb_copyarea(struct fb_info *p, const struct fb_copyarea *area)
static int hitfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
int hitfb_blank(int blank_mode, struct fb_info *info)
static int hitfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *info)
static int hitfb_sync(struct fb_info *info)
static int hitfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int hitfb_set_par(struct fb_info *info)
static struct fb_ops hitfb_ops = ;
static int __devinit hitfb_probe(struct platform_device *dev)
static int __devexit hitfb_remove(struct platform_device *dev)
static int hitfb_suspend(struct device *dev)
static int hitfb_resume(struct device *dev)
static const struct dev_pm_ops hitfb_dev_pm_ops = ;
static struct platform_driver hitfb_driver = ;
static struct platform_device hitfb_device = ;
static int __init hitfb_init(void)
static void __exit hitfb_exit(void)
module_init(hitfb_init);
module_exit(hitfb_exit);
MODULE_LICENSE("GPL");

#define UNIFB_REGS_NUM		10
#define UNIFB_MEMSIZE		(SZ_4M)
static const struct fb_videomode unifb_modes[] = ;
static struct fb_var_screeninfo unifb_default = ;
static struct fb_fix_screeninfo unifb_fix = ;
static void unifb_sync(struct fb_info *info)
static void unifb_prim_fillrect(struct fb_info *info,
const struct fb_fillrect *region)
static void unifb_fillrect(struct fb_info *info,
const struct fb_fillrect *region)
static void unifb_prim_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void unifb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void unifb_imageblit(struct fb_info *info, const struct fb_image *image)
static u_long get_line_length(int xres_virtual, int bpp)
static int unifb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int unifb_set_par(struct fb_info *info)
static int unifb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int unifb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
int unifb_mmap(struct fb_info *info,
struct vm_area_struct *vma)
static struct fb_ops unifb_ops = ;
static int unifb_probe(struct platform_device *dev)
static int unifb_remove(struct platform_device *dev)
static int unifb_resume(struct platform_device *dev)
static int unifb_suspend(struct platform_device *dev, pm_message_t mesg)
#define	unifb_resume	NULL
#define unifb_suspend	NULL
static struct platform_driver unifb_driver = ;
static int __init unifb_init(void)
module_init(unifb_init);
static void __exit unifb_exit(void)
module_exit(unifb_exit);
MODULE_LICENSE("GPL v2");

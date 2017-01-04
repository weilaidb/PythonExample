static u32 colreg[16];
static struct fb_var_screeninfo rgbfb_var __initdata = ;
static struct fb_fix_screeninfo rgbfb_fix __initdata = ;
static int channel_owned;
static int no_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int rgbfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int rgbfb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static struct fb_ops rgbfb_ops = ;
static int rgbfb_remove(struct platform_device *pdev)
static int __devinit rgbfb_probe(struct platform_device *pdev)
static struct platform_driver rgbfb_driver = ;
static int __init rgbfb_init(void)
static void __exit rgbfb_exit(void)
module_init(rgbfb_init);
module_exit(rgbfb_exit);
MODULE_LICENSE("GPL");

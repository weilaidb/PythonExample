#define VIDEOMEMSIZE	(1*1024*1024)
static void *videomemory;
static u_long videomemorysize = VIDEOMEMSIZE;
module_param(videomemorysize, ulong, 0);
static void *rvmalloc(unsigned long size)
static void rvfree(void *mem, unsigned long size)
static struct fb_var_screeninfo vfb_default __devinitdata = ;
static struct fb_fix_screeninfo vfb_fix __devinitdata = ;
static int vfb_enable __initdata = 0;
module_param(vfb_enable, bool, 0);
static int vfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int vfb_set_par(struct fb_info *info);
static int vfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info);
static int vfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static int vfb_mmap(struct fb_info *info,
struct vm_area_struct *vma);
static struct fb_ops vfb_ops = ;
static u_long get_line_length(int xres_virtual, int bpp)
static int vfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int vfb_set_par(struct fb_info *info)
static int vfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int vfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int vfb_mmap(struct fb_info *info,
struct vm_area_struct *vma)
static int __init vfb_setup(char *options)
static int __devinit vfb_probe(struct platform_device *dev)
static int vfb_remove(struct platform_device *dev)
static struct platform_driver vfb_driver = ;
static struct platform_device *vfb_device;
static int __init vfb_init(void)
module_init(vfb_init);
static void __exit vfb_exit(void)
module_exit(vfb_exit);
MODULE_LICENSE("GPL");

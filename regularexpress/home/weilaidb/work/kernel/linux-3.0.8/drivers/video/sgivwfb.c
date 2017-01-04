#define INCLUDE_TIMING_TABLE_DATA
#define DBE_REG_BASE par->regs
struct sgivw_par ;
#define FLATPANEL_SGI_1600SW	5
static int ypan = 0;
static int ywrap = 0;
static int flatpanel_id = -1;
static struct fb_fix_screeninfo sgivwfb_fix __devinitdata = ;
static struct fb_var_screeninfo sgivwfb_var __devinitdata = ;
static struct fb_var_screeninfo sgivwfb_var1600sw __devinitdata = ;
int sgivwfb_init(void);
static int sgivwfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info);
static int sgivwfb_set_par(struct fb_info *info);
static int sgivwfb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp,
struct fb_info *info);
static int sgivwfb_mmap(struct fb_info *info,
struct vm_area_struct *vma);
static struct fb_ops sgivwfb_ops = ;
static unsigned long bytes_per_pixel(int bpp)
static unsigned long get_line_length(int xres_virtual, int bpp)
static void dbe_TurnOffDma(struct sgivw_par *par)
static int sgivwfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void sgivwfb_setup_flatpanel(struct sgivw_par *par, struct dbe_timing_info *currentTiming)
static int sgivwfb_set_par(struct fb_info *info)
static int sgivwfb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp,
struct fb_info *info)
static int sgivwfb_mmap(struct fb_info *info,
struct vm_area_struct *vma)
int __init sgivwfb_setup(char *options)
static int __devinit sgivwfb_probe(struct platform_device *dev)
static int __devexit sgivwfb_remove(struct platform_device *dev)
static struct platform_driver sgivwfb_driver = ;
static struct platform_device *sgivwfb_device;
int __init sgivwfb_init(void)
module_init(sgivwfb_init);
MODULE_LICENSE("GPL");
static void __exit sgivwfb_exit(void)
module_exit(sgivwfb_exit);

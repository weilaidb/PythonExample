static unsigned long virt_base_2700;
#define write_reg(val, reg) do  while(0)
#define write_reg_dly(val, reg) do  while(0)
#define MIN_XRES	16
#define MIN_YRES	16
#define MAX_XRES	2048
#define MAX_YRES	2048
#define MAX_PALETTES	16
#define MEMORY_OFFSET	0x60000
struct mbxfb_info ;
static struct fb_var_screeninfo mbxfb_default __devinitdata = ;
static struct fb_fix_screeninfo mbxfb_fix  __devinitdata = ;
struct pixclock_div ;
static unsigned int mbxfb_get_pixclock(unsigned int pixclock_ps,
struct pixclock_div *div)
static int mbxfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static int mbxfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int mbxfb_set_par(struct fb_info *info)
static int mbxfb_blank(int blank, struct fb_info *info)
static int mbxfb_setupOverlay(struct mbxfb_overlaySetup *set)
static int mbxfb_ioctl_planeorder(struct mbxfb_planeorder *porder)
static int mbxfb_ioctl_alphactl(struct mbxfb_alphaCtl *alpha)
static int mbxfb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static struct fb_ops mbxfb_ops = ;
static void __devinit setup_memc(struct fb_info *fbi)
static void enable_clocks(struct fb_info *fbi)
static void __devinit setup_graphics(struct fb_info *fbi)
static void __devinit setup_display(struct fb_info *fbi)
static void __devinit enable_controller(struct fb_info *fbi)
static int mbxfb_suspend(struct platform_device *dev, pm_message_t state)
static int mbxfb_resume(struct platform_device *dev)
#define mbxfb_suspend	NULL
#define mbxfb_resume	NULL
#define mbxfb_debugfs_init(x)	do  while(0)
#define mbxfb_debugfs_remove(x)	do  while(0)
#define res_size(_r) (((_r)->end - (_r)->start) + 1)
static int __devinit mbxfb_probe(struct platform_device *dev)
static int __devexit mbxfb_remove(struct platform_device *dev)
static struct platform_driver mbxfb_driver = ;
int __devinit mbxfb_init(void)
static void __devexit mbxfb_exit(void)
module_init(mbxfb_init);
module_exit(mbxfb_exit);
MODULE_DESCRIPTION("loadable framebuffer driver for Marathon device");
MODULE_AUTHOR("Mike Rapoport, Compulab");
MODULE_LICENSE("GPL");

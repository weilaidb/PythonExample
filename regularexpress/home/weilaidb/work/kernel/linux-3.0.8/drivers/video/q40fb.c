#define Q40_PHYS_SCREEN_ADDR 0xFE800000
static struct fb_fix_screeninfo q40fb_fix __devinitdata = ;
static struct fb_var_screeninfo q40fb_var __devinitdata = ;
static int q40fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static struct fb_ops q40fb_ops = ;
static int __devinit q40fb_probe(struct platform_device *dev)
static struct platform_driver q40fb_driver = ;
static struct platform_device q40fb_device = ;
int __init q40fb_init(void)
module_init(q40fb_init);
MODULE_LICENSE("GPL");

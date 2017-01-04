#define dac_reg	(0x3c8)
#define dac_val	(0x3c9)
static struct fb_var_screeninfo vesafb_defined __initdata = ;
static struct fb_fix_screeninfo vesafb_fix __initdata = ;
static int   inverse    __read_mostly;
static int   mtrr       __read_mostly;
static int   vram_remap __initdata;
static int   vram_total __initdata;
static int   pmi_setpal __read_mostly = 1;
static int   ypan       __read_mostly;
static void  (*pmi_start)(void) __read_mostly;
static void  (*pmi_pal)  (void) __read_mostly;
static int   depth      __read_mostly;
static int   vga_compat __read_mostly;
static int vesafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int vesa_setpalette(int regno, unsigned red, unsigned green,
unsigned blue)
static int vesafb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static void vesafb_destroy(struct fb_info *info)
static struct fb_ops vesafb_ops = ;
static int __init vesafb_setup(char *options)
static int __init vesafb_probe(struct platform_device *dev)
static struct platform_driver vesafb_driver = ;
static struct platform_device *vesafb_device;
static int __init vesafb_init(void)
module_init(vesafb_init);
MODULE_LICENSE("GPL");

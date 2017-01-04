#define DAC_BASE 0x50f24000
#define DAFB_BASE 0xf9800200
#define CIVIC_BASE 0x50f30800
#define GSC_BASE 0x50F20000
#define CSC_BASE 0x50F20000
static int (*macfb_setpalette)(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info);
static struct  __iomem *v8_brazil_cmap_regs;
static struct  __iomem *rbv_cmap_regs;
static struct  __iomem *dafb_cmap_regs;
static struct  __iomem *civic_cmap_regs;
static struct  __iomem *csc_cmap_regs;
struct mdc_cmap_regs ;
struct toby_cmap_regs ;
struct jet_cmap_regs ;
#define PIXEL_TO_MM(a)	(((a)*10)/28)
static struct fb_var_screeninfo macfb_defined = ;
static struct fb_fix_screeninfo macfb_fix = ;
static void *slot_addr;
static struct fb_info fb_info;
static u32 pseudo_palette[16];
static int inverse;
static int vidtest;
static int dafb_setpalette(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info)
static int v8_brazil_setpalette(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info)
static int rbv_setpalette(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info)
static int mdc_setpalette(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info)
static int toby_setpalette(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info)
static int jet_setpalette(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info)
static int civic_setpalette(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info)
static int csc_setpalette(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
struct fb_info *info)
static int macfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *fb_info)
static struct fb_ops macfb_ops = ;
static void __init macfb_setup(char *options)
static void __init iounmap_macfb(void)
static int __init macfb_init(void)
module_init(macfb_init);
MODULE_LICENSE("GPL");

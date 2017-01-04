#define TGA_BUS_PCI(dev) (dev->bus == &pci_bus_type)
#define TGA_BUS_PCI(dev) 0
#define TGA_BUS_TC(dev) (dev->bus == &tc_bus_type)
#define TGA_BUS_TC(dev) 0
static int tgafb_check_var(struct fb_var_screeninfo *, struct fb_info *);
static int tgafb_set_par(struct fb_info *);
static void tgafb_set_pll(struct tga_par *, int);
static int tgafb_setcolreg(unsigned, unsigned, unsigned, unsigned,
unsigned, struct fb_info *);
static int tgafb_blank(int, struct fb_info *);
static void tgafb_init_fix(struct fb_info *);
static void tgafb_imageblit(struct fb_info *, const struct fb_image *);
static void tgafb_fillrect(struct fb_info *, const struct fb_fillrect *);
static void tgafb_copyarea(struct fb_info *, const struct fb_copyarea *);
static int tgafb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info);
static int __devinit tgafb_register(struct device *dev);
static void __devexit tgafb_unregister(struct device *dev);
static const char *mode_option;
static const char *mode_option_pci = "640x480@60";
static const char *mode_option_tc = "1280x1024@72";
static struct pci_driver tgafb_pci_driver;
static struct tc_driver tgafb_tc_driver;
static struct fb_ops tgafb_ops = ;
static int __devinit tgafb_pci_register(struct pci_dev *,
const struct pci_device_id *);
static void __devexit tgafb_pci_unregister(struct pci_dev *);
static struct pci_device_id const tgafb_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, tgafb_pci_table);
static struct pci_driver tgafb_pci_driver = ;
static int __devinit
tgafb_pci_register(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
tgafb_pci_unregister(struct pci_dev *pdev)
static int __devinit tgafb_tc_register(struct device *);
static int __devexit tgafb_tc_unregister(struct device *);
static struct tc_device_id const tgafb_tc_table[] = ;
MODULE_DEVICE_TABLE(tc, tgafb_tc_table);
static struct tc_driver tgafb_tc_driver = ;
static int __devinit
tgafb_tc_register(struct device *dev)
static int __devexit
tgafb_tc_unregister(struct device *dev)
static int
tgafb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int
tgafb_set_par(struct fb_info *info)
{
static unsigned int const deep_presets[4] = ;
static unsigned int const rasterop_presets[4] = ;
static unsigned int const mode_presets[4] = ;
static unsigned int const base_addr_presets[4] = ;
struct tga_par *par = (struct tga_par *) info->par;
int tga_bus_pci = TGA_BUS_PCI(par->dev);
int tga_bus_tc = TGA_BUS_TC(par->dev);
u32 htimings, vtimings, pll_freq;
u8 tga_type;
int i;
htimings = (((info->var.xres/4) & TGA_HORIZ_ACT_LSB)
| (((info->var.xres/4) & 0x600 << 19) & TGA_HORIZ_ACT_MSB));
vtimings = (info->var.yres & TGA_VERT_ACTIVE);
htimings |= ((info->var.right_margin/4) << 9) & TGA_HORIZ_FP;
vtimings |= (info->var.lower_margin << 11) & TGA_VERT_FP;
htimings |= ((info->var.hsync_len/4) << 14) & TGA_HORIZ_SYNC;
vtimings |= (info->var.vsync_len << 16) & TGA_VERT_SYNC;
htimings |= ((info->var.left_margin/4) << 21) & TGA_HORIZ_BP;
vtimings |= (info->var.upper_margin << 22) & TGA_VERT_BP;
if (info->var.sync & FB_SYNC_HOR_HIGH_ACT)
htimings |= TGA_HORIZ_POLARITY;
if (info->var.sync & FB_SYNC_VERT_HIGH_ACT)
vtimings |= TGA_VERT_POLARITY;
par->htimings = htimings;
par->vtimings = vtimings;
par->sync_on_green = !!(info->var.sync & FB_SYNC_ON_GREEN);
par->xres = info->var.xres;
par->yres = info->var.yres;
par->pll_freq = pll_freq = 1000000000 / info->var.pixclock;
par->bits_per_pixel = info->var.bits_per_pixel;
tga_type = par->tga_type;
TGA_WRITE_REG(par, TGA_VALID_VIDEO | TGA_VALID_BLANK, TGA_VALID_REG);
while (TGA_READ_REG(par, TGA_CMD_STAT_REG) & 1)
continue;
mb();
TGA_WRITE_REG(par, deep_presets[tga_type] |
(par->sync_on_green ? 0x0 : 0x00010000),
TGA_DEEP_REG);
while (TGA_READ_REG(par, TGA_CMD_STAT_REG) & 1)
continue;
mb();
TGA_WRITE_REG(par, rasterop_presets[tga_type], TGA_RASTEROP_REG);
TGA_WRITE_REG(par, mode_presets[tga_type], TGA_MODE_REG);
TGA_WRITE_REG(par, base_addr_presets[tga_type], TGA_BASE_ADDR_REG);
tgafb_set_pll(par, pll_freq);
TGA_WRITE_REG(par, 0xffffffff, TGA_PLANEMASK_REG);
TGA_WRITE_REG(par, 0xffffffff, TGA_PIXELMASK_REG);
TGA_WRITE_REG(par, htimings, TGA_HORIZ_REG);
TGA_WRITE_REG(par, vtimings, TGA_VERT_REG);
if (tga_type == TGA_TYPE_8PLANE && tga_bus_pci)  else if (tga_type == TGA_TYPE_8PLANE && tga_bus_tc)  else
#define DIFFCHECK(X)							  \
do  while (0)
static void
tgafb_set_pll(struct tga_par *par, int f)
static int
tgafb_setcolreg(unsigned regno, unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int
tgafb_blank(int blank, struct fb_info *info)
static void
tgafb_mono_imageblit(struct fb_info *info, const struct fb_image *image)
static void
tgafb_clut_imageblit(struct fb_info *info, const struct fb_image *image)
static void
tgafb_imageblit(struct fb_info *info, const struct fb_image *image)
static void
tgafb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static inline void
copyarea_line_8bpp(struct fb_info *info, u32 dy, u32 sy,
u32 height, u32 width)
static inline void
copyarea_line_32bpp(struct fb_info *info, u32 dy, u32 sy,
u32 height, u32 width)
static inline void
copyarea_foreward_8bpp(struct fb_info *info, u32 dx, u32 dy, u32 sx, u32 sy,
u32 height, u32 width, u32 line_length)
static inline void
copyarea_backward_8bpp(struct fb_info *info, u32 dx, u32 dy, u32 sx, u32 sy,
u32 height, u32 width, u32 line_length,
const struct fb_copyarea *area)
static void
tgafb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void
tgafb_init_fix(struct fb_info *info)
static int tgafb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static int __devinit
tgafb_register(struct device *dev)
static void __devexit
tgafb_unregister(struct device *dev)
static void __devexit
tgafb_exit(void)
static int __devinit
tgafb_setup(char *arg)
static int __devinit
tgafb_init(void)
module_init(tgafb_init);
module_exit(tgafb_exit);
MODULE_DESCRIPTION("Framebuffer driver for TGA/SFB+ chipset");
MODULE_LICENSE("GPL");

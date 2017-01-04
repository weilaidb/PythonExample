#if !defined(__LITTLE_ENDIAN) && !defined(__BIG_ENDIAN)
#error  "The endianness of the target host has not been defined."
#define CARMINEFB_DEFAULT_VIDEO_MODE	1
static unsigned int fb_mode = CARMINEFB_DEFAULT_VIDEO_MODE;
module_param(fb_mode, uint, 444);
MODULE_PARM_DESC(fb_mode, "Initial video mode as integer.");
static char *fb_mode_str;
module_param(fb_mode_str, charp, 444);
MODULE_PARM_DESC(fb_mode_str, "Initial video mode in characters.");
static int fb_displays = CARMINE_USE_DISPLAY0 | CARMINE_USE_DISPLAY1;
module_param(fb_displays, int, 444);
MODULE_PARM_DESC(fb_displays, "Bit mode, which displays are used");
struct carmine_hw ;
struct carmine_resolution ;
struct carmine_fb ;
static struct fb_fix_screeninfo carminefb_fix __devinitdata = ;
static const struct fb_videomode carmine_modedb[] = ;
static struct carmine_resolution car_modes[] = ;
static int carmine_find_mode(const struct fb_var_screeninfo *var)
static void c_set_disp_reg(const struct carmine_fb *par,
u32 offset, u32 val)
static u32 c_get_disp_reg(const struct carmine_fb *par,
u32 offset)
static void c_set_hw_reg(const struct carmine_hw *hw,
u32 offset, u32 val)
static u32 c_get_hw_reg(const struct carmine_hw *hw,
u32 offset)
static int carmine_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp, struct fb_info *info)
static int carmine_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void carmine_init_display_param(struct carmine_fb *par)
static void set_display_parameters(struct carmine_fb *par)
static int carmine_set_par(struct fb_info *info)
static int init_hardware(struct carmine_hw *hw)
static struct fb_ops carminefb_ops = ;
static int __devinit alloc_carmine_fb(void __iomem *regs, void __iomem *smem_base,
int smem_offset, struct device *device, struct fb_info **rinfo)
static void cleanup_fb_device(struct fb_info *info)
static int __devinit carminefb_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit carminefb_remove(struct pci_dev *dev)
#define PCI_VENDOR_ID_FUJITU_LIMITED 0x10cf
static struct pci_device_id carmine_devices[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, carmine_devices);
static struct pci_driver carmine_pci_driver = ;
static int __init carminefb_init(void)
module_init(carminefb_init);
static void __exit carminefb_cleanup(void)
module_exit(carminefb_cleanup);
MODULE_AUTHOR("Sebastian Siewior <bigeasy@linutronix.de>");
MODULE_DESCRIPTION("Framebuffer driver for Fujitsu Carmine based devices");
MODULE_LICENSE("GPL v2");

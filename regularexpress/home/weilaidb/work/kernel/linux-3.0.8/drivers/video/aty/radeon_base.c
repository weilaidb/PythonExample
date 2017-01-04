#define RADEON_VERSION	"0.2.0"
#define MAX_MAPPED_VRAM	(2048*2048*4)
#define MIN_MAPPED_VRAM	(1024*768*1)
#define CHIP_DEF(id, family, flags)					\
static struct pci_device_id radeonfb_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, radeonfb_pci_table);
typedef struct  reg_val;
static reg_val common_regs[] = ;
static char *mode_option;
static char *monitor_layout;
static int noaccel = 0;
static int default_dynclk = -2;
static int nomodeset = 0;
static int ignore_edid = 0;
static int mirror = 0;
static int panel_yres = 0;
static int force_dfp = 0;
static int force_measure_pll = 0;
static int nomtrr = 0;
static int force_sleep;
static int ignore_devlist;
static int backlight = 1;
static int backlight = 0;
static void radeon_unmap_ROM(struct radeonfb_info *rinfo, struct pci_dev *dev)
static int __devinit radeon_map_ROM(struct radeonfb_info *rinfo, struct pci_dev *dev)
static int  __devinit radeon_find_mem_vbios(struct radeonfb_info *rinfo)
#if defined(CONFIG_PPC_OF) || defined(CONFIG_SPARC)
static int __devinit radeon_read_xtal_OF (struct radeonfb_info *rinfo)
static int __devinit radeon_probe_pll_params(struct radeonfb_info *rinfo)
static void __devinit radeon_get_pllinfo(struct radeonfb_info *rinfo)
static int radeonfb_check_var (struct fb_var_screeninfo *var, struct fb_info *info)
static int radeonfb_pan_display (struct fb_var_screeninfo *var,
struct fb_info *info)
static int radeonfb_ioctl (struct fb_info *info, unsigned int cmd,
unsigned long arg)
int radeon_screen_blank(struct radeonfb_info *rinfo, int blank, int mode_switch)
static int radeonfb_blank (int blank, struct fb_info *info)
static int radeon_setcolreg (unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct radeonfb_info *rinfo)
static int radeonfb_setcolreg (unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int radeonfb_setcmap(struct fb_cmap *cmap, struct fb_info *info)
static void radeon_save_state (struct radeonfb_info *rinfo,
struct radeon_regs *save)
static void radeon_write_pll_regs(struct radeonfb_info *rinfo, struct radeon_regs *mode)
static void radeon_lvds_timer_func(unsigned long data)
void radeon_write_mode (struct radeonfb_info *rinfo, struct radeon_regs *mode,
int regs_only)
static void radeon_calc_pll_regs(struct radeonfb_info *rinfo, struct radeon_regs *regs,
unsigned long freq)
static int radeonfb_set_par(struct fb_info *info)
static struct fb_ops radeonfb_ops = ;
static int __devinit radeon_set_fbinfo (struct radeonfb_info *rinfo)
#undef SET_MC_FB_FROM_APERTURE
static void fixup_memory_mappings(struct radeonfb_info *rinfo)
static void radeon_identify_vram(struct radeonfb_info *rinfo)
static ssize_t radeon_show_one_edid(char *buf, loff_t off, size_t count, const u8 *edid)
static ssize_t radeon_show_edid1(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t radeon_show_edid2(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute edid1_attr = ;
static struct bin_attribute edid2_attr = ;
static int __devinit radeonfb_pci_register (struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit radeonfb_pci_unregister (struct pci_dev *pdev)
static struct pci_driver radeonfb_driver = ;
static int __init radeonfb_setup (char *options)
static int __init radeonfb_init (void)
static void __exit radeonfb_exit (void)
module_init(radeonfb_init);
module_exit(radeonfb_exit);
MODULE_AUTHOR("Ani Joshi");
MODULE_DESCRIPTION("framebuffer driver for ATI Radeon chipset");
MODULE_LICENSE("GPL");
module_param(noaccel, bool, 0);
module_param(default_dynclk, int, 0);
MODULE_PARM_DESC(default_dynclk, "int: -2=enable on mobility only,-1=do not change,0=off,1=on");
MODULE_PARM_DESC(noaccel, "bool: disable acceleration");
module_param(nomodeset, bool, 0);
MODULE_PARM_DESC(nomodeset, "bool: disable actual setting of video mode");
module_param(mirror, bool, 0);
MODULE_PARM_DESC(mirror, "bool: mirror the display to both monitors");
module_param(force_dfp, bool, 0);
MODULE_PARM_DESC(force_dfp, "bool: force display to dfp");
module_param(ignore_edid, bool, 0);
MODULE_PARM_DESC(ignore_edid, "bool: Ignore EDID data when doing DDC probe");
module_param(monitor_layout, charp, 0);
MODULE_PARM_DESC(monitor_layout, "Specify monitor mapping (like XFree86)");
module_param(force_measure_pll, bool, 0);
MODULE_PARM_DESC(force_measure_pll, "Force measurement of PLL (debug)");
module_param(nomtrr, bool, 0);
MODULE_PARM_DESC(nomtrr, "bool: disable use of MTRR registers");
module_param(panel_yres, int, 0);
MODULE_PARM_DESC(panel_yres, "int: set panel yres");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Specify resolution as \"<xres>x<yres>[-<bpp>][@<refresh>]\" ");
#if defined(CONFIG_PM) && defined(CONFIG_X86)
module_param(force_sleep, bool, 0);
MODULE_PARM_DESC(force_sleep, "bool: force D2 sleep mode on all hardware");
module_param(ignore_devlist, bool, 0);
MODULE_PARM_DESC(ignore_devlist, "bool: ignore workarounds for bugs in specific laptops");

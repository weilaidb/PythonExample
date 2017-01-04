#define SAVAGEFB_VERSION "0.4.0_2.6"
static char *mode_option __devinitdata = NULL;
MODULE_AUTHOR("(c) 2001-2002  Denis Oliver Kropp <dok@directfb.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("FBDev driver for S3 Savage PCI/AGP Chips");
static void vgaHWSeqReset(struct savagefb_par *par, int start)
static void vgaHWProtect(struct savagefb_par *par, int on)
static void vgaHWRestore(struct savagefb_par  *par, struct savage_reg *reg)
static void vgaHWInit(struct fb_var_screeninfo *var,
struct savagefb_par            *par,
struct xtimings                *timings,
struct savage_reg              *reg)
static void
savage3D_waitfifo(struct savagefb_par *par, int space)
static void
savage4_waitfifo(struct savagefb_par *par, int space)
static void
savage2000_waitfifo(struct savagefb_par *par, int space)
static void
savage3D_waitidle(struct savagefb_par *par)
static void
savage4_waitidle(struct savagefb_par *par)
static void
savage2000_waitidle(struct savagefb_par *par)
static void
SavageSetup2DEngine(struct savagefb_par  *par)
static void savagefb_set_clip(struct fb_info *info)
static void SavageSetup2DEngine(struct savagefb_par  *par)
static void SavageCalcClock(long freq, int min_m, int min_n1, int max_n1,
int min_n2, int max_n2, long freq_min,
long freq_max, unsigned int *mdiv,
unsigned int *ndiv, unsigned int *r)
static int common_calc_clock(long freq, int min_m, int min_n1, int max_n1,
int min_n2, int max_n2, long freq_min,
long freq_max, unsigned char *mdiv,
unsigned char *ndiv)
static void SavagePrintRegs(struct savagefb_par *par)
static void savage_get_default_par(struct savagefb_par *par, struct savage_reg *reg)
static void savage_set_default_par(struct savagefb_par *par,
struct savage_reg *reg)
static void savage_update_var(struct fb_var_screeninfo *var,
const struct fb_videomode *modedb)
static int savagefb_check_var(struct fb_var_screeninfo   *var,
struct fb_info *info)
static int savagefb_decode_var(struct fb_var_screeninfo   *var,
struct savagefb_par        *par,
struct savage_reg          *reg)
static int savagefb_setcolreg(unsigned        regno,
unsigned        red,
unsigned        green,
unsigned        blue,
unsigned        transp,
struct fb_info *info)
static void savagefb_set_par_int(struct savagefb_par  *par, struct savage_reg *reg)
static void savagefb_update_start(struct savagefb_par      *par,
struct fb_var_screeninfo *var)
static void savagefb_set_fix(struct fb_info *info)
static int savagefb_set_par(struct fb_info *info)
static int savagefb_pan_display(struct fb_var_screeninfo *var,
struct fb_info           *info)
static int savagefb_blank(int blank, struct fb_info *info)
static int savagefb_open(struct fb_info *info, int user)
static int savagefb_release(struct fb_info *info, int user)
static struct fb_ops savagefb_ops = ;
static struct fb_var_screeninfo __devinitdata savagefb_var800x600x8 = ;
static void savage_enable_mmio(struct savagefb_par *par)
static void savage_disable_mmio(struct savagefb_par *par)
static int __devinit savage_map_mmio(struct fb_info *info)
static void savage_unmap_mmio(struct fb_info *info)
static int __devinit savage_map_video(struct fb_info *info,
int video_len)
static void savage_unmap_video(struct fb_info *info)
static int savage_init_hw(struct savagefb_par *par)
static int __devinit savage_init_fb_info(struct fb_info *info,
struct pci_dev *dev,
const struct pci_device_id *id)
static int __devinit savagefb_probe(struct pci_dev* dev,
const struct pci_device_id* id)
static void __devexit savagefb_remove(struct pci_dev *dev)
static int savagefb_suspend(struct pci_dev *dev, pm_message_t mesg)
static int savagefb_resume(struct pci_dev* dev)
static struct pci_device_id savagefb_devices[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, savagefb_devices);
static struct pci_driver savagefb_driver = ;
static void __exit savage_done(void)
static int __init savagefb_setup(char *options)
static int __init savagefb_init(void)
module_init(savagefb_init);
module_exit(savage_done);
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Specify initial video mode");

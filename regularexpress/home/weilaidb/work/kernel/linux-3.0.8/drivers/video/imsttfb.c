#if defined(CONFIG_PPC)
#define eieio()
enum ;
enum ;
enum ;
enum ;
enum ;
struct initvalues ;
static struct initvalues ibm_initregs[] __devinitdata = ;
static struct initvalues tvp_initregs[] __devinitdata = ;
struct imstt_regvals ;
struct imstt_par ;
enum ;
#define USE_NV_MODES		1
#define INIT_BPP		8
#define INIT_XRES		640
#define INIT_YRES		480
static int inverse = 0;
static char fontname[40] __initdata = ;
#if defined(CONFIG_PPC)
static signed char init_vmode __devinitdata = -1, init_cmode __devinitdata = -1;
static struct imstt_regvals tvp_reg_init_2 = ;
static struct imstt_regvals tvp_reg_init_6 = ;
static struct imstt_regvals tvp_reg_init_12 = ;
static struct imstt_regvals tvp_reg_init_13 = ;
static struct imstt_regvals tvp_reg_init_17 = ;
static struct imstt_regvals tvp_reg_init_18 = ;
static struct imstt_regvals tvp_reg_init_19 = ;
static struct imstt_regvals tvp_reg_init_20 = ;
static int imsttfb_probe(struct pci_dev *pdev, const struct pci_device_id *ent);
static void imsttfb_remove(struct pci_dev *pdev);
static inline u32 read_reg_le32(volatile u32 __iomem *base, int regindex)
static inline void write_reg_le32(volatile u32 __iomem *base, int regindex, u32 val)
static __u32
getclkMHz(struct imstt_par *par)
static void
setclkMHz(struct imstt_par *par, __u32 MHz)
static struct imstt_regvals *
compute_imstt_regvals_ibm(struct imstt_par *par, int xres, int yres)
static struct imstt_regvals *
compute_imstt_regvals_tvp(struct imstt_par *par, int xres, int yres)
static struct imstt_regvals *
compute_imstt_regvals (struct imstt_par *par, u_int xres, u_int yres)
static void
set_imstt_regvals_ibm (struct imstt_par *par, u_int bpp)
static void
set_imstt_regvals_tvp (struct imstt_par *par, u_int bpp)
static void
set_imstt_regvals (struct fb_info *info, u_int bpp)
static inline void
set_offset (struct fb_var_screeninfo *var, struct fb_info *info)
static inline void
set_555 (struct imstt_par *par)
static inline void
set_565 (struct imstt_par *par)
static int
imsttfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int
imsttfb_set_par(struct fb_info *info)
static int
imsttfb_setcolreg (u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int
imsttfb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static int
imsttfb_blank(int blank, struct fb_info *info)
static void
imsttfb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void
imsttfb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
#define FBIMSTT_SETREG		0x545401
#define FBIMSTT_GETREG		0x545402
#define FBIMSTT_SETCMAPREG	0x545403
#define FBIMSTT_GETCMAPREG	0x545404
#define FBIMSTT_SETIDXREG	0x545405
#define FBIMSTT_GETIDXREG	0x545406
static int
imsttfb_ioctl(struct fb_info *info, u_int cmd, u_long arg)
static struct pci_device_id imsttfb_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, imsttfb_pci_tbl);
static struct pci_driver imsttfb_pci_driver = ;
static struct fb_ops imsttfb_ops = ;
static void __devinit
init_imstt(struct fb_info *info)
static int __devinit
imsttfb_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
imsttfb_remove(struct pci_dev *pdev)
static int __init
imsttfb_setup(char *options)
static int __init imsttfb_init(void)
static void __exit imsttfb_exit(void)
MODULE_LICENSE("GPL");
module_init(imsttfb_init);
module_exit(imsttfb_exit);

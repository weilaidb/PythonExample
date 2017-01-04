#define PCI_VENDOR_ID_ST	0x104a
#define PCI_DEVICE_ID_STG4000	0x0010
#define KHZ2PICOS(a) (1000000000UL/(a))
static struct fb_fix_screeninfo kyro_fix __devinitdata = ;
static struct fb_var_screeninfo kyro_var __devinitdata = ;
typedef struct  device_info_t;
static device_info_t deviceInfo;
static char *mode_option __devinitdata = NULL;
static int nopan __devinitdata = 0;
static int nowrap __devinitdata = 1;
static int nomtrr __devinitdata = 0;
static int kyrofb_probe(struct pci_dev *pdev, const struct pci_device_id *ent);
static void kyrofb_remove(struct pci_dev *pdev);
static struct fb_videomode kyro_modedb[] __devinitdata = ;
#define NUM_TOTAL_MODES	ARRAY_SIZE(kyro_modedb)
enum ;
static int kyro_dev_video_mode_set(struct fb_info *info)
static int kyro_dev_overlay_create(u32 ulWidth,
u32 ulHeight, int bLinear)
static int kyro_dev_overlay_viewport_set(u32 x, u32 y, u32 ulWidth, u32 ulHeight)
static inline unsigned long get_line_length(int x, int bpp)
static int kyrofb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int kyrofb_set_par(struct fb_info *info)
static int kyrofb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp, struct fb_info *info)
static int __init kyrofb_setup(char *options)
static int kyrofb_ioctl(struct fb_info *info,
unsigned int cmd, unsigned long arg)
static struct pci_device_id kyrofb_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, kyrofb_pci_tbl);
static struct pci_driver kyrofb_pci_driver = ;
static struct fb_ops kyrofb_ops = ;
static int __devinit kyrofb_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit kyrofb_remove(struct pci_dev *pdev)
static int __init kyrofb_init(void)
static void __exit kyrofb_exit(void)
module_init(kyrofb_init);
module_exit(kyrofb_exit);
MODULE_AUTHOR("STMicroelectronics; Paul Mundt <lethal@linux-sh.org>");
MODULE_LICENSE("GPL");

#define NEOFB_VERSION "0.4.2"
static int internal;
static int external;
static int libretto;
static int nostretch;
static int nopciburst;
static char *mode_option __devinitdata = NULL;
MODULE_AUTHOR("(c) 2001-2002  Denis Oliver Kropp <dok@convergence.de>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("FBDev driver for NeoMagic PCI Chips");
module_param(internal, bool, 0);
MODULE_PARM_DESC(internal, "Enable output on internal LCD Display.");
module_param(external, bool, 0);
MODULE_PARM_DESC(external, "Enable output on external CRT.");
module_param(libretto, bool, 0);
MODULE_PARM_DESC(libretto, "Force Libretto 100/110 800x480 LCD.");
module_param(nostretch, bool, 0);
MODULE_PARM_DESC(nostretch,
"Disable stretching of modes smaller than LCD.");
module_param(nopciburst, bool, 0);
MODULE_PARM_DESC(nopciburst, "Disable PCI burst mode.");
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "Preferred video mode ('640x480-8@60', etc)");
static biosMode bios8[] = ;
static biosMode bios16[] = ;
static biosMode bios24[] = ;
static biosMode bios32[] = ;
static inline void write_le32(int regindex, u32 val, const struct neofb_par *par)
static int neoFindMode(int xres, int yres, int depth)
#define MAX_N 127
#define MAX_D 31
#define MAX_F 1
static void neoCalcVCLK(const struct fb_info *info,
struct neofb_par *par, long freq)
static int vgaHWInit(const struct fb_var_screeninfo *var,
struct neofb_par *par)
static void vgaHWLock(struct vgastate *state)
static void vgaHWUnlock(void)
static void neoLock(struct vgastate *state)
static void neoUnlock(void)
static int paletteEnabled = 0;
static inline void VGAenablePalette(void)
static inline void VGAdisablePalette(void)
static inline void VGAwATTR(u8 index, u8 value)
static void vgaHWProtect(int on)
static void vgaHWRestore(const struct fb_info *info,
const struct neofb_par *par)
static inline int neo2200_sync(struct fb_info *info)
static inline void neo2200_wait_fifo(struct fb_info *info,
int requested_fifo_space)
static inline void neo2200_accel_init(struct fb_info *info,
struct fb_var_screeninfo *var)
static int
neofb_open(struct fb_info *info, int user)
static int
neofb_release(struct fb_info *info, int user)
static int
neofb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int neofb_set_par(struct fb_info *info)
static int neofb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int neofb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *fb)
static int neofb_blank(int blank_mode, struct fb_info *info)
static void
neo2200_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void
neo2200_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void
neo2200_imageblit(struct fb_info *info, const struct fb_image *image)
static void
neofb_fillrect(struct fb_info *info, const struct fb_fillrect *rect)
static void
neofb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void
neofb_imageblit(struct fb_info *info, const struct fb_image *image)
static int
neofb_sync(struct fb_info *info)
static struct fb_ops neofb_ops = ;
static struct fb_videomode __devinitdata mode800x480 = ;
static int __devinit neo_map_mmio(struct fb_info *info,
struct pci_dev *dev)
static void neo_unmap_mmio(struct fb_info *info)
static int __devinit neo_map_video(struct fb_info *info,
struct pci_dev *dev, int video_len)
static void neo_unmap_video(struct fb_info *info)
static int __devinit neo_scan_monitor(struct fb_info *info)
static int __devinit neo_init_hw(struct fb_info *info)
static struct fb_info *__devinit neo_alloc_fb_info(struct pci_dev *dev, const struct
pci_device_id *id)
static void neo_free_fb_info(struct fb_info *info)
static int __devinit neofb_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit neofb_remove(struct pci_dev *dev)
static struct pci_device_id neofb_devices[] = ;
MODULE_DEVICE_TABLE(pci, neofb_devices);
static struct pci_driver neofb_driver = ;
static int __init neofb_setup(char *options)
static int __init neofb_init(void)
module_init(neofb_init);
static void __exit neofb_exit(void)
module_exit(neofb_exit);

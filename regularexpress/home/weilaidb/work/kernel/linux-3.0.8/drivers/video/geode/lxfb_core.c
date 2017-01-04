static char *mode_option;
static int noclear, nopanel, nocrt;
static int vram;
static int vt_switch;
static struct fb_videomode geode_modedb[] __devinitdata = ;
static struct fb_videomode olpc_dcon_modedb[] __devinitdata = ;
static void __devinit get_modedb(struct fb_videomode **modedb,
unsigned int *size)
static void __devinit get_modedb(struct fb_videomode **modedb,
unsigned int *size)
static int lxfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int lxfb_set_par(struct fb_info *info)
static inline u_int chan_to_field(u_int chan, struct fb_bitfield *bf)
static int lxfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int lxfb_blank(int blank_mode, struct fb_info *info)
static int __devinit lxfb_map_video_memory(struct fb_info *info,
struct pci_dev *dev)
static struct fb_ops lxfb_ops = ;
static struct fb_info * __devinit lxfb_init_fbinfo(struct device *dev)
static int lxfb_suspend(struct pci_dev *pdev, pm_message_t state)
static int lxfb_resume(struct pci_dev *pdev)
#define lxfb_suspend NULL
#define lxfb_resume NULL
static int __devinit lxfb_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit lxfb_remove(struct pci_dev *pdev)
static struct pci_device_id lxfb_id_table[] = ;
MODULE_DEVICE_TABLE(pci, lxfb_id_table);
static struct pci_driver lxfb_driver = ;
static int __init lxfb_setup(char *options)
static int __init lxfb_init(void)
static void __exit lxfb_cleanup(void)
module_init(lxfb_init);
module_exit(lxfb_cleanup);
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "video mode (<x>x<y>[-<bpp>][@<refr>])");
module_param(vram, int, 0);
MODULE_PARM_DESC(vram, "video memory size");
module_param(vt_switch, int, 0);
MODULE_PARM_DESC(vt_switch, "enable VT switch during suspend/resume");
MODULE_DESCRIPTION("Framebuffer driver for the AMD Geode LX");
MODULE_LICENSE("GPL");

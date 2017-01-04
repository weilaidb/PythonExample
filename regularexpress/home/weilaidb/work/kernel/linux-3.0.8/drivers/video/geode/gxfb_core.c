static char *mode_option;
static int vram;
static int vt_switch;
static struct fb_videomode gx_modedb[] __devinitdata = ;
static struct fb_videomode gx_dcon_modedb[] __devinitdata = ;
static void __devinit get_modedb(struct fb_videomode **modedb,
unsigned int *size)
static void __devinit get_modedb(struct fb_videomode **modedb,
unsigned int *size)
static int gxfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int gxfb_set_par(struct fb_info *info)
static inline u_int chan_to_field(u_int chan, struct fb_bitfield *bf)
static int gxfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int gxfb_blank(int blank_mode, struct fb_info *info)
static int __devinit gxfb_map_video_memory(struct fb_info *info,
struct pci_dev *dev)
static struct fb_ops gxfb_ops = ;
static struct fb_info *__devinit gxfb_init_fbinfo(struct device *dev)
static int gxfb_suspend(struct pci_dev *pdev, pm_message_t state)
static int gxfb_resume(struct pci_dev *pdev)
static int __devinit gxfb_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit gxfb_remove(struct pci_dev *pdev)
static struct pci_device_id gxfb_id_table[] = ;
MODULE_DEVICE_TABLE(pci, gxfb_id_table);
static struct pci_driver gxfb_driver = ;
static int __init gxfb_setup(char *options)
static int __init gxfb_init(void)
static void __exit gxfb_cleanup(void)
module_init(gxfb_init);
module_exit(gxfb_cleanup);
module_param(mode_option, charp, 0);
MODULE_PARM_DESC(mode_option, "video mode (<x>x<y>[-<bpp>][@<refr>])");
module_param(vram, int, 0);
MODULE_PARM_DESC(vram, "video memory size");
module_param(vt_switch, int, 0);
MODULE_PARM_DESC(vt_switch, "enable VT switch during suspend/resume");
MODULE_DESCRIPTION("Framebuffer driver for the AMD Geode GX");
MODULE_LICENSE("GPL");

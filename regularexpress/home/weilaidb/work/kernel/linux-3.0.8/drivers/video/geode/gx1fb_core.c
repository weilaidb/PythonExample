static char mode_option[32] = "640x480-16@60";
static int  crt_option = 1;
static char panel_option[32] = "";
static const struct fb_videomode __devinitdata gx1_modedb[] = ;
static int gx1_line_delta(int xres, int bpp)
static int gx1fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int gx1fb_set_par(struct fb_info *info)
static inline u_int chan_to_field(u_int chan, struct fb_bitfield *bf)
static int gx1fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int gx1fb_blank(int blank_mode, struct fb_info *info)
static int __devinit gx1fb_map_video_memory(struct fb_info *info, struct pci_dev *dev)
static int parse_panel_option(struct fb_info *info)
static struct fb_ops gx1fb_ops = ;
static struct fb_info * __devinit gx1fb_init_fbinfo(struct device *dev)
static int __devinit gx1fb_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit gx1fb_remove(struct pci_dev *pdev)
static void __init gx1fb_setup(char *options)
static struct pci_device_id gx1fb_id_table[] = ;
MODULE_DEVICE_TABLE(pci, gx1fb_id_table);
static struct pci_driver gx1fb_driver = ;
static int __init gx1fb_init(void)
static void __devexit gx1fb_cleanup(void)
module_init(gx1fb_init);
module_exit(gx1fb_cleanup);
module_param_string(mode, mode_option, sizeof(mode_option), 0444);
MODULE_PARM_DESC(mode, "video mode (<x>x<y>[-<bpp>][@<refr>])");
module_param_named(crt, crt_option, int, 0444);
MODULE_PARM_DESC(crt, "enable CRT output. 0 = off, 1 = on (default)");
module_param_string(panel, panel_option, sizeof(panel_option), 0444);
MODULE_PARM_DESC(panel, "size of attached flat panel (<x>x<y>)");
MODULE_DESCRIPTION("framebuffer driver for the AMD Geode GX1");
MODULE_LICENSE("GPL");

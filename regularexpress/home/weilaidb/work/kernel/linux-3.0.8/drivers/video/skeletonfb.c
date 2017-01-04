static char *mode_option __devinitdata;
struct xxx_par;
static struct fb_fix_screeninfo xxxfb_fix __devinitdata = ;
static struct fb_info info;
static struct xxx_par __initdata current_par;
int xxxfb_init(void);
static int xxxfb_open(struct fb_info *info, int user)
static int xxxfb_release(struct fb_info *info, int user)
static int xxxfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int xxxfb_set_par(struct fb_info *info)
static int xxxfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int xxxfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int xxxfb_blank(int blank_mode, struct fb_info *info)
void xxxfb_fillrect(struct fb_info *p, const struct fb_fillrect *region)
void xxxfb_copyarea(struct fb_info *p, const struct fb_copyarea *area)
void xxxfb_imageblit(struct fb_info *p, const struct fb_image *image)
int xxxfb_cursor(struct fb_info *info, struct fb_cursor *cursor)
void xxxfb_rotate(struct fb_info *info, int angle)
int xxxfb_sync(struct fb_info *info)
static struct fb_ops xxxfb_ops = ;
static int __devinit xxxfb_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit xxxfb_remove(struct pci_dev *dev)
static int xxxfb_suspend(struct pci_dev *dev, pm_message_t msg)
static int xxxfb_resume(struct pci_dev *dev)
#define xxxfb_suspend NULL
#define xxxfb_resume NULL
static struct pci_device_id xxxfb_id_table[] = ;
static struct pci_driver xxxfb_driver = ;
MODULE_DEVICE_TABLE(pci, xxxfb_id_table);
int __init xxxfb_init(void)
static void __exit xxxfb_exit(void)
static int xxxfb_suspend(struct platform_device *dev, pm_message_t msg)
static int xxxfb_resume(struct platform_dev *dev)
#define xxxfb_suspend NULL
#define xxxfb_resume NULL
static struct platform_device_driver xxxfb_driver = ;
static struct platform_device *xxxfb_device;
int __init xxxfb_setup(char *options)
static int __init xxxfb_init(void)
static void __exit xxxfb_exit(void)
module_init(xxxfb_init);
module_exit(xxxfb_remove);
MODULE_LICENSE("GPL");

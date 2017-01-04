#define DPY_W 600
#define DPY_H 800
static struct fb_fix_screeninfo hecubafb_fix __devinitdata = ;
static struct fb_var_screeninfo hecubafb_var __devinitdata = ;
static void apollo_send_data(struct hecubafb_par *par, unsigned char data)
static void apollo_send_command(struct hecubafb_par *par, unsigned char data)
static void hecubafb_dpy_update(struct hecubafb_par *par)
static void hecubafb_dpy_deferred_io(struct fb_info *info,
struct list_head *pagelist)
static void hecubafb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void hecubafb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void hecubafb_imageblit(struct fb_info *info,
const struct fb_image *image)
static ssize_t hecubafb_write(struct fb_info *info, const char __user *buf,
size_t count, loff_t *ppos)
static struct fb_ops hecubafb_ops = ;
static struct fb_deferred_io hecubafb_defio = ;
static int __devinit hecubafb_probe(struct platform_device *dev)
static int __devexit hecubafb_remove(struct platform_device *dev)
static struct platform_driver hecubafb_driver = ;
static int __init hecubafb_init(void)
static void __exit hecubafb_exit(void)
module_init(hecubafb_init);
module_exit(hecubafb_exit);
MODULE_DESCRIPTION("fbdev driver for Hecuba/Apollo controller");
MODULE_AUTHOR("Jaya Kumar");
MODULE_LICENSE("GPL");

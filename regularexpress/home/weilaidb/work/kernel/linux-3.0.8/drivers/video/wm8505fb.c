#define DRIVER_NAME "wm8505-fb"
#define to_wm8505fb_info(__info) container_of(__info, \
struct wm8505fb_info, fb)
struct wm8505fb_info ;
static int wm8505fb_init_hw(struct fb_info *info)
static int wm8505fb_set_timing(struct fb_info *info)
static int wm8505fb_set_par(struct fb_info *info)
static ssize_t contrast_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t contrast_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(contrast, 0644, contrast_show, contrast_store);
static inline u_int chan_to_field(u_int chan, struct fb_bitfield *bf)
static int wm8505fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int wm8505fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int wm8505fb_blank(int blank, struct fb_info *info)
static struct fb_ops wm8505fb_ops = ;
static int __devinit wm8505fb_probe(struct platform_device *pdev)
static int __devexit wm8505fb_remove(struct platform_device *pdev)
static struct platform_driver wm8505fb_driver = ;
static int __init wm8505fb_init(void)
static void __exit wm8505fb_exit(void)
module_init(wm8505fb_init);
module_exit(wm8505fb_exit);
MODULE_AUTHOR("Ed Spiridonov <edo.rus@gmail.com>");
MODULE_DESCRIPTION("Framebuffer driver for WMT WM8505");
MODULE_LICENSE("GPL");

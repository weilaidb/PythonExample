#define to_vt8500lcd_info(__info) container_of(__info, \
struct vt8500lcd_info, fb)
static int vt8500lcd_set_par(struct fb_info *info)
static inline u_int chan_to_field(u_int chan, struct fb_bitfield *bf)
static int vt8500lcd_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int vt8500lcd_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int vt8500lcd_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int vt8500lcd_blank(int blank, struct fb_info *info)
static struct fb_ops vt8500lcd_ops = ;
static irqreturn_t vt8500lcd_handle_irq(int irq, void *dev_id)
static int __devinit vt8500lcd_probe(struct platform_device *pdev)
static int __devexit vt8500lcd_remove(struct platform_device *pdev)
static struct platform_driver vt8500lcd_driver = ;
static int __init vt8500lcd_init(void)
static void __exit vt8500lcd_exit(void)
module_init(vt8500lcd_init);
module_exit(vt8500lcd_exit);
MODULE_AUTHOR("Alexey Charkov <alchark@gmail.com>");
MODULE_DESCRIPTION("LCD controller driver for VIA VT8500");
MODULE_LICENSE("GPL");

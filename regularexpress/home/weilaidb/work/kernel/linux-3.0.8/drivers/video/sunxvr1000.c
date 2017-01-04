struct gfb_info ;
static int __devinit gfb_get_props(struct gfb_info *gp)
static int gfb_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static struct fb_ops gfb_ops = ;
static int __devinit gfb_set_fbinfo(struct gfb_info *gp)
static int __devinit gfb_probe(struct platform_device *op)
static int __devexit gfb_remove(struct platform_device *op)
static const struct of_device_id gfb_match[] = ;
MODULE_DEVICE_TABLE(of, ffb_match);
static struct platform_driver gfb_driver = ;
static int __init gfb_init(void)
static void __exit gfb_exit(void)
module_init(gfb_init);
module_exit(gfb_exit);
MODULE_DESCRIPTION("framebuffer driver for Sun XVR-1000 graphics");
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");

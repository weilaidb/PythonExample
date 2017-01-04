struct sh7760fb_par ;
static irqreturn_t sh7760fb_irq(int irq, void *data)
static int wait_for_lps(struct sh7760fb_par *par, int val)
static int sh7760fb_blank(int blank, struct fb_info *info)
static int sh7760_setcolreg (u_int regno,
u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int sh7760fb_get_color_info(struct device *dev,
u16 lddfr, int *bpp, int *gray)
static int sh7760fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int sh7760fb_set_par(struct fb_info *info)
static struct fb_ops sh7760fb_ops = ;
static void sh7760fb_free_mem(struct fb_info *info)
static int sh7760fb_alloc_mem(struct fb_info *info)
static int __devinit sh7760fb_probe(struct platform_device *pdev)
static int __devexit sh7760fb_remove(struct platform_device *dev)
static struct platform_driver sh7760_lcdc_driver = ;
static int __init sh7760fb_init(void)
static void __exit sh7760fb_exit(void)
module_init(sh7760fb_init);
module_exit(sh7760fb_exit);
MODULE_AUTHOR("Nobuhiro Iwamatsu, Manuel Lauss");
MODULE_DESCRIPTION("FBdev for SH7760/63 integrated LCD Controller");
MODULE_LICENSE("GPL");

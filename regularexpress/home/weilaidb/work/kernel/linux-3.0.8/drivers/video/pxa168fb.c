#define DEFAULT_REFRESH		60
static int determine_best_pix_fmt(struct fb_var_screeninfo *var)
static void set_pix_fmt(struct fb_var_screeninfo *var, int pix_fmt)
static void set_mode(struct pxa168fb_info *fbi, struct fb_var_screeninfo *var,
struct fb_videomode *mode, int pix_fmt, int ystretch)
static int pxa168fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void set_clock_divider(struct pxa168fb_info *fbi,
const struct fb_videomode *m)
static void set_dma_control0(struct pxa168fb_info *fbi)
static void set_dma_control1(struct pxa168fb_info *fbi, int sync)
static void set_graphics_start(struct fb_info *info, int xoffset, int yoffset)
static void set_dumb_panel_control(struct fb_info *info)
static void set_dumb_screen_dimensions(struct fb_info *info)
static int pxa168fb_set_par(struct fb_info *info)
static unsigned int chan_to_field(unsigned int chan, struct fb_bitfield *bf)
static u32 to_rgb(u16 red, u16 green, u16 blue)
static int
pxa168fb_setcolreg(unsigned int regno, unsigned int red, unsigned int green,
unsigned int blue, unsigned int trans, struct fb_info *info)
static int pxa168fb_blank(int blank, struct fb_info *info)
static int pxa168fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static irqreturn_t pxa168fb_handle_irq(int irq, void *dev_id)
static struct fb_ops pxa168fb_ops = ;
static int __devinit pxa168fb_init_mode(struct fb_info *info,
struct pxa168fb_mach_info *mi)
static int __devinit pxa168fb_probe(struct platform_device *pdev)
static int __devexit pxa168fb_remove(struct platform_device *pdev)
static struct platform_driver pxa168fb_driver = ;
static int __init pxa168fb_init(void)
module_init(pxa168fb_init);
static void __exit pxa168fb_exit(void)
module_exit(pxa168fb_exit);
MODULE_AUTHOR("Lennert Buytenhek <buytenh@marvell.com> "
"Green Wan <gwan@marvell.com>");
MODULE_DESCRIPTION("Framebuffer driver for PXA168/910");
MODULE_LICENSE("GPL");

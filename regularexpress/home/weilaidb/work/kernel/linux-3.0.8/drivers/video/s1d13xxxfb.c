#define PFX	"s1d13xxxfb: "
#define BLIT	"s1d13xxxfb_bitblt: "
static DEFINE_SPINLOCK(s1d13xxxfb_bitblt_lock);
static const int s1d13xxxfb_prod_ids[] = ;
static const char *s1d13xxxfb_prod_names[] = ;
static struct fb_fix_screeninfo __devinitdata s1d13xxxfb_fix = ;
static inline u8
s1d13xxxfb_readreg(struct s1d13xxxfb_par *par, u16 regno)
static inline void
s1d13xxxfb_writereg(struct s1d13xxxfb_par *par, u16 regno, u8 value)
static inline void
s1d13xxxfb_runinit(struct s1d13xxxfb_par *par,
const struct s1d13xxxfb_regval *initregs,
const unsigned int size)
static inline void
lcd_enable(struct s1d13xxxfb_par *par, int enable)
static inline void
crt_enable(struct s1d13xxxfb_par *par, int enable)
static inline void
s1d13xxxfb_setup_pseudocolour(struct fb_info *info)
static inline void
s1d13xxxfb_setup_truecolour(struct fb_info *info)
static int
s1d13xxxfb_set_par(struct fb_info *info)
static int
s1d13xxxfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int
s1d13xxxfb_blank(int blank_mode, struct fb_info *info)
static int
s1d13xxxfb_pan_display(struct fb_var_screeninfo *var, struct fb_info *info)
static u8
bltbit_wait_bitclear(struct fb_info *info, u8 bit, int timeout)
static void
s1d13xxxfb_bitblt_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void
s1d13xxxfb_bitblt_solidfill(struct fb_info *info, const struct fb_fillrect *rect)
static struct fb_ops s1d13xxxfb_fbops = ;
static int s1d13xxxfb_width_tab[2][4] __devinitdata = ;
static void __devinit
s1d13xxxfb_fetch_hw_state(struct fb_info *info)
static int
s1d13xxxfb_remove(struct platform_device *pdev)
static int __devinit
s1d13xxxfb_probe(struct platform_device *pdev)
static int s1d13xxxfb_suspend(struct platform_device *dev, pm_message_t state)
static int s1d13xxxfb_resume(struct platform_device *dev)
static struct platform_driver s1d13xxxfb_driver = ;
static int __init
s1d13xxxfb_init(void)
static void __exit
s1d13xxxfb_exit(void)
module_init(s1d13xxxfb_init);
module_exit(s1d13xxxfb_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Framebuffer driver for S1D13xxx devices");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>, Thibaut VARENE <varenet@parisc-linux.org>");

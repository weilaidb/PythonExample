#undef writel
#define writel(v, r) do  while (0)
#define S3C_FB_VSYNC_IRQ_EN	0
#define VSYNC_TIMEOUT_MSEC 50
struct s3c_fb;
#define VALID_BPP(x) (1 << ((x) - 1))
#define OSD_BASE(win, variant) ((variant).osd + ((win) * (variant).osd_stride))
#define VIDOSD_A(win, variant) (OSD_BASE(win, variant) + 0x00)
#define VIDOSD_B(win, variant) (OSD_BASE(win, variant) + 0x04)
#define VIDOSD_C(win, variant) (OSD_BASE(win, variant) + 0x08)
#define VIDOSD_D(win, variant) (OSD_BASE(win, variant) + 0x0C)
struct s3c_fb_variant ;
struct s3c_fb_win_variant ;
struct s3c_fb_driverdata ;
struct s3c_fb_palette ;
struct s3c_fb_win ;
struct s3c_fb_vsync ;
struct s3c_fb ;
static bool s3c_fb_validate_win_bpp(struct s3c_fb_win *win, unsigned int bpp)
static int s3c_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int s3c_fb_calc_pixclk(struct s3c_fb *sfb, unsigned int pixclk)
static int s3c_fb_align_word(unsigned int bpp, unsigned int pix)
static void vidosd_set_size(struct s3c_fb_win *win, u32 size)
static void vidosd_set_alpha(struct s3c_fb_win *win, u32 alpha)
static void shadow_protect_win(struct s3c_fb_win *win, bool protect)
static int s3c_fb_set_par(struct fb_info *info)
static void s3c_fb_update_palette(struct s3c_fb *sfb,
struct s3c_fb_win *win,
unsigned int reg,
u32 value)
static inline unsigned int chan_to_field(unsigned int chan,
struct fb_bitfield *bf)
static int s3c_fb_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static void s3c_fb_enable(struct s3c_fb *sfb, int enable)
static int s3c_fb_blank(int blank_mode, struct fb_info *info)
static int s3c_fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static void s3c_fb_enable_irq(struct s3c_fb *sfb)
static void s3c_fb_disable_irq(struct s3c_fb *sfb)
static irqreturn_t s3c_fb_irq(int irq, void *dev_id)
static int s3c_fb_wait_for_vsync(struct s3c_fb *sfb, u32 crtc)
static int s3c_fb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int s3c_fb_open(struct fb_info *info, int user)
static int s3c_fb_release(struct fb_info *info, int user)
static struct fb_ops s3c_fb_ops = ;
static void __devinit s3c_fb_missing_pixclock(struct fb_videomode *mode)
static int __devinit s3c_fb_alloc_memory(struct s3c_fb *sfb,
struct s3c_fb_win *win)
static void s3c_fb_free_memory(struct s3c_fb *sfb, struct s3c_fb_win *win)
static void s3c_fb_release_win(struct s3c_fb *sfb, struct s3c_fb_win *win)
static int __devinit s3c_fb_probe_win(struct s3c_fb *sfb, unsigned int win_no,
struct s3c_fb_win_variant *variant,
struct s3c_fb_win **res)
static void s3c_fb_clear_win(struct s3c_fb *sfb, int win)
static int __devinit s3c_fb_probe(struct platform_device *pdev)
static int __devexit s3c_fb_remove(struct platform_device *pdev)
static int s3c_fb_suspend(struct device *dev)
static int s3c_fb_resume(struct device *dev)
static int s3c_fb_runtime_suspend(struct device *dev)
static int s3c_fb_runtime_resume(struct device *dev)
#define s3c_fb_suspend NULL
#define s3c_fb_resume  NULL
#define s3c_fb_runtime_suspend NULL
#define s3c_fb_runtime_resume NULL
#define VALID_BPP124 (VALID_BPP(1) | VALID_BPP(2) | VALID_BPP(4))
#define VALID_BPP1248 (VALID_BPP124 | VALID_BPP(8))
static struct s3c_fb_win_variant s3c_fb_data_64xx_wins[] = ;
static struct s3c_fb_win_variant s3c_fb_data_s5p_wins[] = ;
static struct s3c_fb_driverdata s3c_fb_data_64xx = ;
static struct s3c_fb_driverdata s3c_fb_data_s5pc100 = ;
static struct s3c_fb_driverdata s3c_fb_data_s5pv210 = ;
static struct s3c_fb_driverdata s3c_fb_data_s3c2443 = ;
static struct platform_device_id s3c_fb_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, s3c_fb_driver_ids);
static const struct dev_pm_ops s3cfb_pm_ops = ;
static struct platform_driver s3c_fb_driver = ;
static int __init s3c_fb_init(void)
static void __exit s3c_fb_cleanup(void)
module_init(s3c_fb_init);
module_exit(s3c_fb_cleanup);
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("Samsung S3C SoC Framebuffer driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s3c-fb");

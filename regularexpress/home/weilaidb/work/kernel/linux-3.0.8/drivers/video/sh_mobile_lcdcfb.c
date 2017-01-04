#define SIDE_B_OFFSET 0x1000
#define MIRROR_OFFSET 0x2000
#define _LDDCKR 0x410
#define _LDDCKSTPR 0x414
#define _LDINTR 0x468
#define _LDSR 0x46c
#define _LDCNT1R 0x470
#define _LDCNT2R 0x474
#define _LDRCNTR 0x478
#define _LDDDSR 0x47c
#define _LDDWD0R 0x800
#define _LDDRDR 0x840
#define _LDDWAR 0x900
#define _LDDRAR 0x904
static int lcdc_shared_regs[] = ;
#define NR_SHARED_REGS ARRAY_SIZE(lcdc_shared_regs)
#define MAX_XRES 1920
#define MAX_YRES 1080
static unsigned long lcdc_offs_mainlcd[NR_CH_REGS] = ;
static unsigned long lcdc_offs_sublcd[NR_CH_REGS] = ;
#define START_LCDC	0x00000001
#define LCDC_RESET	0x00000100
#define DISPLAY_BEU	0x00000008
#define LCDC_ENABLE	0x00000001
#define LDINTR_FE	0x00000400
#define LDINTR_VSE	0x00000200
#define LDINTR_VEE	0x00000100
#define LDINTR_FS	0x00000004
#define LDINTR_VSS	0x00000002
#define LDINTR_VES	0x00000001
#define LDRCNTR_SRS	0x00020000
#define LDRCNTR_SRC	0x00010000
#define LDRCNTR_MRS	0x00000002
#define LDRCNTR_MRC	0x00000001
#define LDSR_MRS	0x00000100
static const struct fb_videomode default_720p = ;
struct sh_mobile_lcdc_priv ;
static bool banked(int reg_nr)
static void lcdc_write_chan(struct sh_mobile_lcdc_chan *chan,
int reg_nr, unsigned long data)
static void lcdc_write_chan_mirror(struct sh_mobile_lcdc_chan *chan,
int reg_nr, unsigned long data)
static unsigned long lcdc_read_chan(struct sh_mobile_lcdc_chan *chan,
int reg_nr)
static void lcdc_write(struct sh_mobile_lcdc_priv *priv,
unsigned long reg_offs, unsigned long data)
static unsigned long lcdc_read(struct sh_mobile_lcdc_priv *priv,
unsigned long reg_offs)
static void lcdc_wait_bit(struct sh_mobile_lcdc_priv *priv,
unsigned long reg_offs,
unsigned long mask, unsigned long until)
static int lcdc_chan_is_sublcd(struct sh_mobile_lcdc_chan *chan)
static void lcdc_sys_write_index(void *handle, unsigned long data)
static void lcdc_sys_write_data(void *handle, unsigned long data)
static unsigned long lcdc_sys_read_data(void *handle)
struct sh_mobile_lcdc_sys_bus_ops sh_mobile_lcdc_sys_bus_ops = ;
static void sh_mobile_lcdc_clk_on(struct sh_mobile_lcdc_priv *priv)
static void sh_mobile_lcdc_clk_off(struct sh_mobile_lcdc_priv *priv)
static int sh_mobile_lcdc_sginit(struct fb_info *info,
struct list_head *pagelist)
static void sh_mobile_lcdc_deferred_io(struct fb_info *info,
struct list_head *pagelist)
static void sh_mobile_lcdc_deferred_io_touch(struct fb_info *info)
static irqreturn_t sh_mobile_lcdc_irq(int irq, void *data)
static void sh_mobile_lcdc_start_stop(struct sh_mobile_lcdc_priv *priv,
int start)
static void sh_mobile_lcdc_geometry(struct sh_mobile_lcdc_chan *ch)
static int sh_mobile_lcdc_start(struct sh_mobile_lcdc_priv *priv)
static void sh_mobile_lcdc_stop(struct sh_mobile_lcdc_priv *priv)
static int sh_mobile_lcdc_check_interface(struct sh_mobile_lcdc_chan *ch)
static int sh_mobile_lcdc_setup_clocks(struct platform_device *pdev,
int clock_source,
struct sh_mobile_lcdc_priv *priv)
static int sh_mobile_lcdc_setcolreg(u_int regno,
u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static struct fb_fix_screeninfo sh_mobile_lcdc_fix  = ;
static void sh_mobile_lcdc_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void sh_mobile_lcdc_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void sh_mobile_lcdc_imageblit(struct fb_info *info,
const struct fb_image *image)
static int sh_mobile_fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int sh_mobile_wait_for_vsync(struct fb_info *info)
static int sh_mobile_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static void sh_mobile_fb_reconfig(struct fb_info *info)
static int sh_mobile_release(struct fb_info *info, int user)
static int sh_mobile_open(struct fb_info *info, int user)
static int sh_mobile_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int sh_mobile_lcdc_blank(int blank, struct fb_info *info)
static struct fb_ops sh_mobile_lcdc_ops = ;
static int sh_mobile_lcdc_update_bl(struct backlight_device *bdev)
static int sh_mobile_lcdc_get_brightness(struct backlight_device *bdev)
static int sh_mobile_lcdc_check_fb(struct backlight_device *bdev,
struct fb_info *info)
static struct backlight_ops sh_mobile_lcdc_bl_ops = ;
static struct backlight_device *sh_mobile_lcdc_bl_probe(struct device *parent,
struct sh_mobile_lcdc_chan *ch)
static void sh_mobile_lcdc_bl_remove(struct backlight_device *bdev)
static int sh_mobile_lcdc_set_bpp(struct fb_var_screeninfo *var, int bpp,
int nonstd)
static int sh_mobile_lcdc_suspend(struct device *dev)
static int sh_mobile_lcdc_resume(struct device *dev)
static int sh_mobile_lcdc_runtime_suspend(struct device *dev)
static int sh_mobile_lcdc_runtime_resume(struct device *dev)
static const struct dev_pm_ops sh_mobile_lcdc_dev_pm_ops = ;
static int sh_mobile_lcdc_notify(struct notifier_block *nb,
unsigned long action, void *data)
static int sh_mobile_lcdc_remove(struct platform_device *pdev);
static int __devinit sh_mobile_lcdc_probe(struct platform_device *pdev)
static int sh_mobile_lcdc_remove(struct platform_device *pdev)
static struct platform_driver sh_mobile_lcdc_driver = ;
static int __init sh_mobile_lcdc_init(void)
static void __exit sh_mobile_lcdc_exit(void)
module_init(sh_mobile_lcdc_init);
module_exit(sh_mobile_lcdc_exit);
MODULE_DESCRIPTION("SuperH Mobile LCDC Framebuffer driver");
MODULE_AUTHOR("Magnus Damm <damm@opensource.se>");
MODULE_LICENSE("GPL v2");

static void w100_suspend(u32 mode);
static void w100_vsync(void);
static void w100_hw_init(struct w100fb_par*);
static void w100_pwm_setup(struct w100fb_par*);
static void w100_init_clocks(struct w100fb_par*);
static void w100_setup_memory(struct w100fb_par*);
static void w100_init_lcd(struct w100fb_par*);
static void w100_set_dispregs(struct w100fb_par*);
static void w100_update_enable(void);
static void w100_update_disable(void);
static void calc_hsync(struct w100fb_par *par);
static void w100_init_graphic_engine(struct w100fb_par *par);
struct w100_pll_info *w100_get_xtal_table(unsigned int freq) __devinit;
#define MAX_PALETTES      16
#define W100_SUSPEND_EXTMEM 0
#define W100_SUSPEND_ALL    1
#define BITS_PER_PIXEL    16
static void *remapped_base;
static void *remapped_regs;
static void *remapped_fbuf;
#define REMAPPED_FB_LEN   0x15ffff
#define W100_FB_BASE MEM_EXT_BASE_VALUE
static ssize_t flip_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t flip_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(flip, 0644, flip_show, flip_store);
static ssize_t w100fb_reg_read(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(reg_read, 0200, NULL, w100fb_reg_read);
static ssize_t w100fb_reg_write(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(reg_write, 0200, NULL, w100fb_reg_write);
static ssize_t fastpllclk_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t fastpllclk_store(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(fastpllclk, 0644, fastpllclk_show, fastpllclk_store);
unsigned long w100fb_get_hsynclen(struct device *dev)
EXPORT_SYMBOL(w100fb_get_hsynclen);
static void w100fb_clear_screen(struct w100fb_par *par)
static int w100fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static int w100fb_blank(int blank_mode, struct fb_info *info)
static void w100_fifo_wait(int entries)
static int w100fb_sync(struct fb_info *info)
static void w100_init_graphic_engine(struct w100fb_par *par)
static void w100fb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect)
static void w100fb_copyarea(struct fb_info *info,
const struct fb_copyarea *area)
static void w100fb_activate_var(struct w100fb_par *par)
static struct w100_mode *w100fb_get_mode(struct w100fb_par *par, unsigned int *x, unsigned int *y, int saveval)
static int w100fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int w100fb_set_par(struct fb_info *info)
static struct fb_ops w100fb_ops = ;
static void w100fb_save_vidmem(struct w100fb_par *par)
static void w100fb_restore_vidmem(struct w100fb_par *par)
static int w100fb_suspend(struct platform_device *dev, pm_message_t state)
static int w100fb_resume(struct platform_device *dev)
#define w100fb_suspend  NULL
#define w100fb_resume   NULL
int __devinit w100fb_probe(struct platform_device *pdev)
static int __devexit w100fb_remove(struct platform_device *pdev)
static void w100_soft_reset(void)
static void w100_update_disable(void)
static void w100_update_enable(void)
unsigned long w100fb_gpio_read(int port)
void w100fb_gpio_write(int port, unsigned long value)
EXPORT_SYMBOL(w100fb_gpio_read);
EXPORT_SYMBOL(w100fb_gpio_write);
static void w100_hw_init(struct w100fb_par *par)
struct power_state ;
static struct power_state w100_pwr_state;
static struct w100_pll_info xtal_12500000[] = ;
static struct w100_pll_info xtal_14318000[] = ;
static struct w100_pll_info xtal_16000000[] = ;
static struct pll_entries  w100_pll_tables[] = ;
struct w100_pll_info __devinit *w100_get_xtal_table(unsigned int freq)
static unsigned int w100_get_testcount(unsigned int testclk_sel)
static int w100_pll_adjust(struct w100_pll_info *pll)
static int w100_pll_calibration(struct w100_pll_info *pll)
static int w100_pll_set_clk(struct w100_pll_info *pll)
static int w100_set_pll_freq(struct w100fb_par *par, unsigned int freq)
static void w100_pwm_setup(struct w100fb_par *par)
static void w100_init_clocks(struct w100fb_par *par)
static void w100_init_lcd(struct w100fb_par *par)
static void w100_setup_memory(struct w100fb_par *par)
static void w100_set_dispregs(struct w100fb_par *par)
static void calc_hsync(struct w100fb_par *par)
static void w100_suspend(u32 mode)
static void w100_vsync(void)
static struct platform_driver w100fb_driver = ;
int __init w100fb_init(void)
void __exit w100fb_cleanup(void)
module_init(w100fb_init);
module_exit(w100fb_cleanup);
MODULE_DESCRIPTION("ATI Imageon w100 framebuffer driver");
MODULE_LICENSE("GPL");

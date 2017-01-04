static int debug	= 1;
static int debug	= 0;
#define dprintk(msg...)	if (debug)
static int is_s3c2412(struct s3c2410fb_info *fbi)
static void s3c2410fb_set_lcdaddr(struct fb_info *info)
static unsigned int s3c2410fb_calc_pixclk(struct s3c2410fb_info *fbi,
unsigned long pixclk)
static int s3c2410fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void s3c2410fb_calculate_stn_lcd_regs(const struct fb_info *info,
struct s3c2410fb_hw *regs)
static void s3c2410fb_calculate_tft_lcd_regs(const struct fb_info *info,
struct s3c2410fb_hw *regs)
static void s3c2410fb_activate_var(struct fb_info *info)
static int s3c2410fb_set_par(struct fb_info *info)
static void schedule_palette_update(struct s3c2410fb_info *fbi,
unsigned int regno, unsigned int val)
static inline unsigned int chan_to_field(unsigned int chan,
struct fb_bitfield *bf)
static int s3c2410fb_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static void s3c2410fb_lcd_enable(struct s3c2410fb_info *fbi, int enable)
static int s3c2410fb_blank(int blank_mode, struct fb_info *info)
static int s3c2410fb_debug_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int s3c2410fb_debug_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static DEVICE_ATTR(debug, 0666, s3c2410fb_debug_show, s3c2410fb_debug_store);
static struct fb_ops s3c2410fb_ops = ;
static int __devinit s3c2410fb_map_video_memory(struct fb_info *info)
static inline void s3c2410fb_unmap_video_memory(struct fb_info *info)
static inline void modify_gpio(void __iomem *reg,
unsigned long set, unsigned long mask)
static int s3c2410fb_init_registers(struct fb_info *info)
static void s3c2410fb_write_palette(struct s3c2410fb_info *fbi)
static irqreturn_t s3c2410fb_irq(int irq, void *dev_id)
static int s3c2410fb_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int s3c2410fb_cpufreq_register(struct s3c2410fb_info *info)
static inline void s3c2410fb_cpufreq_deregister(struct s3c2410fb_info *info)
static inline int s3c2410fb_cpufreq_register(struct s3c2410fb_info *info)
static inline void s3c2410fb_cpufreq_deregister(struct s3c2410fb_info *info)
static char driver_name[] = "s3c2410fb";
static int __devinit s3c24xxfb_probe(struct platform_device *pdev,
enum s3c_drv_type drv_type)
static int __devinit s3c2410fb_probe(struct platform_device *pdev)
static int __devinit s3c2412fb_probe(struct platform_device *pdev)
static int __devexit s3c2410fb_remove(struct platform_device *pdev)
static int s3c2410fb_suspend(struct platform_device *dev, pm_message_t state)
static int s3c2410fb_resume(struct platform_device *dev)
#define s3c2410fb_suspend NULL
#define s3c2410fb_resume  NULL
static struct platform_driver s3c2410fb_driver = ;
static struct platform_driver s3c2412fb_driver = ;
int __init s3c2410fb_init(void)
static void __exit s3c2410fb_cleanup(void)
module_init(s3c2410fb_init);
module_exit(s3c2410fb_cleanup);
MODULE_AUTHOR("Arnaud Patard <arnaud.patard@rtp-net.org>, "
"Ben Dooks <ben-linux@fluff.org>");
MODULE_DESCRIPTION("Framebuffer driver for the s3c2410");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s3c2410-lcd");
MODULE_ALIAS("platform:s3c2412-lcd");

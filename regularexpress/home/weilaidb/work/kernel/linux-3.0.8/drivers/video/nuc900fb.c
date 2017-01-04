static void nuc900fb_set_lcdaddr(struct fb_info *info)
static unsigned int nuc900fb_calc_pixclk(struct nuc900fb_info *fbi,
unsigned long pixclk)
static int nuc900fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void nuc900fb_calculate_lcd_regs(const struct fb_info *info,
struct nuc900fb_hw *regs)
static void nuc900fb_activate_var(struct fb_info *info)
static int nuc900fb_set_par(struct fb_info *info)
static inline unsigned int chan_to_field(unsigned int chan,
struct fb_bitfield *bf)
static int nuc900fb_setcolreg(unsigned regno,
unsigned red, unsigned green, unsigned blue,
unsigned transp, struct fb_info *info)
static int nuc900fb_blank(int blank_mode, struct fb_info *info)
static struct fb_ops nuc900fb_ops = ;
static inline void modify_gpio(void __iomem *reg,
unsigned long set, unsigned long mask)
static int nuc900fb_init_registers(struct fb_info *info)
static int __init nuc900fb_map_video_memory(struct fb_info *info)
static inline void nuc900fb_unmap_video_memory(struct fb_info *info)
static irqreturn_t nuc900fb_irqhandler(int irq, void *dev_id)
static int nuc900fb_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int nuc900fb_cpufreq_register(struct nuc900fb_info *fbi)
static inline void nuc900fb_cpufreq_deregister(struct nuc900fb_info *fbi)
static inline int nuc900fb_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int nuc900fb_cpufreq_register(struct nuc900fb_info *fbi)
static inline void nuc900fb_cpufreq_deregister(struct nuc900fb_info *info)
static char driver_name[] = "nuc900fb";
static int __devinit nuc900fb_probe(struct platform_device *pdev)
static void nuc900fb_stop_lcd(struct fb_info *info)
static int nuc900fb_remove(struct platform_device *pdev)
static int nuc900fb_suspend(struct platform_device *dev, pm_message_t state)
static int nuc900fb_resume(struct platform_device *dev)
#define nuc900fb_suspend NULL
#define nuc900fb_resume  NULL
static struct platform_driver nuc900fb_driver = ;
int __devinit nuc900fb_init(void)
static void __exit nuc900fb_cleanup(void)
module_init(nuc900fb_init);
module_exit(nuc900fb_cleanup);
MODULE_DESCRIPTION("Framebuffer driver for the NUC900");
MODULE_LICENSE("GPL");

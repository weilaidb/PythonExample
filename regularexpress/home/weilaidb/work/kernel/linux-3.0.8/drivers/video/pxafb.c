#define DEBUG_VAR 1
#define LCCR0_INVALID_CONFIG_MASK	(LCCR0_OUM | LCCR0_BM | LCCR0_QDM |\
LCCR0_DIS | LCCR0_EFM | LCCR0_IUM |\
LCCR0_SFM | LCCR0_LDM | LCCR0_ENB)
#define LCCR3_INVALID_CONFIG_MASK	(LCCR3_HSP | LCCR3_VSP |\
LCCR3_PCD | LCCR3_BPP(0xf))
static int pxafb_activate_var(struct fb_var_screeninfo *var,
struct pxafb_info *);
static void set_ctrlr_state(struct pxafb_info *fbi, u_int state);
static void setup_base_frame(struct pxafb_info *fbi,
struct fb_var_screeninfo *var, int branch);
static int setup_frame_dma(struct pxafb_info *fbi, int dma, int pal,
unsigned long offset, size_t size);
static unsigned long video_mem_size = 0;
static inline unsigned long
lcd_readl(struct pxafb_info *fbi, unsigned int off)
static inline void
lcd_writel(struct pxafb_info *fbi, unsigned int off, unsigned long val)
static inline void pxafb_schedule_work(struct pxafb_info *fbi, u_int state)
static inline u_int chan_to_field(u_int chan, struct fb_bitfield *bf)
static int
pxafb_setpalettereg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static int
pxafb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static inline int var_to_depth(struct fb_var_screeninfo *var)
static int pxafb_var_to_bpp(struct fb_var_screeninfo *var)
static uint32_t pxafb_var_to_lccr3(struct fb_var_screeninfo *var)
#define SET_PIXFMT(v, r, g, b, t)				\
()
static void pxafb_set_pixfmt(struct fb_var_screeninfo *var, int depth)
static unsigned int pxafb_display_dma_period(struct fb_var_screeninfo *var)
static struct pxafb_mode_info *pxafb_getmode(struct pxafb_mach_info *mach,
struct fb_var_screeninfo *var)
static void pxafb_setmode(struct fb_var_screeninfo *var,
struct pxafb_mode_info *mode)
static int pxafb_adjust_timing(struct pxafb_info *fbi,
struct fb_var_screeninfo *var)
static int pxafb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static int pxafb_set_par(struct fb_info *info)
static int pxafb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int pxafb_blank(int blank, struct fb_info *info)
static struct fb_ops pxafb_ops = ;
static void overlay1fb_setup(struct pxafb_layer *ofb)
static void overlay1fb_enable(struct pxafb_layer *ofb)
static void overlay1fb_disable(struct pxafb_layer *ofb)
static void overlay2fb_setup(struct pxafb_layer *ofb)
static void overlay2fb_enable(struct pxafb_layer *ofb)
static void overlay2fb_disable(struct pxafb_layer *ofb)
static struct pxafb_layer_ops ofb_ops[] = ;
static int overlayfb_open(struct fb_info *info, int user)
static int overlayfb_release(struct fb_info *info, int user)
static int overlayfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int overlayfb_check_video_memory(struct pxafb_layer *ofb)
static int overlayfb_set_par(struct fb_info *info)
static struct fb_ops overlay_fb_ops = ;
static void __devinit init_pxafb_overlay(struct pxafb_info *fbi,
struct pxafb_layer *ofb, int id)
static inline int pxafb_overlay_supported(void)
static int __devinit pxafb_overlay_map_video_memory(struct pxafb_info *pxafb,
struct pxafb_layer *ofb)
static void __devinit pxafb_overlay_init(struct pxafb_info *fbi)
static void __devexit pxafb_overlay_exit(struct pxafb_info *fbi)
static inline void pxafb_overlay_init(struct pxafb_info *fbi)
static inline void pxafb_overlay_exit(struct pxafb_info *fbi)
static inline unsigned int get_pcd(struct pxafb_info *fbi,
unsigned int pixclock)
static inline void set_hsync_time(struct pxafb_info *fbi, unsigned int pcd)
unsigned long pxafb_get_hsync_time(struct device *dev)
EXPORT_SYMBOL(pxafb_get_hsync_time);
static int setup_frame_dma(struct pxafb_info *fbi, int dma, int pal,
unsigned long start, size_t size)
static void setup_base_frame(struct pxafb_info *fbi,
struct fb_var_screeninfo *var,
int branch)
static int setup_smart_dma(struct pxafb_info *fbi)
int pxafb_smart_flush(struct fb_info *info)
int pxafb_smart_queue(struct fb_info *info, uint16_t *cmds, int n_cmds)
static unsigned int __smart_timing(unsigned time_ns, unsigned long lcd_clk)
static void setup_smart_timing(struct pxafb_info *fbi,
struct fb_var_screeninfo *var)
static int pxafb_smart_thread(void *arg)
static int pxafb_smart_init(struct pxafb_info *fbi)
int pxafb_smart_queue(struct fb_info *info, uint16_t *cmds, int n_cmds)
int pxafb_smart_flush(struct fb_info *info)
static inline int pxafb_smart_init(struct pxafb_info *fbi)
static void setup_parallel_timing(struct pxafb_info *fbi,
struct fb_var_screeninfo *var)
static int pxafb_activate_var(struct fb_var_screeninfo *var,
struct pxafb_info *fbi)
static inline void __pxafb_backlight_power(struct pxafb_info *fbi, int on)
static inline void __pxafb_lcd_power(struct pxafb_info *fbi, int on)
static void pxafb_enable_controller(struct pxafb_info *fbi)
static void pxafb_disable_controller(struct pxafb_info *fbi)
static irqreturn_t pxafb_handle_irq(int irq, void *dev_id)
static void set_ctrlr_state(struct pxafb_info *fbi, u_int state)
static void pxafb_task(struct work_struct *work)
static int
pxafb_freq_transition(struct notifier_block *nb, unsigned long val, void *data)
static int
pxafb_freq_policy(struct notifier_block *nb, unsigned long val, void *data)
static int pxafb_suspend(struct device *dev)
static int pxafb_resume(struct device *dev)
static const struct dev_pm_ops pxafb_pm_ops = ;
static int __devinit pxafb_init_video_memory(struct pxafb_info *fbi)
static void pxafb_decode_mach_info(struct pxafb_info *fbi,
struct pxafb_mach_info *inf)
static struct pxafb_info * __devinit pxafb_init_fbinfo(struct device *dev)
static int __devinit parse_opt_mode(struct device *dev, const char *this_opt)
static int __devinit parse_opt(struct device *dev, char *this_opt)
static int __devinit pxafb_parse_options(struct device *dev, char *options)
static char g_options[256] __devinitdata = "";
static int __init pxafb_setup_options(void)
#define pxafb_setup_options()		(0)
module_param_string(options, g_options, sizeof(g_options), 0);
MODULE_PARM_DESC(options, "LCD parameters (see Documentation/fb/pxafb.txt)");
#define pxafb_parse_options(...)	(0)
#define pxafb_setup_options()		(0)
static void __devinit pxafb_check_options(struct device *dev,
struct pxafb_mach_info *inf)
#define pxafb_check_options(...)	do  while (0)
static int __devinit pxafb_probe(struct platform_device *dev)
static int __devexit pxafb_remove(struct platform_device *dev)
static struct platform_driver pxafb_driver = ;
static int __init pxafb_init(void)
static void __exit pxafb_exit(void)
module_init(pxafb_init);
module_exit(pxafb_exit);
MODULE_DESCRIPTION("loadable framebuffer driver for PXA");
MODULE_LICENSE("GPL");

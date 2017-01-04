#define DEBUG 0
#define DEBUG_VAR 1
#undef ASSABET_PAL_VIDEO
extern void (*sa1100fb_backlight_power)(int on);
extern void (*sa1100fb_lcd_power)(int on);
static struct sa1100fb_rgb rgb_4 = ;
static struct sa1100fb_rgb rgb_8 = ;
static struct sa1100fb_rgb def_rgb_16 = ;
static struct sa1100fb_mach_info lq039q2ds54_info __initdata = ;
static struct sa1100fb_mach_info pal_info __initdata = ;
static struct sa1100fb_mach_info h3600_info __initdata = ;
static struct sa1100fb_rgb h3600_rgb_16 = ;
static struct sa1100fb_mach_info h3100_info __initdata = ;
static struct sa1100fb_mach_info collie_info __initdata = ;
static struct sa1100fb_mach_info lart_grey_info __initdata = ;
static struct sa1100fb_mach_info lart_color_info __initdata = ;
static struct sa1100fb_mach_info lart_video_info __initdata = ;
static struct sa1100fb_mach_info lart_kit01_info __initdata = ;
static struct sa1100fb_mach_info shannon_info __initdata = ;
static struct sa1100fb_mach_info * __init
sa1100fb_get_machine_info(struct sa1100fb_info *fbi)
static int sa1100fb_activate_var(struct fb_var_screeninfo *var, struct sa1100fb_info *);
static void set_ctrlr_state(struct sa1100fb_info *fbi, u_int state);
static inline void sa1100fb_schedule_work(struct sa1100fb_info *fbi, u_int state)
static inline u_int chan_to_field(u_int chan, struct fb_bitfield *bf)
static inline u_int palette_pbs(struct fb_var_screeninfo *var)
static int
sa1100fb_setpalettereg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static int
sa1100fb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int trans, struct fb_info *info)
static inline unsigned int sa1100fb_display_dma_period(struct fb_var_screeninfo *var)
static int
sa1100fb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static inline void sa1100fb_set_truecolor(u_int is_true_color)
static int sa1100fb_set_par(struct fb_info *info)
static int sa1100fb_blank(int blank, struct fb_info *info)
static int sa1100fb_mmap(struct fb_info *info,
struct vm_area_struct *vma)
static struct fb_ops sa1100fb_ops = ;
static inline unsigned int get_pcd(unsigned int pixclock, unsigned int cpuclock)
static int sa1100fb_activate_var(struct fb_var_screeninfo *var, struct sa1100fb_info *fbi)
static inline void __sa1100fb_backlight_power(struct sa1100fb_info *fbi, int on)
static inline void __sa1100fb_lcd_power(struct sa1100fb_info *fbi, int on)
static void sa1100fb_setup_gpio(struct sa1100fb_info *fbi)
static void sa1100fb_enable_controller(struct sa1100fb_info *fbi)
static void sa1100fb_disable_controller(struct sa1100fb_info *fbi)
static irqreturn_t sa1100fb_handle_irq(int irq, void *dev_id)
static void set_ctrlr_state(struct sa1100fb_info *fbi, u_int state)
static void sa1100fb_task(struct work_struct *w)
static unsigned int sa1100fb_min_dma_period(struct sa1100fb_info *fbi)
static int
sa1100fb_freq_transition(struct notifier_block *nb, unsigned long val,
void *data)
static int
sa1100fb_freq_policy(struct notifier_block *nb, unsigned long val,
void *data)
static int sa1100fb_suspend(struct platform_device *dev, pm_message_t state)
static int sa1100fb_resume(struct platform_device *dev)
#define sa1100fb_suspend	NULL
#define sa1100fb_resume		NULL
static int __init sa1100fb_map_video_memory(struct sa1100fb_info *fbi)
static struct fb_monspecs monspecs __initdata = ;
static struct sa1100fb_info * __init sa1100fb_init_fbinfo(struct device *dev)
static int __devinit sa1100fb_probe(struct platform_device *pdev)
static struct platform_driver sa1100fb_driver = ;
int __init sa1100fb_init(void)
int __init sa1100fb_setup(char *options)
module_init(sa1100fb_init);
MODULE_DESCRIPTION("StrongARM-1100/1110 framebuffer driver");
MODULE_LICENSE("GPL");

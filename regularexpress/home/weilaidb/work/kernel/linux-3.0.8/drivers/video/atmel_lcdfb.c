#define lcdc_readl(sinfo, reg)		__raw_readl((sinfo)->mmio+(reg))
#define lcdc_writel(sinfo, reg, val)	__raw_writel((val), (sinfo)->mmio+(reg))
#define ATMEL_LCDC_CVAL_DEFAULT		0xc8
#define ATMEL_LCDC_DMA_BURST_LEN	8
#define ATMEL_LCDC_FIFO_SIZE		512
#if defined(CONFIG_ARCH_AT91)
#define	ATMEL_LCDFB_FBINFO_DEFAULT	(FBINFO_DEFAULT \
| FBINFO_PARTIAL_PAN_OK \
| FBINFO_HWACCEL_YPAN)
static inline void atmel_lcdfb_update_dma2d(struct atmel_lcdfb_info *sinfo,
struct fb_var_screeninfo *var)
#elif defined(CONFIG_AVR32)
#define	ATMEL_LCDFB_FBINFO_DEFAULT	(FBINFO_DEFAULT \
| FBINFO_PARTIAL_PAN_OK \
| FBINFO_HWACCEL_XPAN \
| FBINFO_HWACCEL_YPAN)
static void atmel_lcdfb_update_dma2d(struct atmel_lcdfb_info *sinfo,
struct fb_var_screeninfo *var)
static u32 contrast_ctr = ATMEL_LCDC_PS_DIV8
| ATMEL_LCDC_POL_POSITIVE
| ATMEL_LCDC_ENA_PWMENABLE;
static int atmel_bl_update_status(struct backlight_device *bl)
static int atmel_bl_get_brightness(struct backlight_device *bl)
static const struct backlight_ops atmel_lcdc_bl_ops = ;
static void init_backlight(struct atmel_lcdfb_info *sinfo)
static void exit_backlight(struct atmel_lcdfb_info *sinfo)
static void init_backlight(struct atmel_lcdfb_info *sinfo)
static void exit_backlight(struct atmel_lcdfb_info *sinfo)
static void init_contrast(struct atmel_lcdfb_info *sinfo)
static struct fb_fix_screeninfo atmel_lcdfb_fix __initdata = ;
static unsigned long compute_hozval(unsigned long xres, unsigned long lcdcon2)
static void atmel_lcdfb_stop_nowait(struct atmel_lcdfb_info *sinfo)
static void atmel_lcdfb_stop(struct atmel_lcdfb_info *sinfo)
static void atmel_lcdfb_start(struct atmel_lcdfb_info *sinfo)
static void atmel_lcdfb_update_dma(struct fb_info *info,
struct fb_var_screeninfo *var)
static inline void atmel_lcdfb_free_video_memory(struct atmel_lcdfb_info *sinfo)
static int atmel_lcdfb_alloc_video_memory(struct atmel_lcdfb_info *sinfo)
static const struct fb_videomode *atmel_lcdfb_choose_mode(struct fb_var_screeninfo *var,
struct fb_info *info)
static int atmel_lcdfb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void atmel_lcdfb_reset(struct atmel_lcdfb_info *sinfo)
static int atmel_lcdfb_set_par(struct fb_info *info)
static inline unsigned int chan_to_field(unsigned int chan, const struct fb_bitfield *bf)
static int atmel_lcdfb_setcolreg(unsigned int regno, unsigned int red,
unsigned int green, unsigned int blue,
unsigned int transp, struct fb_info *info)
static int atmel_lcdfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int atmel_lcdfb_blank(int blank_mode, struct fb_info *info)
static struct fb_ops atmel_lcdfb_ops = ;
static irqreturn_t atmel_lcdfb_interrupt(int irq, void *dev_id)
static void atmel_lcdfb_task(struct work_struct *work)
static int __init atmel_lcdfb_init_fbinfo(struct atmel_lcdfb_info *sinfo)
static void atmel_lcdfb_start_clock(struct atmel_lcdfb_info *sinfo)
static void atmel_lcdfb_stop_clock(struct atmel_lcdfb_info *sinfo)
static int __init atmel_lcdfb_probe(struct platform_device *pdev)
static int __exit atmel_lcdfb_remove(struct platform_device *pdev)
static int atmel_lcdfb_suspend(struct platform_device *pdev, pm_message_t mesg)
static int atmel_lcdfb_resume(struct platform_device *pdev)
#define atmel_lcdfb_suspend	NULL
#define atmel_lcdfb_resume	NULL
static struct platform_driver atmel_lcdfb_driver = ;
static int __init atmel_lcdfb_init(void)
static void __exit atmel_lcdfb_exit(void)
module_init(atmel_lcdfb_init);
module_exit(atmel_lcdfb_exit);
MODULE_DESCRIPTION("AT91/AT32 LCD Controller framebuffer driver");
MODULE_AUTHOR("Nicolas Ferre <nicolas.ferre@atmel.com>");
MODULE_LICENSE("GPL");

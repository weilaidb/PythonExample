#define DRIVER_NAME "da8xx_lcdc"
#define LCD_END_OF_FRAME1		BIT(9)
#define LCD_END_OF_FRAME0		BIT(8)
#define LCD_PL_LOAD_DONE		BIT(6)
#define LCD_FIFO_UNDERFLOW		BIT(5)
#define LCD_SYNC_LOST			BIT(2)
#define LCD_DMA_BURST_SIZE(x)		((x) << 4)
#define LCD_DMA_BURST_1			0x0
#define LCD_DMA_BURST_2			0x1
#define LCD_DMA_BURST_4			0x2
#define LCD_DMA_BURST_8			0x3
#define LCD_DMA_BURST_16		0x4
#define LCD_END_OF_FRAME_INT_ENA	BIT(2)
#define LCD_DUAL_FRAME_BUFFER_ENABLE	BIT(0)
#define LCD_CLK_DIVISOR(x)		((x) << 8)
#define LCD_RASTER_MODE			0x01
#define LCD_PALETTE_LOAD_MODE(x)	((x) << 20)
#define PALETTE_AND_DATA		0x00
#define PALETTE_ONLY			0x01
#define DATA_ONLY			0x02
#define LCD_MONO_8BIT_MODE		BIT(9)
#define LCD_RASTER_ORDER		BIT(8)
#define LCD_TFT_MODE			BIT(7)
#define LCD_UNDERFLOW_INT_ENA		BIT(6)
#define LCD_PL_ENABLE			BIT(4)
#define LCD_MONOCHROME_MODE		BIT(1)
#define LCD_RASTER_ENABLE		BIT(0)
#define LCD_TFT_ALT_ENABLE		BIT(23)
#define LCD_STN_565_ENABLE		BIT(24)
#define LCD_AC_BIAS_TRANSITIONS_PER_INT(x)	((x) << 16)
#define LCD_AC_BIAS_FREQUENCY(x)		((x) << 8)
#define LCD_SYNC_CTRL				BIT(25)
#define LCD_SYNC_EDGE				BIT(24)
#define LCD_INVERT_PIXEL_CLOCK			BIT(22)
#define LCD_INVERT_LINE_CLOCK			BIT(21)
#define LCD_INVERT_FRAME_CLOCK			BIT(20)
#define  LCD_CTRL_REG				0x4
#define  LCD_STAT_REG				0x8
#define  LCD_RASTER_CTRL_REG			0x28
#define  LCD_RASTER_TIMING_0_REG		0x2C
#define  LCD_RASTER_TIMING_1_REG		0x30
#define  LCD_RASTER_TIMING_2_REG		0x34
#define  LCD_DMA_CTRL_REG			0x40
#define  LCD_DMA_FRM_BUF_BASE_ADDR_0_REG	0x44
#define  LCD_DMA_FRM_BUF_CEILING_ADDR_0_REG	0x48
#define  LCD_DMA_FRM_BUF_BASE_ADDR_1_REG	0x4C
#define  LCD_DMA_FRM_BUF_CEILING_ADDR_1_REG	0x50
#define LCD_NUM_BUFFERS	2
#define WSI_TIMEOUT	50
#define PALETTE_SIZE	256
#define LEFT_MARGIN	64
#define RIGHT_MARGIN	64
#define UPPER_MARGIN	32
#define LOWER_MARGIN	32
static resource_size_t da8xx_fb_reg_base;
static struct resource *lcdc_regs;
static inline unsigned int lcdc_read(unsigned int addr)
static inline void lcdc_write(unsigned int val, unsigned int addr)
struct da8xx_fb_par ;
static struct fb_var_screeninfo da8xx_fb_var __devinitdata = ;
static struct fb_fix_screeninfo da8xx_fb_fix __devinitdata = ;
struct da8xx_panel ;
static struct da8xx_panel known_lcd_panels[] = ;
static inline void lcd_enable_raster(void)
static inline void lcd_disable_raster(void)
static void lcd_blit(int load_mode, struct da8xx_fb_par *par)
static int lcd_cfg_dma(int burst_size)
static void lcd_cfg_ac_bias(int period, int transitions_per_int)
static void lcd_cfg_horizontal_sync(int back_porch, int pulse_width,
int front_porch)
static void lcd_cfg_vertical_sync(int back_porch, int pulse_width,
int front_porch)
static int lcd_cfg_display(const struct lcd_ctrl_config *cfg)
static int lcd_cfg_frame_buffer(struct da8xx_fb_par *par, u32 width, u32 height,
u32 bpp, u32 raster_order)
static int fb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static void lcd_reset(struct da8xx_fb_par *par)
static void lcd_calc_clk_divider(struct da8xx_fb_par *par)
static int lcd_init(struct da8xx_fb_par *par, const struct lcd_ctrl_config *cfg,
struct da8xx_panel *panel)
static irqreturn_t lcdc_irq_handler(int irq, void *arg)
static int fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static int lcd_da8xx_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int lcd_da8xx_cpufreq_register(struct da8xx_fb_par *par)
static inline void lcd_da8xx_cpufreq_deregister(struct da8xx_fb_par *par)
static int __devexit fb_remove(struct platform_device *dev)
static int fb_wait_for_vsync(struct fb_info *info)
static int fb_ioctl(struct fb_info *info, unsigned int cmd,
unsigned long arg)
static int cfb_blank(int blank, struct fb_info *info)
static int da8xx_pan_display(struct fb_var_screeninfo *var,
struct fb_info *fbi)
static struct fb_ops da8xx_fb_ops = ;
static int __devinit fb_probe(struct platform_device *device)
static int fb_suspend(struct platform_device *dev, pm_message_t state)
static int fb_resume(struct platform_device *dev)
#define fb_suspend NULL
#define fb_resume NULL
static struct platform_driver da8xx_fb_driver = ;
static int __init da8xx_fb_init(void)
static void __exit da8xx_fb_cleanup(void)
module_init(da8xx_fb_init);
module_exit(da8xx_fb_cleanup);
MODULE_DESCRIPTION("Framebuffer driver for TI da8xx/omap-l1xx");
MODULE_AUTHOR("Texas Instruments");
MODULE_LICENSE("GPL");

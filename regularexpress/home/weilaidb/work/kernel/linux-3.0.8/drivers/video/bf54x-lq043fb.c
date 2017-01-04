#define NO_BL_SUPPORT
#define DRIVER_NAME "bf54x-lq043"
static char driver_name[] = DRIVER_NAME;
#define BFIN_LCD_NBR_PALETTE_ENTRIES	256
#define EPPI0_18
#define EPPI0_24
struct bfin_bf54xfb_info ;
static int nocursor;
module_param(nocursor, int, 0644);
MODULE_PARM_DESC(nocursor, "cursor enable/disable");
static int outp_rgb666;
module_param(outp_rgb666, int, 0);
MODULE_PARM_DESC(outp_rgb666, "Output 18-bit RGB666");
#define LCD_X_RES		480
#define LCD_Y_RES		272
#define LCD_BPP			24
#define	DMA_BUS_SIZE		32
#define	LCD_CLK         	(8*1000*1000)
#define EPPI_HCOUNT		LCD_X_RES
#define EPPI_VCOUNT		LCD_Y_RES
#define EPPI_LINE		525
#define EPPI_FRAME		286
#define EPPI_FS1W_HBL		41
#define EPPI_FS1P_AVPL		EPPI_LINE
#define EPPI_HDELAY		43
#define EPPI_FS2W_LVB		(EPPI_LINE * 10)
#define EPPI_FS2P_LAVF		(EPPI_LINE * EPPI_FRAME)
#define EPPI_VDELAY		12
#define EPPI_CLIP		0xFF00FF00
#define EPPI_CONTROL		(0x20136E2E | SWAPEN)
static inline u16 get_eppi_clkdiv(u32 target_ppi_clk)
static void config_ppi(struct bfin_bf54xfb_info *fbi)
static int config_dma(struct bfin_bf54xfb_info *fbi)
static int request_ports(struct bfin_bf54xfb_info *fbi)
static void free_ports(struct bfin_bf54xfb_info *fbi)
static int bfin_bf54x_fb_open(struct fb_info *info, int user)
static int bfin_bf54x_fb_release(struct fb_info *info, int user)
static int bfin_bf54x_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
int bfin_bf54x_fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int bfin_bf54x_fb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp,
struct fb_info *info)
static struct fb_ops bfin_bf54x_fb_ops = ;
static int bl_get_brightness(struct backlight_device *bd)
static const struct backlight_ops bfin_lq043fb_bl_ops = ;
static struct backlight_device *bl_dev;
static int bfin_lcd_get_power(struct lcd_device *dev)
static int bfin_lcd_set_power(struct lcd_device *dev, int power)
static int bfin_lcd_get_contrast(struct lcd_device *dev)
static int bfin_lcd_set_contrast(struct lcd_device *dev, int contrast)
static int bfin_lcd_check_fb(struct lcd_device *dev, struct fb_info *fi)
static struct lcd_ops bfin_lcd_ops = ;
static struct lcd_device *lcd_dev;
static irqreturn_t bfin_bf54x_irq_error(int irq, void *dev_id)
static int __devinit bfin_bf54x_probe(struct platform_device *pdev)
static int __devexit bfin_bf54x_remove(struct platform_device *pdev)
static int bfin_bf54x_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_bf54x_resume(struct platform_device *pdev)
#define bfin_bf54x_suspend	NULL
#define bfin_bf54x_resume	NULL
static struct platform_driver bfin_bf54x_driver = ;
static int __init bfin_bf54x_driver_init(void)
static void __exit bfin_bf54x_driver_cleanup(void)
MODULE_DESCRIPTION("Blackfin BF54x TFT LCD Driver");
MODULE_LICENSE("GPL");
module_init(bfin_bf54x_driver_init);
module_exit(bfin_bf54x_driver_cleanup);

#define NO_BL_SUPPORT
#define LCD_X_RES		320
#define LCD_Y_RES		240
#define LCD_BPP			24
#define	DMA_BUS_SIZE		16
#define	LCD_CLK         	(12*1000*1000)
#define CLOCKS_PER_PIX		3
#define U_LINE		1
#define H_ACTPIX	(LCD_X_RES * CLOCKS_PER_PIX)
#define H_PERIOD	(408 * CLOCKS_PER_PIX)
#define H_PULSE		90
#define H_START		204
#define	V_LINES		(LCD_Y_RES + U_LINE)
#define V_PULSE		(3 * H_PERIOD)
#define V_PERIOD	(H_PERIOD * V_LINES)
#define ACTIVE_VIDEO_MEM_OFFSET	(U_LINE * H_ACTPIX)
#define BFIN_LCD_NBR_PALETTE_ENTRIES	256
#define DRIVER_NAME "bfin-t350mcqb"
static char driver_name[] = DRIVER_NAME;
struct bfin_t350mcqbfb_info ;
static int nocursor;
module_param(nocursor, int, 0644);
MODULE_PARM_DESC(nocursor, "cursor enable/disable");
#define PPI_TX_MODE		0x2
#define PPI_XFER_TYPE_11	0xC
#define PPI_PORT_CFG_01		0x10
#define PPI_PACK_EN		0x80
#define PPI_POLS_1		0x8000
static void bfin_t350mcqb_config_ppi(struct bfin_t350mcqbfb_info *fbi)
static inline void bfin_t350mcqb_disable_ppi(void)
static inline void bfin_t350mcqb_enable_ppi(void)
static void bfin_t350mcqb_start_timers(void)
static void bfin_t350mcqb_stop_timers(void)
static void bfin_t350mcqb_init_timers(void)
static void bfin_t350mcqb_config_dma(struct bfin_t350mcqbfb_info *fbi)
static	u16 ppi0_req_8[] = ;
static int bfin_t350mcqb_request_ports(int action)
static int bfin_t350mcqb_fb_open(struct fb_info *info, int user)
static int bfin_t350mcqb_fb_release(struct fb_info *info, int user)
static int bfin_t350mcqb_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
int bfin_t350mcqb_fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int bfin_t350mcqb_fb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp,
struct fb_info *info)
static struct fb_ops bfin_t350mcqb_fb_ops = ;
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
static irqreturn_t bfin_t350mcqb_irq_error(int irq, void *dev_id)
static int __devinit bfin_t350mcqb_probe(struct platform_device *pdev)
static int __devexit bfin_t350mcqb_remove(struct platform_device *pdev)
static int bfin_t350mcqb_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_t350mcqb_resume(struct platform_device *pdev)
#define bfin_t350mcqb_suspend	NULL
#define bfin_t350mcqb_resume	NULL
static struct platform_driver bfin_t350mcqb_driver = ;
static int __init bfin_t350mcqb_driver_init(void)
static void __exit bfin_t350mcqb_driver_cleanup(void)
MODULE_DESCRIPTION("Blackfin TFT LCD Driver");
MODULE_LICENSE("GPL");
module_init(bfin_t350mcqb_driver_init);
module_exit(bfin_t350mcqb_driver_cleanup);

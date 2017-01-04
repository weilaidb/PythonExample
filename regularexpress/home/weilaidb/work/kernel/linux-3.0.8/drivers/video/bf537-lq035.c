#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define NO_BL 1
#define MAX_BRIGHENESS	95
#define MIN_BRIGHENESS	5
#define NBR_PALETTE	256
static const unsigned short ppi_pins[] = ;
static unsigned char *fb_buffer;
static unsigned long *dma_desc_table;
static int t_conf_done, lq035_open_cnt;
static DEFINE_SPINLOCK(bfin_lq035_lock);
static int landscape;
module_param(landscape, int, 0);
MODULE_PARM_DESC(landscape,
"LANDSCAPE use 320x240 instead of Native 240x320 Resolution");
static int bgr;
module_param(bgr, int, 0);
MODULE_PARM_DESC(bgr,
"BGR use 16-bit BGR-565 instead of RGB-565");
static int nocursor = 1;
module_param(nocursor, int, 0644);
MODULE_PARM_DESC(nocursor, "cursor enable/disable");
static unsigned long current_brightness;
static unsigned char vcomm_value = 150;
static struct i2c_client *ad5280_client;
static void set_vcomm(void)
static int __devinit ad5280_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad5280_remove(struct i2c_client *client)
static const struct i2c_device_id ad5280_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad5280_id);
static struct i2c_driver ad5280_driver = ;
#define MOD GPIO_PH13
#define bfin_write_TIMER_LP_CONFIG	bfin_write_TIMER0_CONFIG
#define bfin_write_TIMER_LP_WIDTH	bfin_write_TIMER0_WIDTH
#define bfin_write_TIMER_LP_PERIOD	bfin_write_TIMER0_PERIOD
#define bfin_read_TIMER_LP_COUNTER	bfin_read_TIMER0_COUNTER
#define TIMDIS_LP			TIMDIS0
#define TIMEN_LP			TIMEN0
#define bfin_write_TIMER_SPS_CONFIG	bfin_write_TIMER1_CONFIG
#define bfin_write_TIMER_SPS_WIDTH	bfin_write_TIMER1_WIDTH
#define bfin_write_TIMER_SPS_PERIOD	bfin_write_TIMER1_PERIOD
#define TIMDIS_SPS			TIMDIS1
#define TIMEN_SPS			TIMEN1
#define bfin_write_TIMER_SP_CONFIG	bfin_write_TIMER5_CONFIG
#define bfin_write_TIMER_SP_WIDTH	bfin_write_TIMER5_WIDTH
#define bfin_write_TIMER_SP_PERIOD	bfin_write_TIMER5_PERIOD
#define TIMDIS_SP			TIMDIS5
#define TIMEN_SP			TIMEN5
#define bfin_write_TIMER_PS_CLS_CONFIG	bfin_write_TIMER2_CONFIG
#define bfin_write_TIMER_PS_CLS_WIDTH	bfin_write_TIMER2_WIDTH
#define bfin_write_TIMER_PS_CLS_PERIOD	bfin_write_TIMER2_PERIOD
#define TIMDIS_PS_CLS			TIMDIS2
#define TIMEN_PS_CLS			TIMEN2
#define bfin_write_TIMER_REV_CONFIG	bfin_write_TIMER3_CONFIG
#define bfin_write_TIMER_REV_WIDTH	bfin_write_TIMER3_WIDTH
#define bfin_write_TIMER_REV_PERIOD	bfin_write_TIMER3_PERIOD
#define TIMDIS_REV			TIMDIS3
#define TIMEN_REV			TIMEN3
#define bfin_read_TIMER_REV_COUNTER	bfin_read_TIMER3_COUNTER
#define	FREQ_PPI_CLK         (5*1024*1024)
#define TIMERS
#define UD      GPIO_PF13
#define MOD     GPIO_PF10
#define LBR     GPIO_PF14
#define bfin_write_TIMER_LP_CONFIG	bfin_write_TIMER6_CONFIG
#define bfin_write_TIMER_LP_WIDTH	bfin_write_TIMER6_WIDTH
#define bfin_write_TIMER_LP_PERIOD	bfin_write_TIMER6_PERIOD
#define bfin_read_TIMER_LP_COUNTER	bfin_read_TIMER6_COUNTER
#define TIMDIS_LP			TIMDIS6
#define TIMEN_LP			TIMEN6
#define bfin_write_TIMER_SPS_CONFIG	bfin_write_TIMER1_CONFIG
#define bfin_write_TIMER_SPS_WIDTH	bfin_write_TIMER1_WIDTH
#define bfin_write_TIMER_SPS_PERIOD	bfin_write_TIMER1_PERIOD
#define TIMDIS_SPS			TIMDIS1
#define TIMEN_SPS			TIMEN1
#define bfin_write_TIMER_SP_CONFIG	bfin_write_TIMER0_CONFIG
#define bfin_write_TIMER_SP_WIDTH	bfin_write_TIMER0_WIDTH
#define bfin_write_TIMER_SP_PERIOD	bfin_write_TIMER0_PERIOD
#define TIMDIS_SP			TIMDIS0
#define TIMEN_SP			TIMEN0
#define bfin_write_TIMER_PS_CLS_CONFIG	bfin_write_TIMER7_CONFIG
#define bfin_write_TIMER_PS_CLS_WIDTH	bfin_write_TIMER7_WIDTH
#define bfin_write_TIMER_PS_CLS_PERIOD	bfin_write_TIMER7_PERIOD
#define TIMDIS_PS_CLS			TIMDIS7
#define TIMEN_PS_CLS			TIMEN7
#define bfin_write_TIMER_REV_CONFIG	bfin_write_TIMER5_CONFIG
#define bfin_write_TIMER_REV_WIDTH	bfin_write_TIMER5_WIDTH
#define bfin_write_TIMER_REV_PERIOD	bfin_write_TIMER5_PERIOD
#define TIMDIS_REV			TIMDIS5
#define TIMEN_REV			TIMEN5
#define bfin_read_TIMER_REV_COUNTER	bfin_read_TIMER5_COUNTER
#define	FREQ_PPI_CLK         (6*1000*1000)
#define TIMERS
#define LCD_X_RES			240
#define LCD_Y_RES			320
#define LCD_BBP				16
#define START_LINES       8
#define U_LINES           9
#define FRAMES_PER_SEC    (60)
#define DCLKS_PER_FRAME   (FREQ_PPI_CLK/FRAMES_PER_SEC)
#define DCLKS_PER_LINE    (DCLKS_PER_FRAME/(LCD_Y_RES+U_LINES))
#define PPI_CONFIG_VALUE  (PORT_DIR|XFR_TYPE|DLEN_16|POLS)
#define PPI_DELAY_VALUE   (0)
#define TIMER_CONFIG      (PWM_OUT|PERIOD_CNT|TIN_SEL|CLK_SEL)
#define ACTIVE_VIDEO_MEM_OFFSET	(LCD_X_RES*START_LINES*(LCD_BBP/8))
#define ACTIVE_VIDEO_MEM_SIZE	(LCD_Y_RES*LCD_X_RES*(LCD_BBP/8))
#define TOTAL_VIDEO_MEM_SIZE	((LCD_Y_RES+U_LINES)*LCD_X_RES*(LCD_BBP/8))
#define TOTAL_DMA_DESC_SIZE	(2 * sizeof(u32) * (LCD_Y_RES + U_LINES))
static void start_timers(void)
static void config_timers(void)
static void config_ppi(void)
static int config_dma(void)
static int __devinit request_ports(void)
static void free_ports(void)
static struct fb_info bfin_lq035_fb;
static struct fb_var_screeninfo bfin_lq035_fb_defined = ;
static struct fb_fix_screeninfo bfin_lq035_fb_fix __devinitdata = ;
static int bfin_lq035_fb_open(struct fb_info *info, int user)
static int bfin_lq035_fb_release(struct fb_info *info, int user)
static int bfin_lq035_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
static void bfin_lq035_fb_rotate(struct fb_info *fbi, int angle)
static int bfin_lq035_fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int bfin_lq035_fb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp,
struct fb_info *info)
static struct fb_ops bfin_lq035_fb_ops = ;
static int bl_get_brightness(struct backlight_device *bd)
static const struct backlight_ops bfin_lq035fb_bl_ops = ;
static struct backlight_device *bl_dev;
static int bfin_lcd_get_power(struct lcd_device *dev)
static int bfin_lcd_set_power(struct lcd_device *dev, int power)
static int bfin_lcd_get_contrast(struct lcd_device *dev)
static int bfin_lcd_set_contrast(struct lcd_device *dev, int contrast)
static int bfin_lcd_check_fb(struct lcd_device *lcd, struct fb_info *fi)
static struct lcd_ops bfin_lcd_ops = ;
static struct lcd_device *lcd_dev;
static int __devinit bfin_lq035_probe(struct platform_device *pdev)
static int __devexit bfin_lq035_remove(struct platform_device *pdev)
static int bfin_lq035_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_lq035_resume(struct platform_device *pdev)
# define bfin_lq035_suspend	NULL
# define bfin_lq035_resume	NULL
static struct platform_driver bfin_lq035_driver = ;
static int __init bfin_lq035_driver_init(void)
module_init(bfin_lq035_driver_init);
static void __exit bfin_lq035_driver_cleanup(void)
module_exit(bfin_lq035_driver_cleanup);
MODULE_DESCRIPTION("SHARP LQ035Q7DB03 TFT LCD Driver");
MODULE_LICENSE("GPL");

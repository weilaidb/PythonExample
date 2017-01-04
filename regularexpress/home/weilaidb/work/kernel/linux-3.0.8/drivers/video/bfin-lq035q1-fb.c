#define DRIVER_NAME "bfin-lq035q1"
#define pr_fmt(fmt) DRIVER_NAME ": " fmt
#if defined(BF533_FAMILY) || defined(BF538_FAMILY)
#define TIMER_HSYNC_id			TIMER1_id
#define TIMER_HSYNCbit			TIMER1bit
#define TIMER_HSYNC_STATUS_TRUN		TIMER_STATUS_TRUN1
#define TIMER_HSYNC_STATUS_TIMIL	TIMER_STATUS_TIMIL1
#define TIMER_HSYNC_STATUS_TOVF		TIMER_STATUS_TOVF1
#define TIMER_VSYNC_id			TIMER2_id
#define TIMER_VSYNCbit			TIMER2bit
#define TIMER_VSYNC_STATUS_TRUN		TIMER_STATUS_TRUN2
#define TIMER_VSYNC_STATUS_TIMIL	TIMER_STATUS_TIMIL2
#define TIMER_VSYNC_STATUS_TOVF		TIMER_STATUS_TOVF2
#define TIMER_HSYNC_id			TIMER0_id
#define TIMER_HSYNCbit			TIMER0bit
#define TIMER_HSYNC_STATUS_TRUN		TIMER_STATUS_TRUN0
#define TIMER_HSYNC_STATUS_TIMIL	TIMER_STATUS_TIMIL0
#define TIMER_HSYNC_STATUS_TOVF		TIMER_STATUS_TOVF0
#define TIMER_VSYNC_id			TIMER1_id
#define TIMER_VSYNCbit			TIMER1bit
#define TIMER_VSYNC_STATUS_TRUN		TIMER_STATUS_TRUN1
#define TIMER_VSYNC_STATUS_TIMIL	TIMER_STATUS_TIMIL1
#define TIMER_VSYNC_STATUS_TOVF		TIMER_STATUS_TOVF1
#define LCD_X_RES		320
#define LCD_Y_RES		240
#define	DMA_BUS_SIZE		16
#define U_LINE			4
#define BFIN_LCD_NBR_PALETTE_ENTRIES	256
#define PPI_TX_MODE			0x2
#define PPI_XFER_TYPE_11		0xC
#define PPI_PORT_CFG_01			0x10
#define PPI_POLS_1			0x8000
#define LQ035_INDEX			0x74
#define LQ035_DATA			0x76
#define LQ035_DRIVER_OUTPUT_CTL		0x1
#define LQ035_SHUT_CTL			0x11
#define LQ035_DRIVER_OUTPUT_MASK	(LQ035_LR | LQ035_TB | LQ035_BGR | LQ035_REV)
#define LQ035_DRIVER_OUTPUT_DEFAULT	(0x2AEF & ~LQ035_DRIVER_OUTPUT_MASK)
#define LQ035_SHUT			(1 << 0)
#define LQ035_ON			(0 << 0)
struct bfin_lq035q1fb_info ;
static int nocursor;
module_param(nocursor, int, 0644);
MODULE_PARM_DESC(nocursor, "cursor enable/disable");
struct spi_control ;
static int lq035q1_control(struct spi_device *spi, unsigned char reg, unsigned short value)
static int __devinit lq035q1_spidev_probe(struct spi_device *spi)
static int lq035q1_spidev_remove(struct spi_device *spi)
static int lq035q1_spidev_suspend(struct spi_device *spi, pm_message_t state)
static int lq035q1_spidev_resume(struct spi_device *spi)
# define lq035q1_spidev_suspend NULL
# define lq035q1_spidev_resume  NULL
static void lq035q1_spidev_shutdown(struct spi_device *spi)
static int lq035q1_backlight(struct bfin_lq035q1fb_info *info, unsigned arg)
static int bfin_lq035q1_calc_timing(struct bfin_lq035q1fb_info *fbi)
static void bfin_lq035q1_config_ppi(struct bfin_lq035q1fb_info *fbi)
static inline void bfin_lq035q1_disable_ppi(void)
static inline void bfin_lq035q1_enable_ppi(void)
static void bfin_lq035q1_start_timers(void)
static void bfin_lq035q1_stop_timers(void)
static void bfin_lq035q1_init_timers(struct bfin_lq035q1fb_info *fbi)
static void bfin_lq035q1_config_dma(struct bfin_lq035q1fb_info *fbi)
static const u16 ppi0_req_16[] = ;
static const u16 ppi0_req_8[] = ;
static inline void bfin_lq035q1_free_ports(unsigned ppi16)
static int __devinit bfin_lq035q1_request_ports(struct platform_device *pdev,
unsigned ppi16)
static int bfin_lq035q1_fb_open(struct fb_info *info, int user)
static int bfin_lq035q1_fb_release(struct fb_info *info, int user)
static int bfin_lq035q1_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info)
int bfin_lq035q1_fb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static int bfin_lq035q1_fb_setcolreg(u_int regno, u_int red, u_int green,
u_int blue, u_int transp,
struct fb_info *info)
static struct fb_ops bfin_lq035q1_fb_ops = ;
static irqreturn_t bfin_lq035q1_irq_error(int irq, void *dev_id)
static int __devinit bfin_lq035q1_probe(struct platform_device *pdev)
static int __devexit bfin_lq035q1_remove(struct platform_device *pdev)
static int bfin_lq035q1_suspend(struct device *dev)
static int bfin_lq035q1_resume(struct device *dev)
static struct dev_pm_ops bfin_lq035q1_dev_pm_ops = ;
static struct platform_driver bfin_lq035q1_driver = ;
static int __init bfin_lq035q1_driver_init(void)
module_init(bfin_lq035q1_driver_init);
static void __exit bfin_lq035q1_driver_cleanup(void)
module_exit(bfin_lq035q1_driver_cleanup);
MODULE_DESCRIPTION("Blackfin TFT LCD Driver");
MODULE_LICENSE("GPL");

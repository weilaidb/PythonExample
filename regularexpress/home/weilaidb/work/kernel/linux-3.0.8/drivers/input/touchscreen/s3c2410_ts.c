#define TSC_SLEEP  (S3C2410_ADCTSC_PULL_UP_DISABLE | S3C2410_ADCTSC_XY_PST(0))
#define INT_DOWN	(0)
#define INT_UP		(1 << 8)
#define WAIT4INT	(S3C2410_ADCTSC_YM_SEN | \
S3C2410_ADCTSC_YP_SEN | \
S3C2410_ADCTSC_XP_SEN | \
S3C2410_ADCTSC_XY_PST(3))
#define AUTOPST		(S3C2410_ADCTSC_YM_SEN | \
S3C2410_ADCTSC_YP_SEN | \
S3C2410_ADCTSC_XP_SEN | \
S3C2410_ADCTSC_AUTO_PST | \
S3C2410_ADCTSC_XY_PST(0))
#define FEAT_PEN_IRQ	(1 << 0)
struct s3c2410ts ;
static struct s3c2410ts ts;
static inline bool get_down(unsigned long data0, unsigned long data1)
static void touch_timer_fire(unsigned long data)
static DEFINE_TIMER(touch_timer, touch_timer_fire, 0, 0);
static irqreturn_t stylus_irq(int irq, void *dev_id)
static void s3c24xx_ts_conversion(struct s3c_adc_client *client,
unsigned data0, unsigned data1,
unsigned *left)
static void s3c24xx_ts_select(struct s3c_adc_client *client, unsigned select)
static int __devinit s3c2410ts_probe(struct platform_device *pdev)
static int __devexit s3c2410ts_remove(struct platform_device *pdev)
static int s3c2410ts_suspend(struct device *dev)
static int s3c2410ts_resume(struct device *dev)
static struct dev_pm_ops s3c_ts_pmops = ;
static struct platform_device_id s3cts_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, s3cts_driver_ids);
static struct platform_driver s3c_ts_driver = ;
static int __init s3c2410ts_init(void)
static void __exit s3c2410ts_exit(void)
module_init(s3c2410ts_init);
module_exit(s3c2410ts_exit);
MODULE_AUTHOR("Arnaud Patard <arnaud.patard@rtp-net.org>, "
"Ben Dooks <ben@simtec.co.uk>, "
"Simtec Electronics <linux@simtec.co.uk>");
MODULE_DESCRIPTION("S3C24XX Touchscreen driver");
MODULE_LICENSE("GPL v2");

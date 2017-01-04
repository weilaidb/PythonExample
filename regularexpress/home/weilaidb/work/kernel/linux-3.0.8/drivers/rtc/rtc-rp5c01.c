enum ;
#define RP5C01_12_24_SELECT_12	(0 << 0)
#define RP5C01_12_24_SELECT_24	(1 << 0)
#define RP5C01_10_HOUR_AM	(0 << 1)
#define RP5C01_10_HOUR_PM	(1 << 1)
#define RP5C01_MODE_TIMER_EN	(1 << 3)
#define RP5C01_MODE_ALARM_EN	(1 << 2)
#define RP5C01_MODE_MODE_MASK	(3 << 0)
#define RP5C01_MODE_MODE00	(0 << 0)
#define RP5C01_MODE_MODE01	(1 << 0)
#define RP5C01_MODE_RAM_BLOCK10	(2 << 0)
#define RP5C01_MODE_RAM_BLOCK11	(3 << 0)
#define RP5C01_RESET_1HZ_PULSE	(1 << 3)
#define RP5C01_RESET_16HZ_PULSE	(1 << 2)
#define RP5C01_RESET_SECOND	(1 << 1)
#define RP5C01_RESET_ALARM	(1 << 0)
struct rp5c01_priv ;
static inline unsigned int rp5c01_read(struct rp5c01_priv *priv,
unsigned int reg)
static inline void rp5c01_write(struct rp5c01_priv *priv, unsigned int val,
unsigned int reg)
static void rp5c01_lock(struct rp5c01_priv *priv)
static void rp5c01_unlock(struct rp5c01_priv *priv)
static int rp5c01_read_time(struct device *dev, struct rtc_time *tm)
static int rp5c01_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops rp5c01_rtc_ops = ;
static ssize_t rp5c01_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static ssize_t rp5c01_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static int __init rp5c01_rtc_probe(struct platform_device *dev)
static int __exit rp5c01_rtc_remove(struct platform_device *dev)
static struct platform_driver rp5c01_rtc_driver = ;
static int __init rp5c01_rtc_init(void)
static void __exit rp5c01_rtc_fini(void)
module_init(rp5c01_rtc_init);
module_exit(rp5c01_rtc_fini);
MODULE_AUTHOR("Geert Uytterhoeven <geert@linux-m68k.org>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Ricoh RP5C01 RTC driver");
MODULE_ALIAS("platform:rtc-rp5c01");

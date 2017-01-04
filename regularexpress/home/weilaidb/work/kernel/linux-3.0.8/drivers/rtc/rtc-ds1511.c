#define DRV_VERSION "0.6"
enum ds1511reg ;
#define DS1511_BLF1	0x80
#define DS1511_BLF2	0x40
#define DS1511_PRS	0x20
#define DS1511_PAB	0x10
#define DS1511_TDF	0x08
#define DS1511_KSF	0x04
#define DS1511_WDF	0x02
#define DS1511_IRQF	0x01
#define DS1511_TE	0x80
#define DS1511_CS	0x40
#define DS1511_BME	0x20
#define DS1511_TPE	0x10
#define DS1511_TIE	0x08
#define DS1511_KIE	0x04
#define DS1511_WDE	0x02
#define DS1511_WDS	0x01
#define DS1511_RAM_MAX	0xff
#define RTC_CMD		DS1511_CONTROL_B
#define RTC_CMD1	DS1511_CONTROL_A
#define RTC_ALARM_SEC	DS1511_AM1_SEC
#define RTC_ALARM_MIN	DS1511_AM2_MIN
#define RTC_ALARM_HOUR	DS1511_AM3_HOUR
#define RTC_ALARM_DATE	DS1511_AM4_DATE
#define RTC_SEC		DS1511_SEC
#define RTC_MIN		DS1511_MIN
#define RTC_HOUR	DS1511_HOUR
#define RTC_DOW		DS1511_DOW
#define RTC_DOM		DS1511_DOM
#define RTC_MON		DS1511_MONTH
#define RTC_YEAR	DS1511_YEAR
#define RTC_CENTURY	DS1511_CENTURY
#define RTC_TIE	DS1511_TIE
#define RTC_TE	DS1511_TE
struct rtc_plat_data ;
static DEFINE_SPINLOCK(ds1511_lock);
static __iomem char *ds1511_base;
static u32 reg_spacing = 1;
static noinline void
rtc_write(uint8_t val, uint32_t reg)
static inline void
rtc_write_alarm(uint8_t val, enum ds1511reg reg)
static noinline uint8_t
rtc_read(enum ds1511reg reg)
static inline void
rtc_disable_update(void)
static void
rtc_enable_update(void)
void
ds1511_wdog_set(unsigned long deciseconds)
void
ds1511_wdog_disable(void)
static int ds1511_rtc_set_time(struct device *dev, struct rtc_time *rtc_tm)
static int ds1511_rtc_read_time(struct device *dev, struct rtc_time *rtc_tm)
static void
ds1511_rtc_update_alarm(struct rtc_plat_data *pdata)
static int
ds1511_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int
ds1511_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static irqreturn_t
ds1511_interrupt(int irq, void *dev_id)
static int ds1511_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static const struct rtc_class_ops ds1511_rtc_ops = ;
static ssize_t
ds1511_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *ba,
char *buf, loff_t pos, size_t size)
static ssize_t
ds1511_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t size)
static struct bin_attribute ds1511_nvram_attr = ;
static int __devinit
ds1511_rtc_probe(struct platform_device *pdev)
static int __devexit
ds1511_rtc_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:ds1511");
static struct platform_driver ds1511_rtc_driver = ;
static int __init
ds1511_rtc_init(void)
static void __exit
ds1511_rtc_exit(void)
module_init(ds1511_rtc_init);
module_exit(ds1511_rtc_exit);
MODULE_AUTHOR("Andrew Sharp <andy.sharp@lsi.com>");
MODULE_DESCRIPTION("Dallas DS1511 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);

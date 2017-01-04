#define	RTC_DR		0x00
#define	RTC_MR		0x04
#define	RTC_LR		0x08
#define	RTC_CR		0x0c
#define	RTC_IMSC	0x10
#define	RTC_RIS		0x14
#define	RTC_MIS		0x18
#define	RTC_ICR		0x1c
#define RTC_TDR		0x20
#define RTC_TLR		0x24
#define RTC_TCR		0x28
#define RTC_YDR		0x30
#define RTC_YMR		0x34
#define RTC_YLR		0x38
#define RTC_CR_CWEN	(1 << 26)
#define RTC_TCR_EN	(1 << 1)
#define RTC_BIT_AI	(1 << 0)
#define RTC_BIT_PI	(1 << 1)
#define RTC_SEC_SHIFT 0
#define RTC_SEC_MASK (0x3F << RTC_SEC_SHIFT)
#define RTC_MIN_SHIFT 6
#define RTC_MIN_MASK (0x3F << RTC_MIN_SHIFT)
#define RTC_HOUR_SHIFT 12
#define RTC_HOUR_MASK (0x1F << RTC_HOUR_SHIFT)
#define RTC_WDAY_SHIFT 17
#define RTC_WDAY_MASK (0x7 << RTC_WDAY_SHIFT)
#define RTC_MDAY_SHIFT 20
#define RTC_MDAY_MASK (0x1F << RTC_MDAY_SHIFT)
#define RTC_MON_SHIFT 25
#define RTC_MON_MASK (0xF << RTC_MON_SHIFT)
#define RTC_TIMER_FREQ 32768
struct pl031_local ;
static int pl031_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static int pl031_stv2_tm_to_time(struct device *dev,
struct rtc_time *tm, unsigned long *st_time,
unsigned long *bcd_year)
static int pl031_stv2_time_to_tm(unsigned long st_time, unsigned long bcd_year,
struct rtc_time *tm)
static int pl031_stv2_read_time(struct device *dev, struct rtc_time *tm)
static int pl031_stv2_set_time(struct device *dev, struct rtc_time *tm)
static int pl031_stv2_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int pl031_stv2_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static irqreturn_t pl031_interrupt(int irq, void *dev_id)
static int pl031_read_time(struct device *dev, struct rtc_time *tm)
static int pl031_set_time(struct device *dev, struct rtc_time *tm)
static int pl031_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int pl031_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int pl031_remove(struct amba_device *adev)
static int pl031_probe(struct amba_device *adev, const struct amba_id *id)
static struct rtc_class_ops arm_pl031_ops = ;
static struct rtc_class_ops stv1_pl031_ops = ;
static struct rtc_class_ops stv2_pl031_ops = ;
static struct amba_id pl031_ids[] = ;
static struct amba_driver pl031_driver = ;
static int __init pl031_init(void)
static void __exit pl031_exit(void)
module_init(pl031_init);
module_exit(pl031_exit);
MODULE_AUTHOR("Deepak Saxena <dsaxena@plexity.net");
MODULE_DESCRIPTION("ARM AMBA PL031 RTC Driver");
MODULE_LICENSE("GPL");

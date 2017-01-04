#define PCF50633_REG_RTCSC	0x59
#define PCF50633_REG_RTCMN	0x5a
#define PCF50633_REG_RTCHR	0x5b
#define PCF50633_REG_RTCWD	0x5c
#define PCF50633_REG_RTCDT	0x5d
#define PCF50633_REG_RTCMT	0x5e
#define PCF50633_REG_RTCYR	0x5f
#define PCF50633_REG_RTCSCA	0x60
#define PCF50633_REG_RTCMNA	0x61
#define PCF50633_REG_RTCHRA	0x62
#define PCF50633_REG_RTCWDA	0x63
#define PCF50633_REG_RTCDTA	0x64
#define PCF50633_REG_RTCMTA	0x65
#define PCF50633_REG_RTCYRA	0x66
enum pcf50633_time_indexes ;
struct pcf50633_time ;
struct pcf50633_rtc ;
static void pcf2rtc_time(struct rtc_time *rtc, struct pcf50633_time *pcf)
static void rtc2pcf_time(struct pcf50633_time *pcf, struct rtc_time *rtc)
static int
pcf50633_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int pcf50633_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int pcf50633_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int pcf50633_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int pcf50633_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static struct rtc_class_ops pcf50633_rtc_ops = ;
static void pcf50633_rtc_irq(int irq, void *data)
static int __devinit pcf50633_rtc_probe(struct platform_device *pdev)
static int __devexit pcf50633_rtc_remove(struct platform_device *pdev)
static struct platform_driver pcf50633_rtc_driver = ;
static int __init pcf50633_rtc_init(void)
module_init(pcf50633_rtc_init);
static void __exit pcf50633_rtc_exit(void)
module_exit(pcf50633_rtc_exit);
MODULE_DESCRIPTION("PCF50633 RTC driver");
MODULE_AUTHOR("Balaji Rao <balajirrao@openmoko.org>");
MODULE_LICENSE("GPL");

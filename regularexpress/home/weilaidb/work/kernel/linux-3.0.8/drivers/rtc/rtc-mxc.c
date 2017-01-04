#define RTC_INPUT_CLK_32768HZ	(0x00 << 5)
#define RTC_INPUT_CLK_32000HZ	(0x01 << 5)
#define RTC_INPUT_CLK_38400HZ	(0x02 << 5)
#define RTC_SW_BIT      (1 << 0)
#define RTC_ALM_BIT     (1 << 2)
#define RTC_1HZ_BIT     (1 << 4)
#define RTC_2HZ_BIT     (1 << 7)
#define RTC_SAM0_BIT    (1 << 8)
#define RTC_SAM1_BIT    (1 << 9)
#define RTC_SAM2_BIT    (1 << 10)
#define RTC_SAM3_BIT    (1 << 11)
#define RTC_SAM4_BIT    (1 << 12)
#define RTC_SAM5_BIT    (1 << 13)
#define RTC_SAM6_BIT    (1 << 14)
#define RTC_SAM7_BIT    (1 << 15)
#define PIT_ALL_ON      (RTC_2HZ_BIT | RTC_SAM0_BIT | RTC_SAM1_BIT | \
RTC_SAM2_BIT | RTC_SAM3_BIT | RTC_SAM4_BIT | \
RTC_SAM5_BIT | RTC_SAM6_BIT | RTC_SAM7_BIT)
#define RTC_ENABLE_BIT  (1 << 7)
#define MAX_PIE_NUM     9
#define MAX_PIE_FREQ    512
static const u32 PIE_BIT_DEF[MAX_PIE_NUM][2] = ;
#define MXC_RTC_TIME	0
#define MXC_RTC_ALARM	1
#define RTC_HOURMIN	0x00
#define RTC_SECOND	0x04
#define RTC_ALRM_HM	0x08
#define RTC_ALRM_SEC	0x0C
#define RTC_RTCCTL	0x10
#define RTC_RTCISR	0x14
#define RTC_RTCIENR	0x18
#define RTC_STPWCH	0x1C
#define RTC_DAYR	0x20
#define RTC_DAYALARM	0x24
#define RTC_TEST1	0x28
#define RTC_TEST2	0x2C
#define RTC_TEST3	0x30
struct rtc_plat_data ;
static u32 get_alarm_or_time(struct device *dev, int time_alarm)
static void set_alarm_or_time(struct device *dev, int time_alarm, u32 time)
static int rtc_update_alarm(struct device *dev, struct rtc_time *alrm)
static irqreturn_t mxc_rtc_interrupt(int irq, void *dev_id)
static void mxc_rtc_release(struct device *dev)
static void mxc_rtc_irq_enable(struct device *dev, unsigned int bit,
unsigned int enabled)
static int mxc_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int mxc_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int mxc_rtc_set_mmss(struct device *dev, unsigned long time)
static int mxc_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int mxc_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static struct rtc_class_ops mxc_rtc_ops = ;
static int __init mxc_rtc_probe(struct platform_device *pdev)
static int __exit mxc_rtc_remove(struct platform_device *pdev)
static struct platform_driver mxc_rtc_driver = ;
static int __init mxc_rtc_init(void)
static void __exit mxc_rtc_exit(void)
module_init(mxc_rtc_init);
module_exit(mxc_rtc_exit);
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_DESCRIPTION("RTC driver for Freescale MXC");
MODULE_LICENSE("GPL");

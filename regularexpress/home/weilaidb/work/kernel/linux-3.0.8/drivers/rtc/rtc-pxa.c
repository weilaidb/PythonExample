#define TIMER_FREQ		CLOCK_TICK_RATE
#define RTC_DEF_DIVIDER		(32768 - 1)
#define RTC_DEF_TRIM		0
#define MAXFREQ_PERIODIC	1000
#define RTSR_PICE	(1 << 15)
#define RTSR_PIALE	(1 << 14)
#define RTSR_PIAL	(1 << 13)
#define RTSR_SWALE2	(1 << 11)
#define RTSR_SWAL2	(1 << 10)
#define RTSR_SWALE1	(1 << 9)
#define RTSR_SWAL1	(1 << 8)
#define RTSR_RDALE2	(1 << 7)
#define RTSR_RDAL2	(1 << 6)
#define RTSR_RDALE1	(1 << 5)
#define RTSR_RDAL1	(1 << 4)
#define RTSR_HZE	(1 << 3)
#define RTSR_ALE	(1 << 2)
#define RTSR_HZ		(1 << 1)
#define RTSR_AL		(1 << 0)
#define RTSR_TRIG_MASK	(RTSR_AL | RTSR_HZ | RTSR_RDAL1 | RTSR_RDAL2\
| RTSR_SWAL1 | RTSR_SWAL2)
#define RYxR_YEAR_S	9
#define RYxR_YEAR_MASK	(0xfff << RYxR_YEAR_S)
#define RYxR_MONTH_S	5
#define RYxR_MONTH_MASK	(0xf << RYxR_MONTH_S)
#define RYxR_DAY_MASK	0x1f
#define RDxR_HOUR_S	12
#define RDxR_HOUR_MASK	(0x1f << RDxR_HOUR_S)
#define RDxR_MIN_S	6
#define RDxR_MIN_MASK	(0x3f << RDxR_MIN_S)
#define RDxR_SEC_MASK	0x3f
#define RTSR		0x08
#define RTTR		0x0c
#define RDCR		0x10
#define RYCR		0x14
#define RDAR1		0x18
#define RYAR1		0x1c
#define RTCPICR		0x34
#define PIAR		0x38
#define rtc_readl(pxa_rtc, reg)	\
__raw_readl((pxa_rtc)->base + (reg))
#define rtc_writel(pxa_rtc, reg, value)	\
__raw_writel((value), (pxa_rtc)->base + (reg))
struct pxa_rtc ;
static u32 ryxr_calc(struct rtc_time *tm)
static u32 rdxr_calc(struct rtc_time *tm)
static void tm_calc(u32 rycr, u32 rdcr, struct rtc_time *tm)
static void rtsr_clear_bits(struct pxa_rtc *pxa_rtc, u32 mask)
static void rtsr_set_bits(struct pxa_rtc *pxa_rtc, u32 mask)
static irqreturn_t pxa_rtc_irq(int irq, void *dev_id)
static int pxa_rtc_open(struct device *dev)
static void pxa_rtc_release(struct device *dev)
static int pxa_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int pxa_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int pxa_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int pxa_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int pxa_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int pxa_rtc_proc(struct device *dev, struct seq_file *seq)
static const struct rtc_class_ops pxa_rtc_ops = ;
static int __init pxa_rtc_probe(struct platform_device *pdev)
static int __exit pxa_rtc_remove(struct platform_device *pdev)
static int pxa_rtc_suspend(struct device *dev)
static int pxa_rtc_resume(struct device *dev)
static const struct dev_pm_ops pxa_rtc_pm_ops = ;
static struct platform_driver pxa_rtc_driver = ;
static int __init pxa_rtc_init(void)
static void __exit pxa_rtc_exit(void)
module_init(pxa_rtc_init);
module_exit(pxa_rtc_exit);
MODULE_AUTHOR("Robert Jarzmik <robert.jarzmik@free.fr>");
MODULE_DESCRIPTION("PXA27x/PXA3xx Realtime Clock Driver (RTC)");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa-rtc");

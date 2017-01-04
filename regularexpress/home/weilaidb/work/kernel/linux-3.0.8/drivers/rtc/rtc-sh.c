#define DRV_NAME	"sh-rtc"
#define DRV_VERSION	"0.2.3"
#define RTC_REG(r)	((r) * rtc_reg_size)
#define R64CNT		RTC_REG(0)
#define RSECCNT		RTC_REG(1)
#define RMINCNT		RTC_REG(2)
#define RHRCNT		RTC_REG(3)
#define RWKCNT		RTC_REG(4)
#define RDAYCNT		RTC_REG(5)
#define RMONCNT		RTC_REG(6)
#define RYRCNT		RTC_REG(7)
#define RSECAR		RTC_REG(8)
#define RMINAR		RTC_REG(9)
#define RHRAR		RTC_REG(10)
#define RWKAR		RTC_REG(11)
#define RDAYAR		RTC_REG(12)
#define RMONAR		RTC_REG(13)
#define RCR1		RTC_REG(14)
#define RCR2		RTC_REG(15)
#define AR_ENB		0x80
#define PF_HP		0x100
#define PF_COUNT	0x200
#define PF_OXS		0x400
#define PF_KOU		0x800
#define PF_MASK		0xf00
#define RCR1_CF		0x80
#define RCR1_CIE	0x10
#define RCR1_AIE	0x08
#define RCR1_AF		0x01
#define RCR2_PEF	0x80
#define RCR2_PESMASK	0x70
#define RCR2_RTCEN	0x08
#define RCR2_ADJ	0x04
#define RCR2_RESET	0x02
#define RCR2_START	0x01
struct sh_rtc ;
static int __sh_rtc_interrupt(struct sh_rtc *rtc)
static int __sh_rtc_alarm(struct sh_rtc *rtc)
static int __sh_rtc_periodic(struct sh_rtc *rtc)
static irqreturn_t sh_rtc_interrupt(int irq, void *dev_id)
static irqreturn_t sh_rtc_alarm(int irq, void *dev_id)
static irqreturn_t sh_rtc_periodic(int irq, void *dev_id)
static irqreturn_t sh_rtc_shared(int irq, void *dev_id)
static int sh_rtc_irq_set_state(struct device *dev, int enable)
static int sh_rtc_irq_set_freq(struct device *dev, int freq)
static inline void sh_rtc_setaie(struct device *dev, unsigned int enable)
static int sh_rtc_proc(struct device *dev, struct seq_file *seq)
static inline void sh_rtc_setcie(struct device *dev, unsigned int enable)
static int sh_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int sh_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int sh_rtc_set_time(struct device *dev, struct rtc_time *tm)
static inline int sh_rtc_read_alarm_value(struct sh_rtc *rtc, int reg_off)
static int sh_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *wkalrm)
static inline void sh_rtc_write_alarm_value(struct sh_rtc *rtc,
int value, int reg_off)
static int sh_rtc_check_alarm(struct rtc_time *tm)
static int sh_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *wkalrm)
static struct rtc_class_ops sh_rtc_ops = ;
static int __init sh_rtc_probe(struct platform_device *pdev)
static int __exit sh_rtc_remove(struct platform_device *pdev)
static void sh_rtc_set_irq_wake(struct device *dev, int enabled)
static int sh_rtc_suspend(struct device *dev)
static int sh_rtc_resume(struct device *dev)
static const struct dev_pm_ops sh_rtc_dev_pm_ops = ;
static struct platform_driver sh_rtc_platform_driver = ;
static int __init sh_rtc_init(void)
static void __exit sh_rtc_exit(void)
module_init(sh_rtc_init);
module_exit(sh_rtc_exit);
MODULE_DESCRIPTION("SuperH on-chip RTC driver");
MODULE_VERSION(DRV_VERSION);
MODULE_AUTHOR("Paul Mundt <lethal@linux-sh.org>, "
"Jamie Lenehan <lenehan@twibble.org>, "
"Angelo Castello <angelo.castello@st.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);

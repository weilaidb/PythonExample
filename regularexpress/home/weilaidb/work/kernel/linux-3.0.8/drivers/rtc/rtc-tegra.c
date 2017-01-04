#define TEGRA_RTC_REG_BUSY			0x004
#define TEGRA_RTC_REG_SECONDS			0x008
#define TEGRA_RTC_REG_SHADOW_SECONDS		0x00c
#define TEGRA_RTC_REG_MILLI_SECONDS		0x010
#define TEGRA_RTC_REG_SECONDS_ALARM0		0x014
#define TEGRA_RTC_REG_SECONDS_ALARM1		0x018
#define TEGRA_RTC_REG_MILLI_SECONDS_ALARM0	0x01c
#define TEGRA_RTC_REG_INTR_MASK			0x028
#define TEGRA_RTC_REG_INTR_STATUS		0x02c
#define TEGRA_RTC_INTR_MASK_MSEC_CDN_ALARM	(1<<4)
#define TEGRA_RTC_INTR_MASK_SEC_CDN_ALARM	(1<<3)
#define TEGRA_RTC_INTR_MASK_MSEC_ALARM		(1<<2)
#define TEGRA_RTC_INTR_MASK_SEC_ALARM1		(1<<1)
#define TEGRA_RTC_INTR_MASK_SEC_ALARM0		(1<<0)
#define TEGRA_RTC_INTR_STATUS_MSEC_CDN_ALARM	(1<<4)
#define TEGRA_RTC_INTR_STATUS_SEC_CDN_ALARM	(1<<3)
#define TEGRA_RTC_INTR_STATUS_MSEC_ALARM	(1<<2)
#define TEGRA_RTC_INTR_STATUS_SEC_ALARM1	(1<<1)
#define TEGRA_RTC_INTR_STATUS_SEC_ALARM0	(1<<0)
struct tegra_rtc_info ;
static inline u32 tegra_rtc_check_busy(struct tegra_rtc_info *info)
static int tegra_rtc_wait_while_busy(struct device *dev)
static int tegra_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int tegra_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int tegra_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int tegra_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int tegra_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int tegra_rtc_proc(struct device *dev, struct seq_file *seq)
static irqreturn_t tegra_rtc_irq_handler(int irq, void *data)
static struct rtc_class_ops tegra_rtc_ops = ;
static int __devinit tegra_rtc_probe(struct platform_device *pdev)
static int __devexit tegra_rtc_remove(struct platform_device *pdev)
static int tegra_rtc_suspend(struct platform_device *pdev, pm_message_t state)
static int tegra_rtc_resume(struct platform_device *pdev)
static void tegra_rtc_shutdown(struct platform_device *pdev)
MODULE_ALIAS("platform:tegra_rtc");
static struct platform_driver tegra_rtc_driver = ;
static int __init tegra_rtc_init(void)
module_init(tegra_rtc_init);
static void __exit tegra_rtc_exit(void)
module_exit(tegra_rtc_exit);
MODULE_AUTHOR("Jon Mayo <jmayo@nvidia.com>");
MODULE_DESCRIPTION("driver for Tegra internal RTC");
MODULE_LICENSE("GPL");

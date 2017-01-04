struct pcap_rtc ;
static irqreturn_t pcap_rtc_irq(int irq, void *_pcap_rtc)
static int pcap_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int pcap_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int pcap_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int pcap_rtc_set_mmss(struct device *dev, unsigned long secs)
static int pcap_rtc_irq_enable(struct device *dev, int pirq, unsigned int en)
static int pcap_rtc_alarm_irq_enable(struct device *dev, unsigned int en)
static const struct rtc_class_ops pcap_rtc_ops = ;
static int __devinit pcap_rtc_probe(struct platform_device *pdev)
static int __devexit pcap_rtc_remove(struct platform_device *pdev)
static struct platform_driver pcap_rtc_driver = ;
static int __init rtc_pcap_init(void)
static void __exit rtc_pcap_exit(void)
module_init(rtc_pcap_init);
module_exit(rtc_pcap_exit);
MODULE_DESCRIPTION("Motorola pcap rtc driver");
MODULE_AUTHOR("guiming zhuo <gmzhuo@gmail.com>");
MODULE_LICENSE("GPL");

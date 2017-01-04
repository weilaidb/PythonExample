struct pcap_ts ;
#define SAMPLE_DELAY	20
#define X_AXIS_MIN	0
#define X_AXIS_MAX	1023
#define Y_AXIS_MAX	X_AXIS_MAX
#define Y_AXIS_MIN	X_AXIS_MIN
#define PRESSURE_MAX	X_AXIS_MAX
#define PRESSURE_MIN	X_AXIS_MIN
static void pcap_ts_read_xy(void *data, u16 res[2])
static void pcap_ts_work(struct work_struct *work)
static irqreturn_t pcap_ts_event_touch(int pirq, void *data)
static int pcap_ts_open(struct input_dev *dev)
static void pcap_ts_close(struct input_dev *dev)
static int __devinit pcap_ts_probe(struct platform_device *pdev)
static int __devexit pcap_ts_remove(struct platform_device *pdev)
static int pcap_ts_suspend(struct device *dev)
static int pcap_ts_resume(struct device *dev)
static const struct dev_pm_ops pcap_ts_pm_ops = ;
#define PCAP_TS_PM_OPS (&pcap_ts_pm_ops)
#define PCAP_TS_PM_OPS NULL
static struct platform_driver pcap_ts_driver = ;
static int __init pcap_ts_init(void)
static void __exit pcap_ts_exit(void)
module_init(pcap_ts_init);
module_exit(pcap_ts_exit);
MODULE_DESCRIPTION("Motorola PCAP2 touchscreen driver");
MODULE_AUTHOR("Daniel Ribeiro / Harald Welte");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcap_ts");

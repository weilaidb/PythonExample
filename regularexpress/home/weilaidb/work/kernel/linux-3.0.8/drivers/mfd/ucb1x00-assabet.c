#define UCB1X00_ATTR(name,input)\
static ssize_t name##_show(struct device *dev, struct device_attribute *attr, \
char *buf)	\
\
static DEVICE_ATTR(name,0444,name##_show,NULL)
UCB1X00_ATTR(vbatt, UCB_ADC_INP_AD1);
UCB1X00_ATTR(vcharger, UCB_ADC_INP_AD0);
UCB1X00_ATTR(batt_temp, UCB_ADC_INP_AD2);
static int ucb1x00_assabet_add(struct ucb1x00_dev *dev)
static void ucb1x00_assabet_remove(struct ucb1x00_dev *dev)
static struct ucb1x00_driver ucb1x00_assabet_driver = ;
static int __init ucb1x00_assabet_init(void)
static void __exit ucb1x00_assabet_exit(void)
module_init(ucb1x00_assabet_init);
module_exit(ucb1x00_assabet_exit);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("Assabet noddy testing only example ADC driver");
MODULE_LICENSE("GPL");

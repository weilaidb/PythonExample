struct ams ams_info;
static unsigned int verbose;
module_param(verbose, bool, 0644);
MODULE_PARM_DESC(verbose, "Show free falls and shocks in kernel output");
void ams_sensors(s8 *x, s8 *y, s8 *z)
static ssize_t ams_show_current(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(current, S_IRUGO, ams_show_current, NULL);
static void ams_handle_irq(void *data)
static enum ams_irq ams_freefall_irq_data = AMS_IRQ_FREEFALL;
static struct pmf_irq_client ams_freefall_client = ;
static enum ams_irq ams_shock_irq_data = AMS_IRQ_SHOCK;
static struct pmf_irq_client ams_shock_client = ;
static void ams_worker(struct work_struct *work)
int ams_sensor_attach(void)
int __init ams_init(void)
void ams_sensor_detach(void)
static void __exit ams_exit(void)
MODULE_AUTHOR("Stelian Pop, Michael Hanselmann");
MODULE_DESCRIPTION("Apple Motion Sensor driver");
MODULE_LICENSE("GPL");
module_init(ams_init);
module_exit(ams_exit);

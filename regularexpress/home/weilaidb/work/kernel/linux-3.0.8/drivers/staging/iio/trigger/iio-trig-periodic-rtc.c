static LIST_HEAD(iio_prtc_trigger_list);
static DEFINE_MUTEX(iio_prtc_trigger_list_lock);
struct iio_prtc_trigger_info ;
static int iio_trig_periodic_rtc_set_state(struct iio_trigger *trig, bool state)
static ssize_t iio_trig_periodic_read_freq(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t iio_trig_periodic_write_freq(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static DEVICE_ATTR(frequency, S_IRUGO | S_IWUSR,
iio_trig_periodic_read_freq,
iio_trig_periodic_write_freq);
static struct attribute *iio_trig_prtc_attrs[] = ;
static const struct attribute_group iio_trig_prtc_attr_group = ;
static const struct attribute_group *iio_trig_prtc_attr_groups[] = ;
static void iio_prtc_trigger_poll(void *private_data)
static int iio_trig_periodic_rtc_probe(struct platform_device *dev)
static int iio_trig_periodic_rtc_remove(struct platform_device *dev)
static struct platform_driver iio_trig_periodic_rtc_driver = ;
static int __init iio_trig_periodic_rtc_init(void)
static void __exit iio_trig_periodic_rtc_exit(void)
module_init(iio_trig_periodic_rtc_init);
module_exit(iio_trig_periodic_rtc_exit);
MODULE_AUTHOR("Jonathan Cameron <jic23@cam.ac.uk>");
MODULE_DESCRIPTION("Periodic realtime clock  trigger for the iio subsystem");
MODULE_LICENSE("GPL v2");

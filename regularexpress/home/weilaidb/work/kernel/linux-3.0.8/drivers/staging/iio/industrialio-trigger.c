static DEFINE_IDR(iio_trigger_idr);
static DEFINE_SPINLOCK(iio_trigger_idr_lock);
static LIST_HEAD(iio_trigger_list);
static DEFINE_MUTEX(iio_trigger_list_lock);
static ssize_t iio_trigger_read_name(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(name, S_IRUGO, iio_trigger_read_name, NULL);
static int iio_trigger_register_sysfs(struct iio_trigger *trig_info)
static void iio_trigger_unregister_sysfs(struct iio_trigger *trig_info)
static int iio_trigger_register_id(struct iio_trigger *trig_info)
static void iio_trigger_unregister_id(struct iio_trigger *trig_info)
int iio_trigger_register(struct iio_trigger *trig_info)
EXPORT_SYMBOL(iio_trigger_register);
void iio_trigger_unregister(struct iio_trigger *trig_info)
EXPORT_SYMBOL(iio_trigger_unregister);
static struct iio_trigger *iio_trigger_find_by_name(const char *name,
size_t len)
void iio_trigger_poll(struct iio_trigger *trig, s64 time)
EXPORT_SYMBOL(iio_trigger_poll);
irqreturn_t iio_trigger_generic_data_rdy_poll(int irq, void *private)
EXPORT_SYMBOL(iio_trigger_generic_data_rdy_poll);
void iio_trigger_poll_chained(struct iio_trigger *trig, s64 time)
EXPORT_SYMBOL(iio_trigger_poll_chained);
void iio_trigger_notify_done(struct iio_trigger *trig)
EXPORT_SYMBOL(iio_trigger_notify_done);
int iio_trigger_attach_poll_func(struct iio_trigger *trig,
struct iio_poll_func *pf)
EXPORT_SYMBOL(iio_trigger_attach_poll_func);
int iio_trigger_dettach_poll_func(struct iio_trigger *trig,
struct iio_poll_func *pf)
EXPORT_SYMBOL(iio_trigger_dettach_poll_func);
irqreturn_t iio_pollfunc_store_time(int irq, void *p)
EXPORT_SYMBOL(iio_pollfunc_store_time);
struct iio_poll_func
*iio_alloc_pollfunc(irqreturn_t (*h)(int irq, void *p),
irqreturn_t (*thread)(int irq, void *p),
int type,
void *private,
const char *fmt,
...)
EXPORT_SYMBOL_GPL(iio_alloc_pollfunc);
void iio_dealloc_pollfunc(struct iio_poll_func *pf)
EXPORT_SYMBOL_GPL(iio_dealloc_pollfunc);
static ssize_t iio_trigger_read_current(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t iio_trigger_write_current(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static DEVICE_ATTR(current_trigger, S_IRUGO | S_IWUSR,
iio_trigger_read_current,
iio_trigger_write_current);
static struct attribute *iio_trigger_consumer_attrs[] = ;
static const struct attribute_group iio_trigger_consumer_attr_group = ;
static void iio_trig_release(struct device *device)
static struct device_type iio_trig_type = ;
static void iio_trig_subirqmask(struct irq_data *d)
static void iio_trig_subirqunmask(struct irq_data *d)
struct iio_trigger *iio_allocate_trigger(const char *fmt, ...)
EXPORT_SYMBOL(iio_allocate_trigger);
void iio_free_trigger(struct iio_trigger *trig)
EXPORT_SYMBOL(iio_free_trigger);
int iio_device_register_trigger_consumer(struct iio_dev *dev_info)
EXPORT_SYMBOL(iio_device_register_trigger_consumer);
int iio_device_unregister_trigger_consumer(struct iio_dev *dev_info)
EXPORT_SYMBOL(iio_device_unregister_trigger_consumer);
int iio_triggered_ring_postenable(struct iio_dev *indio_dev)
EXPORT_SYMBOL(iio_triggered_ring_postenable);
int iio_triggered_ring_predisable(struct iio_dev *indio_dev)
EXPORT_SYMBOL(iio_triggered_ring_predisable);

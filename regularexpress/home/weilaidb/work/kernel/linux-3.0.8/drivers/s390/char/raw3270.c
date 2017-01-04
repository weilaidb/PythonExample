static struct class *class3270;
struct raw3270 ;
#define RAW3270_FLAGS_14BITADDR	0
#define RAW3270_FLAGS_BUSY	1
#define RAW3270_FLAGS_ATTN	2
#define RAW3270_FLAGS_READY	4
#define RAW3270_FLAGS_CONSOLE	8
#define RAW3270_FLAGS_FROZEN	16
static DEFINE_MUTEX(raw3270_mutex);
static LIST_HEAD(raw3270_devices);
static int raw3270_registered;
static int tubxcorrect = 0;
module_param(tubxcorrect, bool, 0);
DECLARE_WAIT_QUEUE_HEAD(raw3270_wait_queue);
static unsigned char raw3270_ebcgraf[64] =	;
void
raw3270_buffer_address(struct raw3270 *rp, char *cp, unsigned short addr)
struct raw3270_request *
raw3270_request_alloc(size_t size)
void
raw3270_request_free (struct raw3270_request *rq)
void
raw3270_request_reset(struct raw3270_request *rq)
void
raw3270_request_set_cmd(struct raw3270_request *rq, u8 cmd)
int
raw3270_request_add_data(struct raw3270_request *rq, void *data, size_t size)
void
raw3270_request_set_data(struct raw3270_request *rq, void *data, size_t size)
void
raw3270_request_set_idal(struct raw3270_request *rq, struct idal_buffer *ib)
static int
raw3270_halt_io_nolock(struct raw3270 *rp, struct raw3270_request *rq)
static int
raw3270_halt_io(struct raw3270 *rp, struct raw3270_request *rq)
static int
__raw3270_start(struct raw3270 *rp, struct raw3270_view *view,
struct raw3270_request *rq)
int
raw3270_start(struct raw3270_view *view, struct raw3270_request *rq)
int
raw3270_start_locked(struct raw3270_view *view, struct raw3270_request *rq)
int
raw3270_start_irq(struct raw3270_view *view, struct raw3270_request *rq)
static void
raw3270_irq (struct ccw_device *cdev, unsigned long intparm, struct irb *irb)
struct raw3270_ua  __attribute__ ((packed));
static struct diag210 raw3270_init_diag210;
static DEFINE_MUTEX(raw3270_init_mutex);
static int
raw3270_init_irq(struct raw3270_view *view, struct raw3270_request *rq,
struct irb *irb)
static struct raw3270_fn raw3270_init_fn = ;
static struct raw3270_view raw3270_init_view = ;
static void
raw3270_wake_init(struct raw3270_request *rq, void *data)
static int
raw3270_start_init(struct raw3270 *rp, struct raw3270_view *view,
struct raw3270_request *rq)
static int
__raw3270_size_device_vm(struct raw3270 *rp)
static int
__raw3270_size_device(struct raw3270 *rp)
static int
raw3270_size_device(struct raw3270 *rp)
static int
raw3270_reset_device(struct raw3270 *rp)
int
raw3270_reset(struct raw3270_view *view)
static int
raw3270_setup_device(struct ccw_device *cdev, struct raw3270 *rp, char *ascebc)
struct raw3270 __init *raw3270_setup_console(struct ccw_device *cdev)
void
raw3270_wait_cons_dev(struct raw3270 *rp)
static struct raw3270 *
raw3270_create_device(struct ccw_device *cdev)
int
raw3270_activate_view(struct raw3270_view *view)
void
raw3270_deactivate_view(struct raw3270_view *view)
int
raw3270_add_view(struct raw3270_view *view, struct raw3270_fn *fn, int minor)
struct raw3270_view *
raw3270_find_view(struct raw3270_fn *fn, int minor)
void
raw3270_del_view(struct raw3270_view *view)
static void
raw3270_delete_device(struct raw3270 *rp)
static int
raw3270_probe (struct ccw_device *cdev)
static ssize_t
raw3270_model_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(model, 0444, raw3270_model_show, NULL);
static ssize_t
raw3270_rows_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(rows, 0444, raw3270_rows_show, NULL);
static ssize_t
raw3270_columns_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(columns, 0444, raw3270_columns_show, NULL);
static struct attribute * raw3270_attrs[] = ;
static struct attribute_group raw3270_attr_group = ;
static int raw3270_create_attributes(struct raw3270 *rp)
struct raw3270_notifier ;
static LIST_HEAD(raw3270_notifier);
int raw3270_register_notifier(void (*notifier)(int, int))
void raw3270_unregister_notifier(void (*notifier)(int, int))
static int
raw3270_set_online (struct ccw_device *cdev)
static void
raw3270_remove (struct ccw_device *cdev)
static int
raw3270_set_offline (struct ccw_device *cdev)
static int raw3270_pm_stop(struct ccw_device *cdev)
static int raw3270_pm_start(struct ccw_device *cdev)
void raw3270_pm_unfreeze(struct raw3270_view *view)
static struct ccw_device_id raw3270_id[] = ;
static struct ccw_driver raw3270_ccw_driver = ;
static int
raw3270_init(void)
static void
raw3270_exit(void)
MODULE_LICENSE("GPL");
module_init(raw3270_init);
module_exit(raw3270_exit);
EXPORT_SYMBOL(raw3270_request_alloc);
EXPORT_SYMBOL(raw3270_request_free);
EXPORT_SYMBOL(raw3270_request_reset);
EXPORT_SYMBOL(raw3270_request_set_cmd);
EXPORT_SYMBOL(raw3270_request_add_data);
EXPORT_SYMBOL(raw3270_request_set_data);
EXPORT_SYMBOL(raw3270_request_set_idal);
EXPORT_SYMBOL(raw3270_buffer_address);
EXPORT_SYMBOL(raw3270_add_view);
EXPORT_SYMBOL(raw3270_del_view);
EXPORT_SYMBOL(raw3270_find_view);
EXPORT_SYMBOL(raw3270_activate_view);
EXPORT_SYMBOL(raw3270_deactivate_view);
EXPORT_SYMBOL(raw3270_start);
EXPORT_SYMBOL(raw3270_start_locked);
EXPORT_SYMBOL(raw3270_start_irq);
EXPORT_SYMBOL(raw3270_reset);
EXPORT_SYMBOL(raw3270_register_notifier);
EXPORT_SYMBOL(raw3270_unregister_notifier);
EXPORT_SYMBOL(raw3270_wait_queue);

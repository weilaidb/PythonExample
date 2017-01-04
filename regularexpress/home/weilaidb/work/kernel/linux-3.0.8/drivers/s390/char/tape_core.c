#define KMSG_COMPONENT "tape"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define TAPE_DBF_AREA	tape_core_dbf
#define LONG_BUSY_TIMEOUT 180
static void __tape_do_irq (struct ccw_device *, unsigned long, struct irb *);
static void tape_delayed_next_request(struct work_struct *);
static void tape_long_busy_timeout(unsigned long data);
static LIST_HEAD(tape_device_list);
static DEFINE_RWLOCK(tape_device_lock);
debug_info_t *TAPE_DBF_AREA = NULL;
EXPORT_SYMBOL(TAPE_DBF_AREA);
const char *tape_state_verbose[TS_SIZE] =
;
const char *tape_op_verbose[TO_SIZE] =
;
static int devid_to_int(struct ccw_dev_id *dev_id)
static ssize_t
tape_medium_state_show(struct device *dev, struct device_attribute *attr, char *buf)
static
DEVICE_ATTR(medium_state, 0444, tape_medium_state_show, NULL);
static ssize_t
tape_first_minor_show(struct device *dev, struct device_attribute *attr, char *buf)
static
DEVICE_ATTR(first_minor, 0444, tape_first_minor_show, NULL);
static ssize_t
tape_state_show(struct device *dev, struct device_attribute *attr, char *buf)
static
DEVICE_ATTR(state, 0444, tape_state_show, NULL);
static ssize_t
tape_operation_show(struct device *dev, struct device_attribute *attr, char *buf)
static
DEVICE_ATTR(operation, 0444, tape_operation_show, NULL);
static ssize_t
tape_blocksize_show(struct device *dev, struct device_attribute *attr, char *buf)
static
DEVICE_ATTR(blocksize, 0444, tape_blocksize_show, NULL);
static struct attribute *tape_attrs[] = ;
static struct attribute_group tape_attr_group = ;
void
tape_state_set(struct tape_device *device, enum tape_state newstate)
struct tape_med_state_work_data ;
static void
tape_med_state_work_handler(struct work_struct *work)
static void
tape_med_state_work(struct tape_device *device, enum tape_medium_state state)
void
tape_med_state_set(struct tape_device *device, enum tape_medium_state newstate)
static int
__tape_cancel_io(struct tape_device *device, struct tape_request *request)
static int
tape_assign_minor(struct tape_device *device)
static void
tape_remove_minor(struct tape_device *device)
int
tape_generic_online(struct tape_device *device,
struct tape_discipline *discipline)
static void
tape_cleanup_device(struct tape_device *device)
int tape_generic_pm_suspend(struct ccw_device *cdev)
int
tape_generic_offline(struct ccw_device *cdev)
static struct tape_device *
tape_alloc_device(void)
struct tape_device *
tape_get_device(struct tape_device *device)
void
tape_put_device(struct tape_device *device)
struct tape_device *
tape_find_device(int devindex)
int
tape_generic_probe(struct ccw_device *cdev)
static void
__tape_discard_requests(struct tape_device *device)
void
tape_generic_remove(struct ccw_device *cdev)
struct tape_request *
tape_alloc_request(int cplength, int datasize)
void
tape_free_request (struct tape_request * request)
static int
__tape_start_io(struct tape_device *device, struct tape_request *request)
static void
__tape_start_next_request(struct tape_device *device)
static void
tape_delayed_next_request(struct work_struct *work)
static void tape_long_busy_timeout(unsigned long data)
static void
__tape_end_request(
struct tape_device *	device,
struct tape_request *	request,
int			rc)
void
tape_dump_sense_dbf(struct tape_device *device, struct tape_request *request,
struct irb *irb)
static int
__tape_start_request(struct tape_device *device, struct tape_request *request)
int
tape_do_io_async(struct tape_device *device, struct tape_request *request)
static void
__tape_wake_up(struct tape_request *request, void *data)
int
tape_do_io(struct tape_device *device, struct tape_request *request)
static void
__tape_wake_up_interruptible(struct tape_request *request, void *data)
int
tape_do_io_interruptible(struct tape_device *device,
struct tape_request *request)
int
tape_cancel_io(struct tape_device *device, struct tape_request *request)
static void
__tape_do_irq (struct ccw_device *cdev, unsigned long intparm, struct irb *irb)
int
tape_open(struct tape_device *device)
int
tape_release(struct tape_device *device)
int
tape_mtop(struct tape_device *device, int mt_op, int mt_count)
static int
tape_init (void)
static void
tape_exit(void)
MODULE_AUTHOR("(C) 2001 IBM Deutschland Entwicklung GmbH by Carsten Otte and "
"Michael Holzheu (cotte@de.ibm.com,holzheu@de.ibm.com)");
MODULE_DESCRIPTION("Linux on zSeries channel attached tape device driver");
MODULE_LICENSE("GPL");
module_init(tape_init);
module_exit(tape_exit);
EXPORT_SYMBOL(tape_generic_remove);
EXPORT_SYMBOL(tape_generic_probe);
EXPORT_SYMBOL(tape_generic_online);
EXPORT_SYMBOL(tape_generic_offline);
EXPORT_SYMBOL(tape_generic_pm_suspend);
EXPORT_SYMBOL(tape_put_device);
EXPORT_SYMBOL(tape_get_device);
EXPORT_SYMBOL(tape_state_verbose);
EXPORT_SYMBOL(tape_op_verbose);
EXPORT_SYMBOL(tape_state_set);
EXPORT_SYMBOL(tape_med_state_set);
EXPORT_SYMBOL(tape_alloc_request);
EXPORT_SYMBOL(tape_free_request);
EXPORT_SYMBOL(tape_dump_sense_dbf);
EXPORT_SYMBOL(tape_do_io);
EXPORT_SYMBOL(tape_do_io_async);
EXPORT_SYMBOL(tape_do_io_interruptible);
EXPORT_SYMBOL(tape_cancel_io);
EXPORT_SYMBOL(tape_mtop);

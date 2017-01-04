#define HVCS_DRIVER_VERSION "1.3.3"
MODULE_AUTHOR("Ryan S. Arnold <rsa@us.ibm.com>");
MODULE_DESCRIPTION("IBM hvcs (Hypervisor Virtual Console Server) Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(HVCS_DRIVER_VERSION);
#define HVCS_CLOSE_WAIT (HZ/100)
#define HVCS_DEFAULT_SERVER_ADAPTERS	64
#define HVCS_MAX_SERVER_ADAPTERS	1024
#define HVCS_MINOR_START	0
#define __ALIGNED__	__attribute__((__aligned__(8)))
#define HVCS_BUFF_LEN	16
#define HVCS_MAX_FROM_USER	4096
static struct ktermios hvcs_tty_termios = ;
static int hvcs_parm_num_devs = -1;
module_param(hvcs_parm_num_devs, int, 0);
static const char hvcs_driver_name[] = "hvcs";
static const char hvcs_device_node[] = "hvcs";
static const char hvcs_driver_string[]
= "IBM hvcs (Hypervisor Virtual Console Server) Driver";
static int hvcs_rescan_status;
static struct tty_driver *hvcs_tty_driver;
static int *hvcs_index_list;
static int hvcs_index_count;
static int hvcs_kicked;
static struct task_struct *hvcs_task;
static unsigned long *hvcs_pi_buff;
static DEFINE_SPINLOCK(hvcs_pi_lock);
struct hvcs_struct ;
#define from_kref(k) container_of(k, struct hvcs_struct, kref)
static LIST_HEAD(hvcs_structs);
static DEFINE_SPINLOCK(hvcs_structs_lock);
static DEFINE_MUTEX(hvcs_init_mutex);
static void hvcs_unthrottle(struct tty_struct *tty);
static void hvcs_throttle(struct tty_struct *tty);
static irqreturn_t hvcs_handle_interrupt(int irq, void *dev_instance);
static int hvcs_write(struct tty_struct *tty,
const unsigned char *buf, int count);
static int hvcs_write_room(struct tty_struct *tty);
static int hvcs_chars_in_buffer(struct tty_struct *tty);
static int hvcs_has_pi(struct hvcs_struct *hvcsd);
static void hvcs_set_pi(struct hvcs_partner_info *pi,
struct hvcs_struct *hvcsd);
static int hvcs_get_pi(struct hvcs_struct *hvcsd);
static int hvcs_rescan_devices_list(void);
static int hvcs_partner_connect(struct hvcs_struct *hvcsd);
static void hvcs_partner_free(struct hvcs_struct *hvcsd);
static int hvcs_enable_device(struct hvcs_struct *hvcsd,
uint32_t unit_address, unsigned int irq, struct vio_dev *dev);
static int hvcs_open(struct tty_struct *tty, struct file *filp);
static void hvcs_close(struct tty_struct *tty, struct file *filp);
static void hvcs_hangup(struct tty_struct * tty);
static int __devinit hvcs_probe(struct vio_dev *dev,
const struct vio_device_id *id);
static int __devexit hvcs_remove(struct vio_dev *dev);
static int __init hvcs_module_init(void);
static void __exit hvcs_module_exit(void);
static int __devinit hvcs_initialize(void);
#define HVCS_SCHED_READ	0x00000001
#define HVCS_QUICK_READ	0x00000002
#define HVCS_TRY_WRITE	0x00000004
#define HVCS_READ_MASK	(HVCS_SCHED_READ | HVCS_QUICK_READ)
static inline struct hvcs_struct *from_vio_dev(struct vio_dev *viod)
static ssize_t hvcs_partner_vtys_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(partner_vtys, S_IRUGO, hvcs_partner_vtys_show, NULL);
static ssize_t hvcs_partner_clcs_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(partner_clcs, S_IRUGO, hvcs_partner_clcs_show, NULL);
static ssize_t hvcs_current_vty_store(struct device *dev, struct device_attribute *attr, const char * buf,
size_t count)
static ssize_t hvcs_current_vty_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(current_vty,
S_IRUGO | S_IWUSR, hvcs_current_vty_show, hvcs_current_vty_store);
static ssize_t hvcs_vterm_state_store(struct device *dev, struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t hvcs_vterm_state_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(vterm_state, S_IRUGO | S_IWUSR,
hvcs_vterm_state_show, hvcs_vterm_state_store);
static ssize_t hvcs_index_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(index, S_IRUGO, hvcs_index_show, NULL);
static struct attribute *hvcs_attrs[] = ;
static struct attribute_group hvcs_attr_group = ;
static ssize_t hvcs_rescan_show(struct device_driver *ddp, char *buf)
static ssize_t hvcs_rescan_store(struct device_driver *ddp, const char * buf,
size_t count)
static DRIVER_ATTR(rescan,
S_IRUGO | S_IWUSR, hvcs_rescan_show, hvcs_rescan_store);
static void hvcs_kick(void)
static void hvcs_unthrottle(struct tty_struct *tty)
static void hvcs_throttle(struct tty_struct *tty)
static irqreturn_t hvcs_handle_interrupt(int irq, void *dev_instance)
static void hvcs_try_write(struct hvcs_struct *hvcsd)
static int hvcs_io(struct hvcs_struct *hvcsd)
static int khvcsd(void *unused)
static struct vio_device_id hvcs_driver_table[] __devinitdata= ;
MODULE_DEVICE_TABLE(vio, hvcs_driver_table);
static void hvcs_return_index(int index)
static void destroy_hvcs_struct(struct kref *kref)
static int hvcs_get_index(void)
static int __devinit hvcs_probe(
struct vio_dev *dev,
const struct vio_device_id *id)
static int __devexit hvcs_remove(struct vio_dev *dev)
;
static struct vio_driver hvcs_vio_driver = ;
static void hvcs_set_pi(struct hvcs_partner_info *pi, struct hvcs_struct *hvcsd)
static int hvcs_get_pi(struct hvcs_struct *hvcsd)
static int hvcs_rescan_devices_list(void)
static int hvcs_has_pi(struct hvcs_struct *hvcsd)
static int hvcs_partner_connect(struct hvcs_struct *hvcsd)
static void hvcs_partner_free(struct hvcs_struct *hvcsd)
static int hvcs_enable_device(struct hvcs_struct *hvcsd, uint32_t unit_address,
unsigned int irq, struct vio_dev *vdev)
static struct hvcs_struct *hvcs_get_by_index(int index)
static int hvcs_open(struct tty_struct *tty, struct file *filp)
static void hvcs_close(struct tty_struct *tty, struct file *filp)
static void hvcs_hangup(struct tty_struct * tty)
static int hvcs_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int hvcs_write_room(struct tty_struct *tty)
static int hvcs_chars_in_buffer(struct tty_struct *tty)
static const struct tty_operations hvcs_ops = ;
static int hvcs_alloc_index_list(int n)
static void hvcs_free_index_list(void)
static int __devinit hvcs_initialize(void)
static int __init hvcs_module_init(void)
static void __exit hvcs_module_exit(void)
module_init(hvcs_module_init);
module_exit(hvcs_module_exit);

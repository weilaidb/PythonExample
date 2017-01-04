struct ports_driver_data ;
static struct ports_driver_data pdrvdata;
DEFINE_SPINLOCK(pdrvdata_lock);
struct console ;
struct port_buffer ;
struct ports_device ;
struct port ;
static int (*early_put_chars)(u32, const char *, int);
static struct port *find_port_by_vtermno(u32 vtermno)
static struct port *find_port_by_devt_in_portdev(struct ports_device *portdev,
dev_t dev)
static struct port *find_port_by_devt(dev_t dev)
static struct port *find_port_by_id(struct ports_device *portdev, u32 id)
static struct port *find_port_by_vq(struct ports_device *portdev,
struct virtqueue *vq)
static bool is_console_port(struct port *port)
static inline bool use_multiport(struct ports_device *portdev)
static void free_buf(struct port_buffer *buf)
static struct port_buffer *alloc_buf(size_t buf_size)
static void *get_inbuf(struct port *port)
static int add_inbuf(struct virtqueue *vq, struct port_buffer *buf)
static void discard_port_data(struct port *port)
static bool port_has_data(struct port *port)
static ssize_t __send_control_msg(struct ports_device *portdev, u32 port_id,
unsigned int event, unsigned int value)
static ssize_t send_control_msg(struct port *port, unsigned int event,
unsigned int value)
static void reclaim_consumed_buffers(struct port *port)
static ssize_t send_buf(struct port *port, void *in_buf, size_t in_count,
bool nonblock)
static ssize_t fill_readbuf(struct port *port, char *out_buf, size_t out_count,
bool to_user)
static bool will_read_block(struct port *port)
static bool will_write_block(struct port *port)
static ssize_t port_fops_read(struct file *filp, char __user *ubuf,
size_t count, loff_t *offp)
static ssize_t port_fops_write(struct file *filp, const char __user *ubuf,
size_t count, loff_t *offp)
static unsigned int port_fops_poll(struct file *filp, poll_table *wait)
static void remove_port(struct kref *kref);
static int port_fops_release(struct inode *inode, struct file *filp)
static int port_fops_open(struct inode *inode, struct file *filp)
static int port_fops_fasync(int fd, struct file *filp, int mode)
static const struct file_operations port_fops = ;
static int put_chars(u32 vtermno, const char *buf, int count)
static int get_chars(u32 vtermno, char *buf, int count)
static void resize_console(struct port *port)
static int notifier_add_vio(struct hvc_struct *hp, int data)
static void notifier_del_vio(struct hvc_struct *hp, int data)
static const struct hv_ops hv_ops = ;
int __init virtio_cons_early_init(int (*put_chars)(u32, const char *, int))
int init_port_console(struct port *port)
static ssize_t show_port_name(struct device *dev,
struct device_attribute *attr, char *buffer)
static DEVICE_ATTR(name, S_IRUGO, show_port_name, NULL);
static struct attribute *port_sysfs_entries[] = ;
static struct attribute_group port_attribute_group = ;
static int debugfs_open(struct inode *inode, struct file *filp)
static ssize_t debugfs_read(struct file *filp, char __user *ubuf,
size_t count, loff_t *offp)
static const struct file_operations port_debugfs_ops = ;
static void set_console_size(struct port *port, u16 rows, u16 cols)
static unsigned int fill_queue(struct virtqueue *vq, spinlock_t *lock)
static void send_sigio_to_port(struct port *port)
static int add_port(struct ports_device *portdev, u32 id)
static void remove_port(struct kref *kref)
static void unplug_port(struct port *port)
static void handle_control_message(struct ports_device *portdev,
struct port_buffer *buf)
static void control_work_handler(struct work_struct *work)
static void out_intr(struct virtqueue *vq)
static void in_intr(struct virtqueue *vq)
static void control_intr(struct virtqueue *vq)
static void config_intr(struct virtio_device *vdev)
static int init_vqs(struct ports_device *portdev)
static const struct file_operations portdev_fops = ;
static int __devinit virtcons_probe(struct virtio_device *vdev)
static void virtcons_remove(struct virtio_device *vdev)
static struct virtio_device_id id_table[] = ;
static unsigned int features[] = ;
static struct virtio_driver virtio_console = ;
static int __init init(void)
static void __exit fini(void)
module_init(init);
module_exit(fini);
MODULE_DEVICE_TABLE(virtio, id_table);
MODULE_DESCRIPTION("Virtio console driver");
MODULE_LICENSE("GPL");

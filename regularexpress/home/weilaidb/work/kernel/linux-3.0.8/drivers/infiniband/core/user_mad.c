MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("InfiniBand userspace MAD packet access");
MODULE_LICENSE("Dual BSD/GPL");
enum ;
struct ib_umad_port ;
struct ib_umad_device ;
struct ib_umad_file ;
struct ib_umad_packet ;
static struct class *umad_class;
static const dev_t base_dev = MKDEV(IB_UMAD_MAJOR, IB_UMAD_MINOR_BASE);
static DEFINE_SPINLOCK(port_lock);
static DECLARE_BITMAP(dev_map, IB_UMAD_MAX_PORTS);
static void ib_umad_add_one(struct ib_device *device);
static void ib_umad_remove_one(struct ib_device *device);
static void ib_umad_release_dev(struct kref *ref)
static int hdr_size(struct ib_umad_file *file)
static struct ib_mad_agent *__get_agent(struct ib_umad_file *file, int id)
static int queue_packet(struct ib_umad_file *file,
struct ib_mad_agent *agent,
struct ib_umad_packet *packet)
static void dequeue_send(struct ib_umad_file *file,
struct ib_umad_packet *packet)
static void send_handler(struct ib_mad_agent *agent,
struct ib_mad_send_wc *send_wc)
static void recv_handler(struct ib_mad_agent *agent,
struct ib_mad_recv_wc *mad_recv_wc)
static ssize_t copy_recv_mad(struct ib_umad_file *file, char __user *buf,
struct ib_umad_packet *packet, size_t count)
static ssize_t copy_send_mad(struct ib_umad_file *file, char __user *buf,
struct ib_umad_packet *packet, size_t count)
static ssize_t ib_umad_read(struct file *filp, char __user *buf,
size_t count, loff_t *pos)
static int copy_rmpp_mad(struct ib_mad_send_buf *msg, const char __user *buf)
static int same_destination(struct ib_user_mad_hdr *hdr1,
struct ib_user_mad_hdr *hdr2)
static int is_duplicate(struct ib_umad_file *file,
struct ib_umad_packet *packet)
static ssize_t ib_umad_write(struct file *filp, const char __user *buf,
size_t count, loff_t *pos)
static unsigned int ib_umad_poll(struct file *filp, struct poll_table_struct *wait)
static int ib_umad_reg_agent(struct ib_umad_file *file, void __user *arg,
int compat_method_mask)
static int ib_umad_unreg_agent(struct ib_umad_file *file, u32 __user *arg)
static long ib_umad_enable_pkey(struct ib_umad_file *file)
static long ib_umad_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static long ib_umad_compat_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static int ib_umad_open(struct inode *inode, struct file *filp)
static int ib_umad_close(struct inode *inode, struct file *filp)
static const struct file_operations umad_fops = ;
static int ib_umad_sm_open(struct inode *inode, struct file *filp)
static int ib_umad_sm_close(struct inode *inode, struct file *filp)
static const struct file_operations umad_sm_fops = ;
static struct ib_client umad_client = ;
static ssize_t show_ibdev(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ibdev, S_IRUGO, show_ibdev, NULL);
static ssize_t show_port(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(port, S_IRUGO, show_port, NULL);
static CLASS_ATTR_STRING(abi_version, S_IRUGO,
__stringify(IB_USER_MAD_ABI_VERSION));
static dev_t overflow_maj;
static DECLARE_BITMAP(overflow_map, IB_UMAD_MAX_PORTS);
static int find_overflow_devnum(void)
static int ib_umad_init_port(struct ib_device *device, int port_num,
struct ib_umad_port *port)
static void ib_umad_kill_port(struct ib_umad_port *port)
static void ib_umad_add_one(struct ib_device *device)
static void ib_umad_remove_one(struct ib_device *device)
static char *umad_devnode(struct device *dev, mode_t *mode)
static int __init ib_umad_init(void)
static void __exit ib_umad_cleanup(void)
module_init(ib_umad_init);
module_exit(ib_umad_cleanup);

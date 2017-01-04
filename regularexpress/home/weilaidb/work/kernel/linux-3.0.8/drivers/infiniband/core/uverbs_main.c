MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("InfiniBand userspace verbs access");
MODULE_LICENSE("Dual BSD/GPL");
enum ;
#define IB_UVERBS_BASE_DEV	MKDEV(IB_UVERBS_MAJOR, IB_UVERBS_BASE_MINOR)
static struct class *uverbs_class;
DEFINE_SPINLOCK(ib_uverbs_idr_lock);
DEFINE_IDR(ib_uverbs_pd_idr);
DEFINE_IDR(ib_uverbs_mr_idr);
DEFINE_IDR(ib_uverbs_mw_idr);
DEFINE_IDR(ib_uverbs_ah_idr);
DEFINE_IDR(ib_uverbs_cq_idr);
DEFINE_IDR(ib_uverbs_qp_idr);
DEFINE_IDR(ib_uverbs_srq_idr);
static DEFINE_SPINLOCK(map_lock);
static DECLARE_BITMAP(dev_map, IB_UVERBS_MAX_DEVICES);
static ssize_t (*uverbs_cmd_table[])(struct ib_uverbs_file *file,
const char __user *buf, int in_len,
int out_len) = ;
static void ib_uverbs_add_one(struct ib_device *device);
static void ib_uverbs_remove_one(struct ib_device *device);
static void ib_uverbs_release_dev(struct kref *ref)
static void ib_uverbs_release_event_file(struct kref *ref)
void ib_uverbs_release_ucq(struct ib_uverbs_file *file,
struct ib_uverbs_event_file *ev_file,
struct ib_ucq_object *uobj)
void ib_uverbs_release_uevent(struct ib_uverbs_file *file,
struct ib_uevent_object *uobj)
static void ib_uverbs_detach_umcast(struct ib_qp *qp,
struct ib_uqp_object *uobj)
static int ib_uverbs_cleanup_ucontext(struct ib_uverbs_file *file,
struct ib_ucontext *context)
static void ib_uverbs_release_file(struct kref *ref)
static ssize_t ib_uverbs_event_read(struct file *filp, char __user *buf,
size_t count, loff_t *pos)
static unsigned int ib_uverbs_event_poll(struct file *filp,
struct poll_table_struct *wait)
static int ib_uverbs_event_fasync(int fd, struct file *filp, int on)
static int ib_uverbs_event_close(struct inode *inode, struct file *filp)
static const struct file_operations uverbs_event_fops = ;
void ib_uverbs_comp_handler(struct ib_cq *cq, void *cq_context)
static void ib_uverbs_async_handler(struct ib_uverbs_file *file,
__u64 element, __u64 event,
struct list_head *obj_list,
u32 *counter)
void ib_uverbs_cq_event_handler(struct ib_event *event, void *context_ptr)
void ib_uverbs_qp_event_handler(struct ib_event *event, void *context_ptr)
void ib_uverbs_srq_event_handler(struct ib_event *event, void *context_ptr)
void ib_uverbs_event_handler(struct ib_event_handler *handler,
struct ib_event *event)
struct file *ib_uverbs_alloc_event_file(struct ib_uverbs_file *uverbs_file,
int is_async)
struct ib_uverbs_event_file *ib_uverbs_lookup_comp_file(int fd)
static ssize_t ib_uverbs_write(struct file *filp, const char __user *buf,
size_t count, loff_t *pos)
static int ib_uverbs_mmap(struct file *filp, struct vm_area_struct *vma)
static int ib_uverbs_open(struct inode *inode, struct file *filp)
static int ib_uverbs_close(struct inode *inode, struct file *filp)
static const struct file_operations uverbs_fops = ;
static const struct file_operations uverbs_mmap_fops = ;
static struct ib_client uverbs_client = ;
static ssize_t show_ibdev(struct device *device, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ibdev, S_IRUGO, show_ibdev, NULL);
static ssize_t show_dev_abi_version(struct device *device,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(abi_version, S_IRUGO, show_dev_abi_version, NULL);
static CLASS_ATTR_STRING(abi_version, S_IRUGO,
__stringify(IB_USER_VERBS_ABI_VERSION));
static dev_t overflow_maj;
static DECLARE_BITMAP(overflow_map, IB_UVERBS_MAX_DEVICES);
static int find_overflow_devnum(void)
static void ib_uverbs_add_one(struct ib_device *device)
static void ib_uverbs_remove_one(struct ib_device *device)
static char *uverbs_devnode(struct device *dev, mode_t *mode)
static int __init ib_uverbs_init(void)
static void __exit ib_uverbs_cleanup(void)
module_init(ib_uverbs_init);
module_exit(ib_uverbs_cleanup);

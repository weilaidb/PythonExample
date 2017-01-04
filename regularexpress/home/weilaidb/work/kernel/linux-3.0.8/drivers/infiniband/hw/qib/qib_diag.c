enum diag_state ;
static struct qib_diag_client  *client_pool;
static struct qib_diag_client *get_client(struct qib_devdata *dd)
static void return_client(struct qib_diag_client *dc)
static int qib_diag_open(struct inode *in, struct file *fp);
static int qib_diag_release(struct inode *in, struct file *fp);
static ssize_t qib_diag_read(struct file *fp, char __user *data,
size_t count, loff_t *off);
static ssize_t qib_diag_write(struct file *fp, const char __user *data,
size_t count, loff_t *off);
static const struct file_operations diag_file_ops = ;
static atomic_t diagpkt_count = ATOMIC_INIT(0);
static struct cdev *diagpkt_cdev;
static struct device *diagpkt_device;
static ssize_t qib_diagpkt_write(struct file *fp, const char __user *data,
size_t count, loff_t *off);
static const struct file_operations diagpkt_file_ops = ;
int qib_diag_add(struct qib_devdata *dd)
static void qib_unregister_observers(struct qib_devdata *dd);
void qib_diag_remove(struct qib_devdata *dd)
static u32 __iomem *qib_remap_ioaddr32(struct qib_devdata *dd, u32 offset,
u32 *cntp)
static int qib_read_umem64(struct qib_devdata *dd, void __user *uaddr,
u32 regoffs, size_t count)
static int qib_write_umem64(struct qib_devdata *dd, u32 regoffs,
const void __user *uaddr, size_t count)
static int qib_read_umem32(struct qib_devdata *dd, void __user *uaddr,
u32 regoffs, size_t count)
static int qib_write_umem32(struct qib_devdata *dd, u32 regoffs,
const void __user *uaddr, size_t count)
static int qib_diag_open(struct inode *in, struct file *fp)
static ssize_t qib_diagpkt_write(struct file *fp,
const char __user *data,
size_t count, loff_t *off)
static int qib_diag_release(struct inode *in, struct file *fp)
struct diag_observer_list_elt ;
int qib_register_observer(struct qib_devdata *dd,
const struct diag_observer *op)
static void qib_unregister_observers(struct qib_devdata *dd)
static const struct diag_observer *diag_get_observer(struct qib_devdata *dd,
u32 addr)
static ssize_t qib_diag_read(struct file *fp, char __user *data,
size_t count, loff_t *off)
static ssize_t qib_diag_write(struct file *fp, const char __user *data,
size_t count, loff_t *off)

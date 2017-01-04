int ipath_diag_inuse;
static int diag_set_link;
static int ipath_diag_open(struct inode *in, struct file *fp);
static int ipath_diag_release(struct inode *in, struct file *fp);
static ssize_t ipath_diag_read(struct file *fp, char __user *data,
size_t count, loff_t *off);
static ssize_t ipath_diag_write(struct file *fp, const char __user *data,
size_t count, loff_t *off);
static const struct file_operations diag_file_ops = ;
static ssize_t ipath_diagpkt_write(struct file *fp,
const char __user *data,
size_t count, loff_t *off);
static const struct file_operations diagpkt_file_ops = ;
static atomic_t diagpkt_count = ATOMIC_INIT(0);
static struct cdev *diagpkt_cdev;
static struct device *diagpkt_dev;
int ipath_diag_add(struct ipath_devdata *dd)
void ipath_diag_remove(struct ipath_devdata *dd)
static int ipath_read_umem64(struct ipath_devdata *dd, void __user *uaddr,
const void __iomem *caddr, size_t count)
static int ipath_write_umem64(struct ipath_devdata *dd, void __iomem *caddr,
const void __user *uaddr, size_t count)
static int ipath_read_umem32(struct ipath_devdata *dd, void __user *uaddr,
const void __iomem *caddr, size_t count)
static int ipath_write_umem32(struct ipath_devdata *dd, void __iomem *caddr,
const void __user *uaddr, size_t count)
static int ipath_diag_open(struct inode *in, struct file *fp)
static ssize_t ipath_diagpkt_write(struct file *fp,
const char __user *data,
size_t count, loff_t *off)
static int ipath_diag_release(struct inode *in, struct file *fp)
static ssize_t ipath_diag_read(struct file *fp, char __user *data,
size_t count, loff_t *off)
static ssize_t ipath_diag_write(struct file *fp, const char __user *data,
size_t count, loff_t *off)

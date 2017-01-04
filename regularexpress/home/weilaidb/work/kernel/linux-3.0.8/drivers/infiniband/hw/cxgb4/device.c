#define DRV_VERSION "0.1"
MODULE_AUTHOR("Steve Wise");
MODULE_DESCRIPTION("Chelsio T4 RDMA Driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
static LIST_HEAD(uld_ctx_list);
static DEFINE_MUTEX(dev_mutex);
static struct dentry *c4iw_debugfs_root;
struct c4iw_debugfs_data ;
static int count_idrs(int id, void *p, void *data)
static ssize_t debugfs_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static int dump_qp(int id, void *p, void *data)
static int qp_release(struct inode *inode, struct file *file)
static int qp_open(struct inode *inode, struct file *file)
static const struct file_operations qp_debugfs_fops = ;
static int dump_stag(int id, void *p, void *data)
static int stag_release(struct inode *inode, struct file *file)
static int stag_open(struct inode *inode, struct file *file)
static const struct file_operations stag_debugfs_fops = ;
static int setup_debugfs(struct c4iw_dev *devp)
void c4iw_release_dev_ucontext(struct c4iw_rdev *rdev,
struct c4iw_dev_ucontext *uctx)
void c4iw_init_dev_ucontext(struct c4iw_rdev *rdev,
struct c4iw_dev_ucontext *uctx)
static int c4iw_rdev_open(struct c4iw_rdev *rdev)
static void c4iw_rdev_close(struct c4iw_rdev *rdev)
struct uld_ctx ;
static void c4iw_remove(struct uld_ctx *ctx)
static struct c4iw_dev *c4iw_alloc(const struct cxgb4_lld_info *infop)
static void *c4iw_uld_add(const struct cxgb4_lld_info *infop)
static int c4iw_uld_rx_handler(void *handle, const __be64 *rsp,
const struct pkt_gl *gl)
static int c4iw_uld_state_change(void *handle, enum cxgb4_state new_state)
static struct cxgb4_uld_info c4iw_uld_info = ;
static int __init c4iw_init_module(void)
static void __exit c4iw_exit_module(void)
module_init(c4iw_init_module);
module_exit(c4iw_exit_module);

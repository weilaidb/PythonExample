static int ipath_open(struct inode *, struct file *);
static int ipath_close(struct inode *, struct file *);
static ssize_t ipath_write(struct file *, const char __user *, size_t,
loff_t *);
static ssize_t ipath_writev(struct kiocb *, const struct iovec *,
unsigned long , loff_t);
static unsigned int ipath_poll(struct file *, struct poll_table_struct *);
static int ipath_mmap(struct file *, struct vm_area_struct *);
static const struct file_operations ipath_file_ops = ;
static u64 cvt_kvaddr(void *p)
static int ipath_get_base_info(struct file *fp,
void __user *ubase, size_t ubase_size)
static int ipath_tid_update(struct ipath_portdata *pd, struct file *fp,
const struct ipath_tid_info *ti)
static int ipath_tid_free(struct ipath_portdata *pd, unsigned subport,
const struct ipath_tid_info *ti)
static int ipath_set_part_key(struct ipath_portdata *pd, u16 key)
static int ipath_manage_rcvq(struct ipath_portdata *pd, unsigned subport,
int start_stop)
static void ipath_clean_part_key(struct ipath_portdata *pd,
struct ipath_devdata *dd)
static void init_user_egr_sizes(struct ipath_portdata *pd)
static int ipath_create_user_egr(struct ipath_portdata *pd)
static int ipath_mmap_mem(struct vm_area_struct *vma,
struct ipath_portdata *pd, unsigned len, int write_ok,
void *kvaddr, char *what)
static int mmap_ureg(struct vm_area_struct *vma, struct ipath_devdata *dd,
u64 ureg)
static int mmap_piobufs(struct vm_area_struct *vma,
struct ipath_devdata *dd,
struct ipath_portdata *pd,
unsigned piobufs, unsigned piocnt)
static int mmap_rcvegrbufs(struct vm_area_struct *vma,
struct ipath_portdata *pd)
static int ipath_file_vma_fault(struct vm_area_struct *vma,
struct vm_fault *vmf)
static const struct vm_operations_struct ipath_file_vm_ops = ;
static int mmap_kvaddr(struct vm_area_struct *vma, u64 pgaddr,
struct ipath_portdata *pd, unsigned subport)
static int ipath_mmap(struct file *fp, struct vm_area_struct *vma)
static unsigned ipath_poll_hdrqfull(struct ipath_portdata *pd)
static unsigned int ipath_poll_urgent(struct ipath_portdata *pd,
struct file *fp,
struct poll_table_struct *pt)
static unsigned int ipath_poll_next(struct ipath_portdata *pd,
struct file *fp,
struct poll_table_struct *pt)
static unsigned int ipath_poll(struct file *fp,
struct poll_table_struct *pt)
static int ipath_supports_subports(int user_swmajor, int user_swminor)
static int ipath_compatible_subports(int user_swmajor, int user_swminor)
static int init_subports(struct ipath_devdata *dd,
struct ipath_portdata *pd,
const struct ipath_user_info *uinfo)
static int try_alloc_port(struct ipath_devdata *dd, int port,
struct file *fp,
const struct ipath_user_info *uinfo)
static inline int usable(struct ipath_devdata *dd)
static int find_free_port(int unit, struct file *fp,
const struct ipath_user_info *uinfo)
static int find_best_unit(struct file *fp,
const struct ipath_user_info *uinfo)
static int find_shared_port(struct file *fp,
const struct ipath_user_info *uinfo)
static int ipath_open(struct inode *in, struct file *fp)
static int ipath_assign_port(struct file *fp,
const struct ipath_user_info *uinfo)
static int ipath_do_user_init(struct file *fp,
const struct ipath_user_info *uinfo)
static void unlock_expected_tids(struct ipath_portdata *pd)
static int ipath_close(struct inode *in, struct file *fp)
static int ipath_port_info(struct ipath_portdata *pd, u16 subport,
struct ipath_port_info __user *uinfo)
static int ipath_get_slave_info(struct ipath_portdata *pd,
void __user *slave_mask_addr)
static int ipath_sdma_get_inflight(struct ipath_user_sdma_queue *pq,
u32 __user *inflightp)
static int ipath_sdma_get_complete(struct ipath_devdata *dd,
struct ipath_user_sdma_queue *pq,
u32 __user *completep)
static ssize_t ipath_write(struct file *fp, const char __user *data,
size_t count, loff_t *off)
static ssize_t ipath_writev(struct kiocb *iocb, const struct iovec *iov,
unsigned long dim, loff_t off)
static struct class *ipath_class;
static int init_cdev(int minor, char *name, const struct file_operations *fops,
struct cdev **cdevp, struct device **devp)
int ipath_cdev_init(int minor, char *name, const struct file_operations *fops,
struct cdev **cdevp, struct device **devp)
static void cleanup_cdev(struct cdev **cdevp,
struct device **devp)
void ipath_cdev_cleanup(struct cdev **cdevp,
struct device **devp)
static struct cdev *wildcard_cdev;
static struct device *wildcard_dev;
static const dev_t dev = MKDEV(IPATH_MAJOR, 0);
static int user_init(void)
static void user_cleanup(void)
static atomic_t user_count = ATOMIC_INIT(0);
static atomic_t user_setup = ATOMIC_INIT(0);
int ipath_user_add(struct ipath_devdata *dd)
void ipath_user_remove(struct ipath_devdata *dd)

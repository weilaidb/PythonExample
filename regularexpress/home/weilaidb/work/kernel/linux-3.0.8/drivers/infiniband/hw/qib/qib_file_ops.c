static int qib_open(struct inode *, struct file *);
static int qib_close(struct inode *, struct file *);
static ssize_t qib_write(struct file *, const char __user *, size_t, loff_t *);
static ssize_t qib_aio_write(struct kiocb *, const struct iovec *,
unsigned long, loff_t);
static unsigned int qib_poll(struct file *, struct poll_table_struct *);
static int qib_mmapf(struct file *, struct vm_area_struct *);
static const struct file_operations qib_file_ops = ;
static u64 cvt_kvaddr(void *p)
static int qib_get_base_info(struct file *fp, void __user *ubase,
size_t ubase_size)
static int qib_tid_update(struct qib_ctxtdata *rcd, struct file *fp,
const struct qib_tid_info *ti)
static int qib_tid_free(struct qib_ctxtdata *rcd, unsigned subctxt,
const struct qib_tid_info *ti)
static int qib_set_part_key(struct qib_ctxtdata *rcd, u16 key)
static int qib_manage_rcvq(struct qib_ctxtdata *rcd, unsigned subctxt,
int start_stop)
static void qib_clean_part_key(struct qib_ctxtdata *rcd,
struct qib_devdata *dd)
static int qib_mmap_mem(struct vm_area_struct *vma, struct qib_ctxtdata *rcd,
unsigned len, void *kvaddr, u32 write_ok, char *what)
static int mmap_ureg(struct vm_area_struct *vma, struct qib_devdata *dd,
u64 ureg)
static int mmap_piobufs(struct vm_area_struct *vma,
struct qib_devdata *dd,
struct qib_ctxtdata *rcd,
unsigned piobufs, unsigned piocnt)
static int mmap_rcvegrbufs(struct vm_area_struct *vma,
struct qib_ctxtdata *rcd)
static int qib_file_vma_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static struct vm_operations_struct qib_file_vm_ops = ;
static int mmap_kvaddr(struct vm_area_struct *vma, u64 pgaddr,
struct qib_ctxtdata *rcd, unsigned subctxt)
static int qib_mmapf(struct file *fp, struct vm_area_struct *vma)
static unsigned int qib_poll_urgent(struct qib_ctxtdata *rcd,
struct file *fp,
struct poll_table_struct *pt)
static unsigned int qib_poll_next(struct qib_ctxtdata *rcd,
struct file *fp,
struct poll_table_struct *pt)
static unsigned int qib_poll(struct file *fp, struct poll_table_struct *pt)
static int qib_compatible_subctxts(int user_swmajor, int user_swminor)
static int init_subctxts(struct qib_devdata *dd,
struct qib_ctxtdata *rcd,
const struct qib_user_info *uinfo)
static int setup_ctxt(struct qib_pportdata *ppd, int ctxt,
struct file *fp, const struct qib_user_info *uinfo)
static inline int usable(struct qib_pportdata *ppd)
static int choose_port_ctxt(struct file *fp, struct qib_devdata *dd, u32 port,
const struct qib_user_info *uinfo)
static int find_free_ctxt(int unit, struct file *fp,
const struct qib_user_info *uinfo)
static int get_a_ctxt(struct file *fp, const struct qib_user_info *uinfo,
unsigned alg)
static int find_shared_ctxt(struct file *fp,
const struct qib_user_info *uinfo)
static int qib_open(struct inode *in, struct file *fp)
static int qib_assign_ctxt(struct file *fp, const struct qib_user_info *uinfo)
static int qib_do_user_init(struct file *fp,
const struct qib_user_info *uinfo)
static void unlock_expected_tids(struct qib_ctxtdata *rcd)
static int qib_close(struct inode *in, struct file *fp)
static int qib_ctxt_info(struct file *fp, struct qib_ctxt_info __user *uinfo)
static int qib_sdma_get_inflight(struct qib_user_sdma_queue *pq,
u32 __user *inflightp)
static int qib_sdma_get_complete(struct qib_pportdata *ppd,
struct qib_user_sdma_queue *pq,
u32 __user *completep)
static int disarm_req_delay(struct qib_ctxtdata *rcd)
int qib_set_uevent_bits(struct qib_pportdata *ppd, const int evtbit)
static int qib_user_event_ack(struct qib_ctxtdata *rcd, int subctxt,
unsigned long events)
static ssize_t qib_write(struct file *fp, const char __user *data,
size_t count, loff_t *off)
static ssize_t qib_aio_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long dim, loff_t off)
static struct class *qib_class;
static dev_t qib_dev;
int qib_cdev_init(int minor, const char *name,
const struct file_operations *fops,
struct cdev **cdevp, struct device **devp)
void qib_cdev_cleanup(struct cdev **cdevp, struct device **devp)
static struct cdev *wildcard_cdev;
static struct device *wildcard_device;
int __init qib_dev_init(void)
void qib_dev_cleanup(void)
static atomic_t user_count = ATOMIC_INIT(0);
static void qib_user_remove(struct qib_devdata *dd)
static int qib_user_add(struct qib_devdata *dd)
int qib_device_create(struct qib_devdata *dd)
void qib_device_remove(struct qib_devdata *dd)

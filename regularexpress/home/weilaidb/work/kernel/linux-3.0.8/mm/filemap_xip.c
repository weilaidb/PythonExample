static DEFINE_MUTEX(xip_sparse_mutex);
static seqcount_t xip_sparse_seq = SEQCNT_ZERO;
static struct page *__xip_sparse_page;
static struct page *xip_sparse_page(void)
static ssize_t
do_xip_mapping_read(struct address_space *mapping,
struct file_ra_state *_ra,
struct file *filp,
char __user *buf,
size_t len,
loff_t *ppos)
ssize_t
xip_file_read(struct file *filp, char __user *buf, size_t len, loff_t *ppos)
EXPORT_SYMBOL_GPL(xip_file_read);
static void
__xip_unmap (struct address_space * mapping,
unsigned long pgoff)
static int xip_file_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct xip_file_vm_ops = ;
int xip_file_mmap(struct file * file, struct vm_area_struct * vma)
EXPORT_SYMBOL_GPL(xip_file_mmap);
static ssize_t
__xip_file_write(struct file *filp, const char __user *buf,
size_t count, loff_t pos, loff_t *ppos)
ssize_t
xip_file_write(struct file *filp, const char __user *buf, size_t len,
loff_t *ppos)
EXPORT_SYMBOL_GPL(xip_file_write);
int
xip_truncate_page(struct address_space *mapping, loff_t from)
EXPORT_SYMBOL_GPL(xip_truncate_page);

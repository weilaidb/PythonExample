static int limit = 1024;
module_param(limit, int, 0644);
MODULE_PARM_DESC(limit, "Maximum number of grants that may be allocated by "
"the gntalloc device");
static LIST_HEAD(gref_list);
static DEFINE_SPINLOCK(gref_lock);
static int gref_size;
struct notify_info ;
struct gntalloc_gref ;
struct gntalloc_file_private_data ;
static void __del_gref(struct gntalloc_gref *gref);
static void do_cleanup(void)
static int add_grefs(struct ioctl_gntalloc_alloc_gref *op,
uint32_t *gref_ids, struct gntalloc_file_private_data *priv)
static void __del_gref(struct gntalloc_gref *gref)
static struct gntalloc_gref *find_grefs(struct gntalloc_file_private_data *priv,
uint64_t index, uint32_t count)
static int gntalloc_open(struct inode *inode, struct file *filp)
static int gntalloc_release(struct inode *inode, struct file *filp)
static long gntalloc_ioctl_alloc(struct gntalloc_file_private_data *priv,
struct ioctl_gntalloc_alloc_gref __user *arg)
static long gntalloc_ioctl_dealloc(struct gntalloc_file_private_data *priv,
void __user *arg)
static long gntalloc_ioctl_unmap_notify(struct gntalloc_file_private_data *priv,
void __user *arg)
static long gntalloc_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static void gntalloc_vma_open(struct vm_area_struct *vma)
static void gntalloc_vma_close(struct vm_area_struct *vma)
static struct vm_operations_struct gntalloc_vmops = ;
static int gntalloc_mmap(struct file *filp, struct vm_area_struct *vma)
static const struct file_operations gntalloc_fops = ;
static struct miscdevice gntalloc_miscdev = ;
static int __init gntalloc_init(void)
static void __exit gntalloc_exit(void)
module_init(gntalloc_init);
module_exit(gntalloc_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Carter Weatherly <carter.weatherly@jhuapl.edu>, "
"Daniel De Graaf <dgdegra@tycho.nsa.gov>");
MODULE_DESCRIPTION("User-space grant reference allocator driver");

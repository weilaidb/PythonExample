#define FETCHOP_ID	"SGI Fetchop,"
#define CACHED_ID	"Cached,"
#define UNCACHED_ID	"Uncached"
#define REVISION	"4.0"
#define MSPEC_BASENAME	"mspec"
enum mspec_page_type ;
static int is_sn2;
#define is_sn2		0
struct vma_data ;
#define VMD_VMALLOCED 0x1
static unsigned long scratch_page[MAX_NUMNODES];
#define SH2_AMO_CACHE_ENTRIES	4
static inline int
mspec_zero_block(unsigned long addr, int len)
static void
mspec_open(struct vm_area_struct *vma)
static void
mspec_close(struct vm_area_struct *vma)
static int
mspec_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct mspec_vm_ops = ;
static int
mspec_mmap(struct file *file, struct vm_area_struct *vma,
enum mspec_page_type type)
static int
fetchop_mmap(struct file *file, struct vm_area_struct *vma)
static int
cached_mmap(struct file *file, struct vm_area_struct *vma)
static int
uncached_mmap(struct file *file, struct vm_area_struct *vma)
static const struct file_operations fetchop_fops = ;
static struct miscdevice fetchop_miscdev = ;
static const struct file_operations cached_fops = ;
static struct miscdevice cached_miscdev = ;
static const struct file_operations uncached_fops = ;
static struct miscdevice uncached_miscdev = ;
static int __init
mspec_init(void)
static void __exit
mspec_exit(void)
module_init(mspec_init);
module_exit(mspec_exit);
MODULE_AUTHOR("Silicon Graphics, Inc. <linux-altix@sgi.com>");
MODULE_DESCRIPTION("Driver for SGI SN special memory operations");
MODULE_LICENSE("GPL");

#define FRAM_VERSION	"1.0"
#define FRAM_BASE	0xac000000
#define FRAM_SIZE	0x20000
static int fram_mmap(struct file *filp, struct vm_area_struct *vma)
static const struct file_operations fram_fops = ;
#define FRAM_MINOR	0
static struct miscdevice fram_dev = ;
static int __init
fram_init(void)
static void __exit
fram_cleanup_module(void)
module_init(fram_init);
module_exit(fram_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(FRAM_MINOR);

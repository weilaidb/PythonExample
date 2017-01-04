#define MAXCOLUMN 100
static DEFINE_MUTEX(iommu_debug_lock);
static struct dentry *iommu_debug_root;
static ssize_t debug_read_ver(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t debug_read_regs(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t debug_read_tlb(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t debug_write_pagetable(struct file *file,
const char __user *userbuf, size_t count, loff_t *ppos)
#define dump_ioptable_entry_one(lv, da, val)			\
()
static ssize_t dump_ioptable(struct iommu *obj, char *buf, ssize_t len)
static ssize_t debug_read_pagetable(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t debug_read_mmap(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t debug_read_mem(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t debug_write_mem(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
static int debug_open_generic(struct inode *inode, struct file *file)
#define DEBUG_FOPS(name)						\
static const struct file_operations debug_##name##_fops = ;
#define DEBUG_FOPS_RO(name)						\
static const struct file_operations debug_##name##_fops = ;
DEBUG_FOPS_RO(ver);
DEBUG_FOPS_RO(regs);
DEBUG_FOPS_RO(tlb);
DEBUG_FOPS(pagetable);
DEBUG_FOPS_RO(mmap);
DEBUG_FOPS(mem);
#define __DEBUG_ADD_FILE(attr, mode)					\
#define DEBUG_ADD_FILE(name) __DEBUG_ADD_FILE(name, 600)
#define DEBUG_ADD_FILE_RO(name) __DEBUG_ADD_FILE(name, 400)
static int iommu_debug_register(struct device *dev, void *data)
static int __init iommu_debug_init(void)
module_init(iommu_debug_init)
static void __exit iommu_debugfs_exit(void)
module_exit(iommu_debugfs_exit)
MODULE_DESCRIPTION("omap iommu: debugfs interface");
MODULE_AUTHOR("Hiroshi DOYU <Hiroshi.DOYU@nokia.com>");
MODULE_LICENSE("GPL v2");

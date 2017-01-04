#undef DEBUG
static DEFINE_MUTEX(sysfs_bin_lock);
struct bin_buffer ;
static int
fill_read(struct file *file, char *buffer, loff_t off, size_t count)
static ssize_t
read(struct file *file, char __user *userbuf, size_t bytes, loff_t *off)
static int
flush_write(struct file *file, char *buffer, loff_t offset, size_t count)
static ssize_t write(struct file *file, const char __user *userbuf,
size_t bytes, loff_t *off)
static void bin_vma_open(struct vm_area_struct *vma)
static int bin_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static int bin_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static int bin_access(struct vm_area_struct *vma, unsigned long addr,
void *buf, int len, int write)
static int bin_set_policy(struct vm_area_struct *vma, struct mempolicy *new)
static struct mempolicy *bin_get_policy(struct vm_area_struct *vma,
unsigned long addr)
static int bin_migrate(struct vm_area_struct *vma, const nodemask_t *from,
const nodemask_t *to, unsigned long flags)
static const struct vm_operations_struct bin_vm_ops = ;
static int mmap(struct file *file, struct vm_area_struct *vma)
static int open(struct inode * inode, struct file * file)
static int release(struct inode * inode, struct file * file)
const struct file_operations bin_fops = ;
void unmap_bin_file(struct sysfs_dirent *attr_sd)
int sysfs_create_bin_file(struct kobject *kobj,
const struct bin_attribute *attr)
void sysfs_remove_bin_file(struct kobject *kobj,
const struct bin_attribute *attr)
EXPORT_SYMBOL_GPL(sysfs_create_bin_file);
EXPORT_SYMBOL_GPL(sysfs_remove_bin_file);

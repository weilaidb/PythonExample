static loff_t page_map_seek( struct file *file, loff_t off, int whence)
static ssize_t page_map_read( struct file *file, char __user *buf, size_t nbytes,
loff_t *ppos)
static int page_map_mmap( struct file *file, struct vm_area_struct *vma )
static const struct file_operations page_map_fops = ;
static int __init proc_ppc64_init(void)
__initcall(proc_ppc64_init);
static int __init proc_ppc64_create(void)
core_initcall(proc_ppc64_create);

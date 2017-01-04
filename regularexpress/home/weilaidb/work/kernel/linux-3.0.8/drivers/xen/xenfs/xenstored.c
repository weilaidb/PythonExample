static ssize_t xsd_read(struct file *file, char __user *buf,
size_t size, loff_t *off)
static int xsd_release(struct inode *inode, struct file *file)
static int xsd_kva_open(struct inode *inode, struct file *file)
static int xsd_kva_mmap(struct file *file, struct vm_area_struct *vma)
const struct file_operations xsd_kva_file_ops = ;
static int xsd_port_open(struct inode *inode, struct file *file)
const struct file_operations xsd_port_file_ops = ;

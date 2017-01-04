int nilfs_sync_file(struct file *file, int datasync)
static int nilfs_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct nilfs_file_vm_ops = ;
static int nilfs_file_mmap(struct file *file, struct vm_area_struct *vma)
const struct file_operations nilfs_file_operations = ;
const struct inode_operations nilfs_file_inode_operations = ;

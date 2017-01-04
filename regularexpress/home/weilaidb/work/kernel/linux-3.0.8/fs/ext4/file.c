static int ext4_release_file(struct inode *inode, struct file *filp)
static void ext4_aiodio_wait(struct inode *inode)
static int
ext4_unaligned_aio(struct inode *inode, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static ssize_t
ext4_file_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static const struct vm_operations_struct ext4_file_vm_ops = ;
static int ext4_file_mmap(struct file *file, struct vm_area_struct *vma)
static int ext4_file_open(struct inode * inode, struct file * filp)
loff_t ext4_llseek(struct file *file, loff_t offset, int origin)
const struct file_operations ext4_file_operations = ;
const struct inode_operations ext4_file_inode_operations = ;

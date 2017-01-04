static ssize_t
coda_file_read(struct file *coda_file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t
coda_file_splice_read(struct file *coda_file, loff_t *ppos,
struct pipe_inode_info *pipe, size_t count,
unsigned int flags)
static ssize_t
coda_file_write(struct file *coda_file, const char __user *buf, size_t count, loff_t *ppos)
static int
coda_file_mmap(struct file *coda_file, struct vm_area_struct *vma)
int coda_open(struct inode *coda_inode, struct file *coda_file)
int coda_release(struct inode *coda_inode, struct file *coda_file)
int coda_fsync(struct file *coda_file, int datasync)
const struct file_operations coda_file_operations = ;

static void wait_for_partner(struct inode* inode, unsigned int *cnt)
static void wake_up_partner(struct inode* inode)
static int fifo_open(struct inode *inode, struct file *filp)
const struct file_operations def_fifo_fops = ;

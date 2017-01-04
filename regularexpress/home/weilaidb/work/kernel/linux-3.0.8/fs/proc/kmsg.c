extern wait_queue_head_t log_wait;
static int kmsg_open(struct inode * inode, struct file * file)
static int kmsg_release(struct inode * inode, struct file * file)
static ssize_t kmsg_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int kmsg_poll(struct file *file, poll_table *wait)
static const struct file_operations proc_kmsg_operations = ;
static int __init proc_kmsg_init(void)
module_init(proc_kmsg_init);

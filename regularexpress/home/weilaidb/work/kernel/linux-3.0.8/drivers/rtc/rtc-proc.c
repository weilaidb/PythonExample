static int rtc_proc_show(struct seq_file *seq, void *offset)
static int rtc_proc_open(struct inode *inode, struct file *file)
static int rtc_proc_release(struct inode *inode, struct file *file)
static const struct file_operations rtc_proc_fops = ;
void rtc_proc_add_device(struct rtc_device *rtc)
void rtc_proc_del_device(struct rtc_device *rtc)

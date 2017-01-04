int ptp_open(struct posix_clock *pc, fmode_t fmode)
long ptp_ioctl(struct posix_clock *pc, unsigned int cmd, unsigned long arg)
unsigned int ptp_poll(struct posix_clock *pc, struct file *fp, poll_table *wait)
ssize_t ptp_read(struct posix_clock *pc,
uint rdflags, char __user *buf, size_t cnt)

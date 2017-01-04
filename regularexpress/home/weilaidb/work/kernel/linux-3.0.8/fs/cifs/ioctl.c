#define CIFS_IOC_CHECKUMOUNT _IO(0xCF, 2)
long cifs_ioctl(struct file *filep, unsigned int command, unsigned long arg)

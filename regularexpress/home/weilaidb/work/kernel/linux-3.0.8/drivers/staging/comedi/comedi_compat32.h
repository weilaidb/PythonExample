#define _COMEDI_COMPAT32_H
extern long comedi_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
#define comedi_compat_ioctl 0

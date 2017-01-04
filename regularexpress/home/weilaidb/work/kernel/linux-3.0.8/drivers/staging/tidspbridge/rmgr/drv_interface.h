#define _DRV_INTERFACE_H_
static int __init bridge_init(void);
static void __exit bridge_exit(void);
static int bridge_open(struct inode *ip, struct file *filp);
static int bridge_release(struct inode *ip, struct file *filp);
static long bridge_ioctl(struct file *filp, unsigned int code,
unsigned long args);
static int bridge_mmap(struct file *filp, struct vm_area_struct *vma);

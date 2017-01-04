MODULE_AUTHOR("Dimitri Sivanich <sivanich@sgi.com>");
MODULE_DESCRIPTION("SGI UV Memory Mapped RTC Timer");
MODULE_LICENSE("GPL");
#define UV_MMTIMER_NAME "mmtimer"
#define UV_MMTIMER_DESC "SGI UV Memory Mapped RTC Timer"
#define UV_MMTIMER_VERSION "1.0"
static long uv_mmtimer_ioctl(struct file *file, unsigned int cmd,
unsigned long arg);
static int uv_mmtimer_mmap(struct file *file, struct vm_area_struct *vma);
static unsigned long uv_mmtimer_femtoperiod;
static const struct file_operations uv_mmtimer_fops = ;
static long uv_mmtimer_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int uv_mmtimer_mmap(struct file *file, struct vm_area_struct *vma)
static struct miscdevice uv_mmtimer_miscdev = ;
static int __init uv_mmtimer_init(void)
module_init(uv_mmtimer_init);

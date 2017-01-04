#define CMD_COREB_START		_IO('b', 0)
#define CMD_COREB_STOP		_IO('b', 1)
#define CMD_COREB_RESET		_IO('b', 2)
static long
coreb_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations coreb_fops = ;
static struct miscdevice coreb_dev = ;
static int __init bf561_coreb_init(void)
module_init(bf561_coreb_init);
static void __exit bf561_coreb_exit(void)
module_exit(bf561_coreb_exit);
MODULE_AUTHOR("Bas Vermeulen <bvermeul@blackstar.xs4all.nl>");
MODULE_DESCRIPTION("BF561 Core B Support");
MODULE_LICENSE("GPL");

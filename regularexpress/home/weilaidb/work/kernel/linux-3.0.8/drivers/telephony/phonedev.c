#define PHONE_NUM_DEVICES	256
static struct phone_device *phone_device[PHONE_NUM_DEVICES];
static DEFINE_MUTEX(phone_lock);
static int phone_open(struct inode *inode, struct file *file)
int phone_register_device(struct phone_device *p, int unit)
void phone_unregister_device(struct phone_device *pfd)
static const struct file_operations phone_fops =
;
static int __init telephony_init(void)
static void __exit telephony_exit(void)
module_init(telephony_init);
module_exit(telephony_exit);
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(phone_register_device);
EXPORT_SYMBOL(phone_unregister_device);

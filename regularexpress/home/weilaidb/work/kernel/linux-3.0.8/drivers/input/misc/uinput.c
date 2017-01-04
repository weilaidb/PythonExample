static int uinput_dev_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
static int uinput_request_alloc_id(struct uinput_device *udev, struct uinput_request *request)
static struct uinput_request *uinput_request_find(struct uinput_device *udev, int id)
static inline int uinput_request_reserve_slot(struct uinput_device *udev, struct uinput_request *request)
static void uinput_request_done(struct uinput_device *udev, struct uinput_request *request)
static int uinput_request_submit(struct uinput_device *udev, struct uinput_request *request)
static void uinput_flush_requests(struct uinput_device *udev)
static void uinput_dev_set_gain(struct input_dev *dev, u16 gain)
static void uinput_dev_set_autocenter(struct input_dev *dev, u16 magnitude)
static int uinput_dev_playback(struct input_dev *dev, int effect_id, int value)
static int uinput_dev_upload_effect(struct input_dev *dev, struct ff_effect *effect, struct ff_effect *old)
static int uinput_dev_erase_effect(struct input_dev *dev, int effect_id)
static void uinput_destroy_device(struct uinput_device *udev)
static int uinput_create_device(struct uinput_device *udev)
static int uinput_open(struct inode *inode, struct file *file)
static int uinput_validate_absbits(struct input_dev *dev)
static int uinput_allocate_device(struct uinput_device *udev)
static int uinput_setup_device(struct uinput_device *udev, const char __user *buffer, size_t count)
static inline ssize_t uinput_inject_event(struct uinput_device *udev, const char __user *buffer, size_t count)
static ssize_t uinput_write(struct file *file, const char __user *buffer, size_t count, loff_t *ppos)
static ssize_t uinput_read(struct file *file, char __user *buffer, size_t count, loff_t *ppos)
static unsigned int uinput_poll(struct file *file, poll_table *wait)
static int uinput_release(struct inode *inode, struct file *file)
struct uinput_ff_upload_compat ;
static int uinput_ff_upload_to_user(char __user *buffer,
const struct uinput_ff_upload *ff_up)
static int uinput_ff_upload_from_user(const char __user *buffer,
struct uinput_ff_upload *ff_up)
static int uinput_ff_upload_to_user(char __user *buffer,
const struct uinput_ff_upload *ff_up)
static int uinput_ff_upload_from_user(const char __user *buffer,
struct uinput_ff_upload *ff_up)
#define uinput_set_bit(_arg, _bit, _max)		\
()
static long uinput_ioctl_handler(struct file *file, unsigned int cmd,
unsigned long arg, void __user *p)
static long uinput_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long uinput_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations uinput_fops = ;
static struct miscdevice uinput_misc = ;
MODULE_ALIAS_MISCDEV(UINPUT_MINOR);
MODULE_ALIAS("devname:" UINPUT_NAME);
static int __init uinput_init(void)
static void __exit uinput_exit(void)
MODULE_AUTHOR("Aristeu Sergio Rozanski Filho");
MODULE_DESCRIPTION("User level driver support for input subsystem");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.3");
module_init(uinput_init);
module_exit(uinput_exit);

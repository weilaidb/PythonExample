#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define EVDEV_MINOR_BASE	64
#define EVDEV_MINORS		32
#define EVDEV_MIN_BUFFER_SIZE	64U
#define EVDEV_BUF_PACKETS	8
struct evdev ;
struct evdev_client ;
static struct evdev *evdev_table[EVDEV_MINORS];
static DEFINE_MUTEX(evdev_table_mutex);
static void evdev_pass_event(struct evdev_client *client,
struct input_event *event)
static void evdev_event(struct input_handle *handle,
unsigned int type, unsigned int code, int value)
static int evdev_fasync(int fd, struct file *file, int on)
static int evdev_flush(struct file *file, fl_owner_t id)
static void evdev_free(struct device *dev)
static int evdev_grab(struct evdev *evdev, struct evdev_client *client)
static int evdev_ungrab(struct evdev *evdev, struct evdev_client *client)
static void evdev_attach_client(struct evdev *evdev,
struct evdev_client *client)
static void evdev_detach_client(struct evdev *evdev,
struct evdev_client *client)
static int evdev_open_device(struct evdev *evdev)
static void evdev_close_device(struct evdev *evdev)
static void evdev_hangup(struct evdev *evdev)
static int evdev_release(struct inode *inode, struct file *file)
static unsigned int evdev_compute_buffer_size(struct input_dev *dev)
static int evdev_open(struct inode *inode, struct file *file)
static ssize_t evdev_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static int evdev_fetch_next_event(struct evdev_client *client,
struct input_event *event)
static ssize_t evdev_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static unsigned int evdev_poll(struct file *file, poll_table *wait)
#define BITS_PER_LONG_COMPAT (sizeof(compat_long_t) * 8)
#define BITS_TO_LONGS_COMPAT(x) ((((x) - 1) / BITS_PER_LONG_COMPAT) + 1)
static int bits_to_user(unsigned long *bits, unsigned int maxbit,
unsigned int maxlen, void __user *p, int compat)
static int bits_to_user(unsigned long *bits, unsigned int maxbit,
unsigned int maxlen, void __user *p, int compat)
static int bits_to_user(unsigned long *bits, unsigned int maxbit,
unsigned int maxlen, void __user *p, int compat)
static int str_to_user(const char *str, unsigned int maxlen, void __user *p)
#define OLD_KEY_MAX	0x1ff
static int handle_eviocgbit(struct input_dev *dev,
unsigned int type, unsigned int size,
void __user *p, int compat_mode)
#undef OLD_KEY_MAX
static int evdev_handle_get_keycode(struct input_dev *dev, void __user *p)
static int evdev_handle_get_keycode_v2(struct input_dev *dev, void __user *p)
static int evdev_handle_set_keycode(struct input_dev *dev, void __user *p)
static int evdev_handle_set_keycode_v2(struct input_dev *dev, void __user *p)
static long evdev_do_ioctl(struct file *file, unsigned int cmd,
void __user *p, int compat_mode)
static long evdev_ioctl_handler(struct file *file, unsigned int cmd,
void __user *p, int compat_mode)
static long evdev_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long evdev_ioctl_compat(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations evdev_fops = ;
static int evdev_install_chrdev(struct evdev *evdev)
static void evdev_remove_chrdev(struct evdev *evdev)
static void evdev_mark_dead(struct evdev *evdev)
static void evdev_cleanup(struct evdev *evdev)
static int evdev_connect(struct input_handler *handler, struct input_dev *dev,
const struct input_device_id *id)
static void evdev_disconnect(struct input_handle *handle)
static const struct input_device_id evdev_ids[] = ;
MODULE_DEVICE_TABLE(input, evdev_ids);
static struct input_handler evdev_handler = ;
static int __init evdev_init(void)
static void __exit evdev_exit(void)
module_init(evdev_init);
module_exit(evdev_exit);
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Input driver event char devices");
MODULE_LICENSE("GPL");

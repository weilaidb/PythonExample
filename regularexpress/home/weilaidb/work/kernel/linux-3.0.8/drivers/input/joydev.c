#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Joystick device interfaces");
MODULE_SUPPORTED_DEVICE("input/js");
MODULE_LICENSE("GPL");
#define JOYDEV_MINOR_BASE	0
#define JOYDEV_MINORS		16
#define JOYDEV_BUFFER_SIZE	64
struct joydev ;
struct joydev_client ;
static struct joydev *joydev_table[JOYDEV_MINORS];
static DEFINE_MUTEX(joydev_table_mutex);
static int joydev_correct(int value, struct js_corr *corr)
static void joydev_pass_event(struct joydev_client *client,
struct js_event *event)
static void joydev_event(struct input_handle *handle,
unsigned int type, unsigned int code, int value)
static int joydev_fasync(int fd, struct file *file, int on)
static void joydev_free(struct device *dev)
static void joydev_attach_client(struct joydev *joydev,
struct joydev_client *client)
static void joydev_detach_client(struct joydev *joydev,
struct joydev_client *client)
static int joydev_open_device(struct joydev *joydev)
static void joydev_close_device(struct joydev *joydev)
static void joydev_hangup(struct joydev *joydev)
static int joydev_release(struct inode *inode, struct file *file)
static int joydev_open(struct inode *inode, struct file *file)
static int joydev_generate_startup_event(struct joydev_client *client,
struct input_dev *input,
struct js_event *event)
static int joydev_fetch_next_event(struct joydev_client *client,
struct js_event *event)
static ssize_t joydev_0x_read(struct joydev_client *client,
struct input_dev *input,
char __user *buf)
static inline int joydev_data_pending(struct joydev_client *client)
static ssize_t joydev_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int joydev_poll(struct file *file, poll_table *wait)
static int joydev_handle_JSIOCSAXMAP(struct joydev *joydev,
void __user *argp, size_t len)
static int joydev_handle_JSIOCSBTNMAP(struct joydev *joydev,
void __user *argp, size_t len)
static int joydev_ioctl_common(struct joydev *joydev,
unsigned int cmd, void __user *argp)
static long joydev_compat_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long joydev_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations joydev_fops = ;
static int joydev_install_chrdev(struct joydev *joydev)
static void joydev_remove_chrdev(struct joydev *joydev)
static void joydev_mark_dead(struct joydev *joydev)
static void joydev_cleanup(struct joydev *joydev)
static bool joydev_match(struct input_handler *handler, struct input_dev *dev)
static int joydev_connect(struct input_handler *handler, struct input_dev *dev,
const struct input_device_id *id)
static void joydev_disconnect(struct input_handle *handle)
static const struct input_device_id joydev_ids[] = ;
MODULE_DEVICE_TABLE(input, joydev_ids);
static struct input_handler joydev_handler = ;
static int __init joydev_init(void)
static void __exit joydev_exit(void)
module_init(joydev_init);
module_exit(joydev_exit);

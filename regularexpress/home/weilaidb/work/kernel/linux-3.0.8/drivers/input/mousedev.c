#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define MOUSEDEV_MINOR_BASE	32
#define MOUSEDEV_MINORS		32
#define MOUSEDEV_MIX		31
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Mouse (ExplorerPS/2) device interfaces");
MODULE_LICENSE("GPL");
#define CONFIG_INPUT_MOUSEDEV_SCREEN_X	1024
#define CONFIG_INPUT_MOUSEDEV_SCREEN_Y	768
static int xres = CONFIG_INPUT_MOUSEDEV_SCREEN_X;
module_param(xres, uint, 0644);
MODULE_PARM_DESC(xres, "Horizontal screen resolution");
static int yres = CONFIG_INPUT_MOUSEDEV_SCREEN_Y;
module_param(yres, uint, 0644);
MODULE_PARM_DESC(yres, "Vertical screen resolution");
static unsigned tap_time = 200;
module_param(tap_time, uint, 0644);
MODULE_PARM_DESC(tap_time, "Tap time for touchpads in absolute mode (msecs)");
struct mousedev_hw_data ;
struct mousedev ;
enum mousedev_emul ;
struct mousedev_motion ;
#define PACKET_QUEUE_LEN	16
struct mousedev_client ;
#define MOUSEDEV_SEQ_LEN	6
static unsigned char mousedev_imps_seq[] = ;
static unsigned char mousedev_imex_seq[] = ;
static struct input_handler mousedev_handler;
static struct mousedev *mousedev_table[MOUSEDEV_MINORS];
static DEFINE_MUTEX(mousedev_table_mutex);
static struct mousedev *mousedev_mix;
static LIST_HEAD(mousedev_mix_list);
static void mixdev_open_devices(void);
static void mixdev_close_devices(void);
#define fx(i)  (mousedev->old_x[(mousedev->pkt_count - (i)) & 03])
#define fy(i)  (mousedev->old_y[(mousedev->pkt_count - (i)) & 03])
static void mousedev_touchpad_event(struct input_dev *dev,
struct mousedev *mousedev,
unsigned int code, int value)
static void mousedev_abs_event(struct input_dev *dev, struct mousedev *mousedev,
unsigned int code, int value)
static void mousedev_rel_event(struct mousedev *mousedev,
unsigned int code, int value)
static void mousedev_key_event(struct mousedev *mousedev,
unsigned int code, int value)
static void mousedev_notify_readers(struct mousedev *mousedev,
struct mousedev_hw_data *packet)
static void mousedev_touchpad_touch(struct mousedev *mousedev, int value)
static void mousedev_event(struct input_handle *handle,
unsigned int type, unsigned int code, int value)
static int mousedev_fasync(int fd, struct file *file, int on)
static void mousedev_free(struct device *dev)
static int mousedev_open_device(struct mousedev *mousedev)
static void mousedev_close_device(struct mousedev *mousedev)
static void mixdev_open_devices(void)
static void mixdev_close_devices(void)
static void mousedev_attach_client(struct mousedev *mousedev,
struct mousedev_client *client)
static void mousedev_detach_client(struct mousedev *mousedev,
struct mousedev_client *client)
static int mousedev_release(struct inode *inode, struct file *file)
static int mousedev_open(struct inode *inode, struct file *file)
static inline int mousedev_limit_delta(int delta, int limit)
static void mousedev_packet(struct mousedev_client *client,
signed char *ps2_data)
static void mousedev_generate_response(struct mousedev_client *client,
int command)
static ssize_t mousedev_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static ssize_t mousedev_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static unsigned int mousedev_poll(struct file *file, poll_table *wait)
static const struct file_operations mousedev_fops = ;
static int mousedev_install_chrdev(struct mousedev *mousedev)
static void mousedev_remove_chrdev(struct mousedev *mousedev)
static void mousedev_mark_dead(struct mousedev *mousedev)
static void mousedev_hangup(struct mousedev *mousedev)
static void mousedev_cleanup(struct mousedev *mousedev)
static struct mousedev *mousedev_create(struct input_dev *dev,
struct input_handler *handler,
int minor)
static void mousedev_destroy(struct mousedev *mousedev)
static int mixdev_add_device(struct mousedev *mousedev)
static void mixdev_remove_device(struct mousedev *mousedev)
static int mousedev_connect(struct input_handler *handler,
struct input_dev *dev,
const struct input_device_id *id)
static void mousedev_disconnect(struct input_handle *handle)
static const struct input_device_id mousedev_ids[] = ;
MODULE_DEVICE_TABLE(input, mousedev_ids);
static struct input_handler mousedev_handler = ;
static struct miscdevice psaux_mouse = ;
static int psaux_registered;
static int __init mousedev_init(void)
static void __exit mousedev_exit(void)
module_init(mousedev_init);
module_exit(mousedev_exit);

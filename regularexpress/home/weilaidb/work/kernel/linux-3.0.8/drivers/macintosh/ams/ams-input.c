static unsigned int joystick;
module_param(joystick, bool, S_IRUGO);
MODULE_PARM_DESC(joystick, "Enable the input class device on module load");
static unsigned int invert;
module_param(invert, bool, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(invert, "Invert input data on X and Y axis");
static DEFINE_MUTEX(ams_input_mutex);
static void ams_idev_poll(struct input_polled_dev *dev)
static int ams_input_enable(void)
static void ams_input_disable(void)
static ssize_t ams_input_show_joystick(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ams_input_store_joystick(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(joystick, S_IRUGO | S_IWUSR,
ams_input_show_joystick, ams_input_store_joystick);
int ams_input_init(void)
void ams_input_exit(void)

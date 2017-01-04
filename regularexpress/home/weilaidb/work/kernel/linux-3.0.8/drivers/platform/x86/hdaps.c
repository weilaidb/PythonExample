#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define HDAPS_LOW_PORT		0x1600
#define HDAPS_NR_PORTS		0x30
#define HDAPS_PORT_STATE	0x1611
#define HDAPS_PORT_YPOS		0x1612
#define	HDAPS_PORT_XPOS		0x1614
#define HDAPS_PORT_TEMP1	0x1616
#define HDAPS_PORT_YVAR		0x1617
#define HDAPS_PORT_XVAR		0x1619
#define HDAPS_PORT_TEMP2	0x161b
#define HDAPS_PORT_UNKNOWN	0x161c
#define HDAPS_PORT_KMACT	0x161d
#define STATE_FRESH		0x50
#define KEYBD_MASK		0x20
#define MOUSE_MASK		0x40
#define KEYBD_ISSET(n)		(!! (n & KEYBD_MASK))
#define MOUSE_ISSET(n)		(!! (n & MOUSE_MASK))
#define INIT_TIMEOUT_MSECS	4000
#define INIT_WAIT_MSECS		200
#define HDAPS_POLL_INTERVAL	50
#define HDAPS_INPUT_FUZZ	4
#define HDAPS_INPUT_FLAT	4
#define HDAPS_X_AXIS		(1 << 0)
#define HDAPS_Y_AXIS		(1 << 1)
#define HDAPS_BOTH_AXES		(HDAPS_X_AXIS | HDAPS_Y_AXIS)
static struct platform_device *pdev;
static struct input_polled_dev *hdaps_idev;
static unsigned int hdaps_invert;
static u8 km_activity;
static int rest_x;
static int rest_y;
static DEFINE_MUTEX(hdaps_mtx);
static inline u8 __get_latch(u16 port)
static inline int __check_latch(u16 port, u8 val)
static int __wait_latch(u16 port, u8 val)
static void __device_refresh(void)
static int __device_refresh_sync(void)
static inline void __device_complete(void)
static int hdaps_readb_one(unsigned int port, u8 *val)
static int __hdaps_read_pair(unsigned int port1, unsigned int port2,
int *x, int *y)
static int hdaps_read_pair(unsigned int port1, unsigned int port2,
int *val1, int *val2)
static int hdaps_device_init(void)
static int hdaps_probe(struct platform_device *dev)
static int hdaps_resume(struct platform_device *dev)
static struct platform_driver hdaps_driver = ;
static void hdaps_calibrate(void)
static void hdaps_mousedev_poll(struct input_polled_dev *dev)
static ssize_t hdaps_position_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t hdaps_variance_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t hdaps_temp1_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t hdaps_temp2_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t hdaps_keyboard_activity_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hdaps_mouse_activity_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t hdaps_calibrate_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t hdaps_calibrate_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t hdaps_invert_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t hdaps_invert_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(position, 0444, hdaps_position_show, NULL);
static DEVICE_ATTR(variance, 0444, hdaps_variance_show, NULL);
static DEVICE_ATTR(temp1, 0444, hdaps_temp1_show, NULL);
static DEVICE_ATTR(temp2, 0444, hdaps_temp2_show, NULL);
static DEVICE_ATTR(keyboard_activity, 0444, hdaps_keyboard_activity_show, NULL);
static DEVICE_ATTR(mouse_activity, 0444, hdaps_mouse_activity_show, NULL);
static DEVICE_ATTR(calibrate, 0644, hdaps_calibrate_show,hdaps_calibrate_store);
static DEVICE_ATTR(invert, 0644, hdaps_invert_show, hdaps_invert_store);
static struct attribute *hdaps_attributes[] = ;
static struct attribute_group hdaps_attribute_group = ;
static int __init hdaps_dmi_match(const struct dmi_system_id *id)
static int __init hdaps_dmi_match_invert(const struct dmi_system_id *id)
#define HDAPS_DMI_MATCH_INVERT(vendor, model, axes)
#define HDAPS_DMI_MATCH_NORMAL(vendor, model)		\
HDAPS_DMI_MATCH_INVERT(vendor, model, 0)
static struct dmi_system_id __initdata hdaps_whitelist[] = ;
static int __init hdaps_init(void)
static void __exit hdaps_exit(void)
module_init(hdaps_init);
module_exit(hdaps_exit);
module_param_named(invert, hdaps_invert, int, 0);
MODULE_PARM_DESC(invert, "invert data along each axis. 1 invert x-axis, "
"2 invert y-axis, 3 invert both axes.");
MODULE_AUTHOR("Robert Love");
MODULE_DESCRIPTION("IBM Hard Drive Active Protection System (HDAPS) driver");
MODULE_LICENSE("GPL v2");

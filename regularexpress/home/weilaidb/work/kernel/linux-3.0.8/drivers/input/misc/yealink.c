#define DRIVER_VERSION "yld-20051230"
#define DRIVER_AUTHOR "Henk Vergonet"
#define DRIVER_DESC "Yealink phone driver"
#define YEALINK_POLLING_FREQUENCY	10
struct yld_status  __attribute__ ((packed));
#define _LOC(k,l)
#define _SEG(t, a, am, b, bm, c, cm, d, dm, e, em, f, fm, g, gm)	\
#define _PIC(t, h, hm, n)						\
static const struct lcd_segment_map  lcdMap[] = ;
struct yealink_dev ;
static SEG7_DEFAULT_MAP(map_seg7);
static int setChar(struct yealink_dev *yld, int el, int chr)
;
static int map_p1k_to_key(int scancode)
static void report_key(struct yealink_dev *yld, int key)
static int yealink_cmd(struct yealink_dev *yld, struct yld_ctl_packet *p)
static u8 default_ringtone[] = ;
static int yealink_set_ringtone(struct yealink_dev *yld, u8 *buf, size_t size)
static int yealink_do_idle_tasks(struct yealink_dev *yld)
static void urb_irq_callback(struct urb *urb)
static void urb_ctl_callback(struct urb *urb)
static int input_open(struct input_dev *dev)
static void input_close(struct input_dev *dev)
static DECLARE_RWSEM(sysfs_rwsema);
static ssize_t show_map(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_map(struct device *dev, struct device_attribute *attr,
const char *buf, size_t cnt)
static ssize_t show_line(struct device *dev, char *buf, int a, int b)
static ssize_t show_line1(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_line2(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_line3(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_line(struct device *dev, const char *buf, size_t count,
int el, size_t len)
static ssize_t store_line1(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t store_line2(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t store_line3(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t get_icons(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_icon(struct device *dev, const char *buf, size_t count,
int chr)
static ssize_t show_icon(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t hide_icon(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t store_ringtone(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
#define _M444	S_IRUGO
#define _M664	S_IRUGO|S_IWUSR|S_IWGRP
#define _M220	S_IWUSR|S_IWGRP
static DEVICE_ATTR(map_seg7	, _M664, show_map	, store_map	);
static DEVICE_ATTR(line1	, _M664, show_line1	, store_line1	);
static DEVICE_ATTR(line2	, _M664, show_line2	, store_line2	);
static DEVICE_ATTR(line3	, _M664, show_line3	, store_line3	);
static DEVICE_ATTR(get_icons	, _M444, get_icons	, NULL		);
static DEVICE_ATTR(show_icon	, _M220, NULL		, show_icon	);
static DEVICE_ATTR(hide_icon	, _M220, NULL		, hide_icon	);
static DEVICE_ATTR(ringtone	, _M220, NULL		, store_ringtone);
static struct attribute *yld_attributes[] = ;
static struct attribute_group yld_attr_group = ;
struct driver_info ;
static const struct driver_info info_P1K = ;
static const struct usb_device_id usb_table [] = ;
static int usb_cleanup(struct yealink_dev *yld, int err)
static void usb_disconnect(struct usb_interface *intf)
static int usb_probe(struct usb_interface *intf, const struct usb_device_id *id)
static struct usb_driver yealink_driver = ;
static int __init yealink_dev_init(void)
static void __exit yealink_dev_exit(void)
module_init(yealink_dev_init);
module_exit(yealink_dev_exit);
MODULE_DEVICE_TABLE (usb, usb_table);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");

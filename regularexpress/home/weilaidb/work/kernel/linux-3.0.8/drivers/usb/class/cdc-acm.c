#undef DEBUG
#undef VERBOSE_DEBUG
#define DRIVER_AUTHOR "Armin Fuerst, Pavel Machek, Johannes Erdfelt, Vojtech Pavlik, David Kubicek, Johan Hovold"
#define DRIVER_DESC "USB Abstract Control Model driver for USB modems and ISDN adapters"
static struct usb_driver acm_driver;
static struct tty_driver *acm_tty_driver;
static struct acm *acm_table[ACM_TTY_MINORS];
static DEFINE_MUTEX(open_mutex);
#define ACM_READY(acm)	(acm && acm->dev && acm->port.count)
static const struct tty_port_operations acm_port_ops = ;
static int acm_ctrl_msg(struct acm *acm, int request, int value,
void *buf, int len)
#define acm_set_control(acm, control) \
acm_ctrl_msg(acm, USB_CDC_REQ_SET_CONTROL_LINE_STATE, control, NULL, 0)
#define acm_set_line(acm, line) \
acm_ctrl_msg(acm, USB_CDC_REQ_SET_LINE_CODING, 0, line, sizeof *(line))
#define acm_send_break(acm, ms) \
acm_ctrl_msg(acm, USB_CDC_REQ_SEND_BREAK, ms, NULL, 0)
static int acm_wb_alloc(struct acm *acm)
static int acm_wb_is_avail(struct acm *acm)
static void acm_write_done(struct acm *acm, struct acm_wb *wb)
static int acm_start_wb(struct acm *acm, struct acm_wb *wb)
static int acm_write_start(struct acm *acm, int wbn)
static ssize_t show_caps
(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(bmCapabilities, S_IRUGO, show_caps, NULL);
static ssize_t show_country_codes
(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(wCountryCodes, S_IRUGO, show_country_codes, NULL);
static ssize_t show_country_rel_date
(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(iCountryCodeRelDate, S_IRUGO, show_country_rel_date, NULL);
static void acm_ctrl_irq(struct urb *urb)
static int acm_submit_read_urb(struct acm *acm, int index, gfp_t mem_flags)
static int acm_submit_read_urbs(struct acm *acm, gfp_t mem_flags)
static void acm_process_read_urb(struct acm *acm, struct urb *urb)
static void acm_read_bulk_callback(struct urb *urb)
static void acm_write_bulk(struct urb *urb)
static void acm_softint(struct work_struct *work)
static int acm_tty_open(struct tty_struct *tty, struct file *filp)
static void acm_tty_unregister(struct acm *acm)
static void acm_port_down(struct acm *acm)
static void acm_tty_hangup(struct tty_struct *tty)
static void acm_tty_close(struct tty_struct *tty, struct file *filp)
static int acm_tty_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int acm_tty_write_room(struct tty_struct *tty)
static int acm_tty_chars_in_buffer(struct tty_struct *tty)
static void acm_tty_throttle(struct tty_struct *tty)
static void acm_tty_unthrottle(struct tty_struct *tty)
static int acm_tty_break_ctl(struct tty_struct *tty, int state)
static int acm_tty_tiocmget(struct tty_struct *tty)
static int acm_tty_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int acm_tty_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static const __u32 acm_tty_speed[] = ;
static const __u8 acm_tty_size[] = ;
static void acm_tty_set_termios(struct tty_struct *tty,
struct ktermios *termios_old)
static void acm_write_buffers_free(struct acm *acm)
static void acm_read_buffers_free(struct acm *acm)
static int acm_write_buffers_alloc(struct acm *acm)
static int acm_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void stop_data_traffic(struct acm *acm)
static void acm_disconnect(struct usb_interface *intf)
static int acm_suspend(struct usb_interface *intf, pm_message_t message)
static int acm_resume(struct usb_interface *intf)
static int acm_reset_resume(struct usb_interface *intf)
#define NOKIA_PCSUITE_ACM_INFO(x) \
USB_DEVICE_AND_INTERFACE_INFO(0x0421, x, \
USB_CLASS_COMM, USB_CDC_SUBCLASS_ACM, \
USB_CDC_ACM_PROTO_VENDOR)
#define SAMSUNG_PCSUITE_ACM_INFO(x) \
USB_DEVICE_AND_INTERFACE_INFO(0x04e7, x, \
USB_CLASS_COMM, USB_CDC_SUBCLASS_ACM, \
USB_CDC_ACM_PROTO_VENDOR)
static const struct usb_device_id acm_ids[] = ;
MODULE_DEVICE_TABLE(usb, acm_ids);
static struct usb_driver acm_driver = ;
static const struct tty_operations acm_ops = ;
static int __init acm_init(void)
static void __exit acm_exit(void)
module_init(acm_init);
module_exit(acm_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(ACM_TTY_MAJOR);

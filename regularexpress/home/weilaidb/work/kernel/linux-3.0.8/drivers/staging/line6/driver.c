#define DRIVER_AUTHOR  "Markus Grabner <grabner@icg.tugraz.at>"
#define DRIVER_DESC    "Line6 USB Driver"
#define DRIVER_VERSION "0.9.1beta" DRIVER_REVISION
static const struct usb_device_id line6_id_table[] = ;
MODULE_DEVICE_TABLE(usb, line6_id_table);
static struct line6_properties line6_properties_table[] = ;
const unsigned char line6_midi_id[] = ;
static const char line6_request_version0[] = ;
static const char *line6_request_version;
struct usb_line6 *line6_devices[LINE6_MAX_DEVICES];
struct message ;
static void line6_data_received(struct urb *urb);
static int line6_send_raw_message_async_part(struct message *msg,
struct urb *urb);
static int line6_start_listen(struct usb_line6 *line6)
static void line6_stop_listen(struct usb_line6 *line6)
void line6_write_hexdump(struct usb_line6 *line6, char dir,
const unsigned char *buffer, int size)
static void line6_dump_urb(struct urb *urb)
int line6_send_raw_message(struct usb_line6 *line6, const char *buffer,
int size)
static void line6_async_request_sent(struct urb *urb)
static int line6_send_raw_message_async_part(struct message *msg,
struct urb *urb)
void line6_start_timer(struct timer_list *timer, unsigned int msecs,
void (*function) (unsigned long), unsigned long data)
int line6_send_raw_message_async(struct usb_line6 *line6, const char *buffer,
int size)
int line6_version_request_async(struct usb_line6 *line6)
int line6_send_sysex_message(struct usb_line6 *line6, const char *buffer,
int size)
int line6_send_sysex_message_async(struct usb_line6 *line6, const char *buffer,
int size)
char *line6_alloc_sysex_buffer(struct usb_line6 *line6, int code1, int code2,
int size)
static void line6_data_received(struct urb *urb)
int line6_send_program(struct usb_line6 *line6, int value)
int line6_transmit_parameter(struct usb_line6 *line6, int param, int value)
int line6_read_data(struct usb_line6 *line6, int address, void *data,
size_t datalen)
int line6_write_data(struct usb_line6 *line6, int address, void *data,
size_t datalen)
int line6_read_serial_number(struct usb_line6 *line6, int *serial_number)
ssize_t line6_nop_read(struct device *dev, struct device_attribute *attr,
char *buf)
ssize_t line6_nop_write(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
ssize_t line6_set_raw(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static void line6_destruct(struct usb_interface *interface)
static int line6_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void line6_disconnect(struct usb_interface *interface)
static int line6_suspend(struct usb_interface *interface, pm_message_t message)
static int line6_resume(struct usb_interface *interface)
static int line6_reset_resume(struct usb_interface *interface)
static struct usb_driver line6_driver = ;
static int __init line6_init(void)
static void __exit line6_exit(void)
module_init(line6_init);
module_exit(line6_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);

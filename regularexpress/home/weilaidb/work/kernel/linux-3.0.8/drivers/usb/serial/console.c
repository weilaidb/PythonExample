static int debug;
struct usbcons_info ;
static struct usbcons_info usbcons_info;
static struct console usbcons;
static int usb_console_setup(struct console *co, char *options)
static void usb_console_write(struct console *co,
const char *buf, unsigned count)
static struct tty_driver *usb_console_device(struct console *co, int *index)
static struct console usbcons = ;
void usb_serial_console_disconnect(struct usb_serial *serial)
void usb_serial_console_init(int serial_debug, int minor)
void usb_serial_console_exit(void)

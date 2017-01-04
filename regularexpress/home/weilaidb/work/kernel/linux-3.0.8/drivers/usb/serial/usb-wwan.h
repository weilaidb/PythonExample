#define __LINUX_USB_USB_WWAN
extern void usb_wwan_dtr_rts(struct usb_serial_port *port, int on);
extern int usb_wwan_open(struct tty_struct *tty, struct usb_serial_port *port);
extern void usb_wwan_close(struct usb_serial_port *port);
extern int usb_wwan_startup(struct usb_serial *serial);
extern void usb_wwan_disconnect(struct usb_serial *serial);
extern void usb_wwan_release(struct usb_serial *serial);
extern int usb_wwan_write_room(struct tty_struct *tty);
extern void usb_wwan_set_termios(struct tty_struct *tty,
struct usb_serial_port *port,
struct ktermios *old);
extern int usb_wwan_tiocmget(struct tty_struct *tty);
extern int usb_wwan_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
extern int usb_wwan_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
extern int usb_wwan_send_setup(struct usb_serial_port *port);
extern int usb_wwan_write(struct tty_struct *tty, struct usb_serial_port *port,
const unsigned char *buf, int count);
extern int usb_wwan_chars_in_buffer(struct tty_struct *tty);
extern int usb_wwan_suspend(struct usb_serial *serial, pm_message_t message);
extern int usb_wwan_resume(struct usb_serial *serial);
#define N_IN_URB 4
#define N_OUT_URB 4
#define IN_BUFLEN 4096
#define OUT_BUFLEN 4096
struct usb_wwan_intf_private ;
struct usb_wwan_port_private ;

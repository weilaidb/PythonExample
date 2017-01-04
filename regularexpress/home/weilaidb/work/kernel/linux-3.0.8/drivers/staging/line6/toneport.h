#define TONEPORT_H
struct usb_line6_toneport ;
extern void line6_toneport_disconnect(struct usb_interface *interface);
extern int line6_toneport_init(struct usb_interface *interface,
struct usb_line6_toneport *toneport);
extern void line6_toneport_reset_resume(struct usb_line6_toneport *toneport);

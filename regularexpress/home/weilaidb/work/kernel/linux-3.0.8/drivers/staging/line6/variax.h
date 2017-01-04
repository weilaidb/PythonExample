#define VARIAX_H
#define VARIAX_STARTUP_DELAY1 1000
#define VARIAX_STARTUP_DELAY3 100
#define VARIAX_STARTUP_DELAY4 100
enum ;
enum ;
struct variax_model ;
struct usb_line6_variax ;
extern void line6_variax_disconnect(struct usb_interface *interface);
extern int line6_variax_init(struct usb_interface *interface,
struct usb_line6_variax *variax);
extern void line6_variax_process_message(struct usb_line6_variax *variax);

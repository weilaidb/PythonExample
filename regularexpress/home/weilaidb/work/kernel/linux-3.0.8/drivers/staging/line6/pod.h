#define POD_H
#define PODXTLIVE_INTERFACE_POD    0
#define PODXTLIVE_INTERFACE_VARIAX 1
#define	POD_NAME_OFFSET 0
#define	POD_NAME_LENGTH 16
#define POD_CONTROL_SIZE 0x80
#define POD_BUFSIZE_DUMPREQ 7
#define POD_STARTUP_DELAY 1000
enum ;
struct ValueWait ;
struct pod_program ;
struct usb_line6_pod ;
extern void line6_pod_disconnect(struct usb_interface *interface);
extern int line6_pod_init(struct usb_interface *interface,
struct usb_line6_pod *pod);
extern void line6_pod_midi_postprocess(struct usb_line6_pod *pod,
unsigned char *data, int length);
extern void line6_pod_process_message(struct usb_line6_pod *pod);
extern void line6_pod_transmit_parameter(struct usb_line6_pod *pod, int param,
int value);

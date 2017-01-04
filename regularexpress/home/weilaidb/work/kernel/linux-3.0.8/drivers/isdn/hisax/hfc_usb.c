static const char *hfcusb_revision =
"$Revision: 2.3.2.24 $ $Date: 2007/10/14 08:40:29 $ ";
#define __debug_variable hfc_debug
static u_int debug;
module_param(debug, uint, 0);
static int hfc_debug;
typedef struct  hfcsusb_vdata;
static struct usb_device_id hfcusb_idtab[] = ;
struct usb_fifo;
typedef struct iso_urb_struct  iso_urb_struct;
struct hfcusb_data;
typedef struct usb_fifo  usb_fifo;
typedef struct hfcusb_data  hfcusb_data;
static void collect_rx_frame(usb_fifo * fifo, __u8 * data, int len,
int finish);
static inline const char *
symbolic(struct hfcusb_symbolic_list list[], const int num)
static void
ctrl_start_transfer(hfcusb_data * hfc)
static int
queue_control_request(hfcusb_data * hfc, __u8 reg, __u8 val, int action)
static void
ctrl_complete(struct urb *urb)
static void
write_led(hfcusb_data * hfc, __u8 led_state)
static void
set_led_bit(hfcusb_data * hfc, signed short led_bits, int on)
static void
handle_led(hfcusb_data * hfc, int event)
static void
l1_timer_expire_t3(hfcusb_data * hfc)
static void
l1_timer_expire_t4(hfcusb_data * hfc)
static void
s0_state_handler(hfcusb_data * hfc, __u8 state)
static void
fill_isoc_urb(struct urb *urb, struct usb_device *dev, unsigned int pipe,
void *buf, int num_packets, int packet_size, int interval,
usb_complete_t complete, void *context)
static int
start_isoc_chain(usb_fifo * fifo, int num_packets_per_urb,
usb_complete_t complete, int packet_size)
static void
stop_isoc_chain(usb_fifo * fifo)
static int iso_packets[8] =
;
static void
tx_iso_complete(struct urb *urb)
static void
rx_iso_complete(struct urb *urb)
static void
collect_rx_frame(usb_fifo * fifo, __u8 * data, int len, int finish)
static void
rx_int_complete(struct urb *urb)
static void
start_int_fifo(usb_fifo * fifo)
static void
setup_bchannel(hfcusb_data * hfc, int channel, int mode)
static void
hfc_usb_l2l1(struct hisax_if *my_hisax_if, int pr, void *arg)
static int
hfc_usb_init(hfcusb_data * hfc)
static int
hfc_usb_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void
hfc_usb_disconnect(struct usb_interface *intf)
static struct usb_driver hfc_drv = ;
static void __exit
hfc_usb_mod_exit(void)
static int __init
hfc_usb_mod_init(void)
module_init(hfc_usb_mod_init);
module_exit(hfc_usb_mod_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(usb, hfcusb_idtab);

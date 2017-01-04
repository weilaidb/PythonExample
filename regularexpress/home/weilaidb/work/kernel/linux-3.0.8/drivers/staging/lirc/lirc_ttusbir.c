MODULE_DESCRIPTION("TechnoTrend USB IR device driver for LIRC");
MODULE_AUTHOR("Stefan Macher (st_maker-lirc@yahoo.de)");
MODULE_LICENSE("GPL");
#define DPRINTK printk
#define DPRINTK(_x_, a...)
static int probe(struct usb_interface *intf, const struct usb_device_id *id);
static void disconnect(struct usb_interface *intf);
static void urb_complete(struct urb *urb);
static int set_use_inc(void *data);
static void set_use_dec(void *data);
static int num_urbs = 2;
module_param(num_urbs, int, S_IRUGO);
MODULE_PARM_DESC(num_urbs,
"Number of URBs in queue. Try to increase to 4 in case "
"of problems (default: 2; minimum: 2)");
static struct usb_device_id device_id_table[] = ;
MODULE_DEVICE_TABLE(usb, device_id_table);
static struct usb_driver usb_driver = ;
struct ttusbir_device ;
static int set_use_inc(void *data)
static void set_use_dec(void *data)
const unsigned char map_table[] = ;
static void urb_complete(struct urb *urb)
static int probe(struct usb_interface *intf, const struct usb_device_id *id)
static void disconnect(struct usb_interface *intf)
static int ttusbir_init_module(void)
static void ttusbir_exit_module(void)
module_init(ttusbir_init_module);
module_exit(ttusbir_exit_module);

#define DRIVER_VERSION		"0.2"
#define DRIVER_AUTHOR		\
"Jan M. Hochstein <hochstein@algo.informatik.tu-darmstadt.de>"
#define DRIVER_DESC		"Igorplug USB remote driver for LIRC"
#define DRIVER_NAME		"lirc_igorplugusb"
static int debug = 1;
static int debug;
#define dprintk(fmt, args...)					\
do  while (0)
#define CODE_LENGTH	     sizeof(int)
#define DEVICE_BUFLEN	   36
#define DEVICE_HEADERLEN	3
#define ADDITIONAL_LIRC_BYTES   2
#define SAMPLE_RATE	     100
static int sample_rate = SAMPLE_RATE;
#define SET_INFRABUFFER_EMPTY   1
#define GET_INFRACODE	   2
#define SET_DATAPORT_DIRECTION  3
#define GET_DATAPORT_DIRECTION  4
#define SET_OUT_DATAPORT	5
#define GET_OUT_DATAPORT	6
#define GET_IN_DATAPORT	 7
#define READ_EEPROM	     8
#define WRITE_EEPROM	    9
#define SEND_RS232	      10
#define RECV_RS232	      11
#define SET_RS232_BAUD	  12
#define GET_RS232_BAUD	  13
struct igorplug ;
static int unregister_from_lirc(struct igorplug *ir)
static int set_use_inc(void *data)
static void set_use_dec(void *data)
static void send_fragment(struct igorplug *ir, struct lirc_buffer *buf,
int i, int max)
static int igorplugusb_remote_poll(void *data, struct lirc_buffer *buf)
static int igorplugusb_remote_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void igorplugusb_remote_disconnect(struct usb_interface *intf)
static struct usb_device_id igorplugusb_remote_id_table[] = ;
static struct usb_driver igorplugusb_remote_driver = ;
static int __init igorplugusb_remote_init(void)
static void __exit igorplugusb_remote_exit(void)
module_init(igorplugusb_remote_init);
module_exit(igorplugusb_remote_exit);
MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(usb, igorplugusb_remote_id_table);
module_param(sample_rate, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(sample_rate, "Sampling rate in Hz (default: 100)");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug enabled or not");

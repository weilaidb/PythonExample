int au0828_debug;
module_param_named(debug, au0828_debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages");
static unsigned int disable_usb_speed_check;
module_param(disable_usb_speed_check, int, 0444);
MODULE_PARM_DESC(disable_usb_speed_check,
"override min bandwidth requirement of 480M bps");
#define _AU0828_BULKPIPE 0x03
#define _BULKPIPESIZE 0xffff
static int send_control_msg(struct au0828_dev *dev, u16 request, u32 value,
u16 index, unsigned char *cp, u16 size);
static int recv_control_msg(struct au0828_dev *dev, u16 request, u32 value,
u16 index, unsigned char *cp, u16 size);
#define CMD_REQUEST_IN		0x00
#define CMD_REQUEST_OUT		0x01
u32 au0828_readreg(struct au0828_dev *dev, u16 reg)
u32 au0828_writereg(struct au0828_dev *dev, u16 reg, u32 val)
static void cmd_msg_dump(struct au0828_dev *dev)
static int send_control_msg(struct au0828_dev *dev, u16 request, u32 value,
u16 index, unsigned char *cp, u16 size)
static int recv_control_msg(struct au0828_dev *dev, u16 request, u32 value,
u16 index, unsigned char *cp, u16 size)
static void au0828_usb_disconnect(struct usb_interface *interface)
static int au0828_usb_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static struct usb_driver au0828_usb_driver = ;
static int __init au0828_init(void)
static void __exit au0828_exit(void)
module_init(au0828_init);
module_exit(au0828_exit);
MODULE_DESCRIPTION("Driver for Auvitek AU0828 based products");
MODULE_AUTHOR("Steven Toth <stoth@linuxtv.org>");
MODULE_LICENSE("GPL");

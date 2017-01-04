#define EMI26_VENDOR_ID 		0x086a
#define EMI26_PRODUCT_ID		0x0100
#define EMI26B_PRODUCT_ID		0x0102
#define ANCHOR_LOAD_INTERNAL	0xA0
#define ANCHOR_LOAD_EXTERNAL	0xA3
#define ANCHOR_LOAD_FPGA	0xA5
#define MAX_INTERNAL_ADDRESS	0x1B3F
#define CPUCS_REG		0x7F92
#define INTERNAL_RAM(address)   (address <= MAX_INTERNAL_ADDRESS)
static int emi26_writememory( struct usb_device *dev, int address,
const unsigned char *data, int length,
__u8 bRequest);
static int emi26_set_reset(struct usb_device *dev, unsigned char reset_bit);
static int emi26_load_firmware (struct usb_device *dev);
static int emi26_probe(struct usb_interface *intf, const struct usb_device_id *id);
static void emi26_disconnect(struct usb_interface *intf);
static int __init emi26_init (void);
static void __exit emi26_exit (void);
static int emi26_writememory (struct usb_device *dev, int address,
const unsigned char *data, int length,
__u8 request)
static int emi26_set_reset (struct usb_device *dev, unsigned char reset_bit)
#define FW_LOAD_SIZE		1023
static int emi26_load_firmware (struct usb_device *dev)
static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE (usb, id_table);
static int emi26_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void emi26_disconnect(struct usb_interface *intf)
static struct usb_driver emi26_driver = ;
static int __init emi26_init (void)
static void __exit emi26_exit (void)
module_init(emi26_init);
module_exit(emi26_exit);
MODULE_AUTHOR("Tapio Laxström");
MODULE_DESCRIPTION("Emagic EMI 2|6 firmware loader.");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("emi26/loader.fw");
MODULE_FIRMWARE("emi26/bitstream.fw");
MODULE_FIRMWARE("emi26/firmware.fw");

#define SPDIF
#define FIRMWARE_FW "emi62/spdif.fw"
#define FIRMWARE_FW "emi62/midi.fw"
#define EMI62_VENDOR_ID 		0x086a
#define EMI62_PRODUCT_ID		0x0110
#define ANCHOR_LOAD_INTERNAL	0xA0
#define ANCHOR_LOAD_EXTERNAL	0xA3
#define ANCHOR_LOAD_FPGA	0xA5
#define MAX_INTERNAL_ADDRESS	0x1B3F
#define CPUCS_REG		0x7F92
#define INTERNAL_RAM(address)   (address <= MAX_INTERNAL_ADDRESS)
static int emi62_writememory(struct usb_device *dev, int address,
const unsigned char *data, int length,
__u8 bRequest);
static int emi62_set_reset(struct usb_device *dev, unsigned char reset_bit);
static int emi62_load_firmware (struct usb_device *dev);
static int emi62_probe(struct usb_interface *intf, const struct usb_device_id *id);
static void emi62_disconnect(struct usb_interface *intf);
static int __init emi62_init (void);
static void __exit emi62_exit (void);
static int emi62_writememory(struct usb_device *dev, int address,
const unsigned char *data, int length,
__u8 request)
static int emi62_set_reset (struct usb_device *dev, unsigned char reset_bit)
#define FW_LOAD_SIZE		1023
static int emi62_load_firmware (struct usb_device *dev)
static const struct usb_device_id id_table[] __devinitconst = ;
MODULE_DEVICE_TABLE (usb, id_table);
static int emi62_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void emi62_disconnect(struct usb_interface *intf)
static struct usb_driver emi62_driver = ;
static int __init emi62_init (void)
static void __exit emi62_exit (void)
module_init(emi62_init);
module_exit(emi62_exit);
MODULE_AUTHOR("Tapio Laxström");
MODULE_DESCRIPTION("Emagic EMI 6|2m firmware loader.");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("emi62/loader.fw");
MODULE_FIRMWARE("emi62/bitstream.fw");
MODULE_FIRMWARE(FIRMWARE_FW);

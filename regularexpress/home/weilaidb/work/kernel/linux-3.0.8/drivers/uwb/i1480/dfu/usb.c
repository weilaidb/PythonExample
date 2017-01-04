struct i1480_usb ;
static
void i1480_usb_init(struct i1480_usb *i1480_usb)
static
int i1480_usb_create(struct i1480_usb *i1480_usb, struct usb_interface *iface)
static
void i1480_usb_destroy(struct i1480_usb *i1480_usb)
static
int i1480_usb_write(struct i1480 *i1480, u32 memory_address,
const void *buffer, size_t size)
static
int i1480_usb_read(struct i1480 *i1480, u32 addr, size_t size)
static
void i1480_usb_neep_cb(struct urb *urb)
static
int i1480_usb_wait_init_done(struct i1480 *i1480)
static
int i1480_usb_cmd(struct i1480 *i1480, const char *cmd_name, size_t cmd_size)
static
int i1480_usb_probe(struct usb_interface *iface, const struct usb_device_id *id)
MODULE_FIRMWARE("i1480-pre-phy-0.0.bin");
MODULE_FIRMWARE("i1480-usb-0.0.bin");
MODULE_FIRMWARE("i1480-phy-0.0.bin");
#define i1480_USB_DEV(v, p)				\
static const struct usb_device_id i1480_usb_id_table[] = ;
MODULE_DEVICE_TABLE(usb, i1480_usb_id_table);
static struct usb_driver i1480_dfu_driver = ;
static int __init i1480_dfu_driver_init(void)
module_init(i1480_dfu_driver_init);
static void __exit i1480_dfu_driver_exit(void)
module_exit(i1480_dfu_driver_exit);
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("Intel Wireless UWB Link 1480 firmware uploader for USB");
MODULE_LICENSE("GPL");

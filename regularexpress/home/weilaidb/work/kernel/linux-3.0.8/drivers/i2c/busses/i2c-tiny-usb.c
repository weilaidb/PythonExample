#define CMD_ECHO		0
#define CMD_GET_FUNC		1
#define CMD_SET_DELAY		2
#define CMD_GET_STATUS		3
#define CMD_I2C_IO		4
#define CMD_I2C_IO_BEGIN	(1<<0)
#define CMD_I2C_IO_END		(1<<1)
static unsigned short delay = 10;
module_param(delay, ushort, 0);
MODULE_PARM_DESC(delay, "bit delay in microseconds "
"(default is 10us for 100kHz max)");
static int usb_read(struct i2c_adapter *adapter, int cmd,
int value, int index, void *data, int len);
static int usb_write(struct i2c_adapter *adapter, int cmd,
int value, int index, void *data, int len);
#define STATUS_IDLE		0
#define STATUS_ADDRESS_ACK	1
#define STATUS_ADDRESS_NAK	2
static int usb_xfer(struct i2c_adapter *adapter, struct i2c_msg *msgs, int num)
static u32 usb_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm usb_algorithm = ;
static const struct usb_device_id i2c_tiny_usb_table[] = ;
MODULE_DEVICE_TABLE(usb, i2c_tiny_usb_table);
struct i2c_tiny_usb ;
static int usb_read(struct i2c_adapter *adapter, int cmd,
int value, int index, void *data, int len)
static int usb_write(struct i2c_adapter *adapter, int cmd,
int value, int index, void *data, int len)
static void i2c_tiny_usb_free(struct i2c_tiny_usb *dev)
static int i2c_tiny_usb_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void i2c_tiny_usb_disconnect(struct usb_interface *interface)
static struct usb_driver i2c_tiny_usb_driver = ;
static int __init usb_i2c_tiny_usb_init(void)
static void __exit usb_i2c_tiny_usb_exit(void)
module_init(usb_i2c_tiny_usb_init);
module_exit(usb_i2c_tiny_usb_exit);
MODULE_AUTHOR("Till Harbaum <Till@Harbaum.org>");
MODULE_DESCRIPTION("i2c-tiny-usb driver v1.0");
MODULE_LICENSE("GPL");

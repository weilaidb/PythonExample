#define DRIVER_NAME		"i2c-diolan-u2c"
#define USB_VENDOR_ID_DIOLAN		0x0abf
#define USB_DEVICE_ID_DIOLAN_U2C	0x3370
#define DIOLAN_OUT_EP		0x02
#define DIOLAN_IN_EP		0x84
#define CMD_I2C_READ		0x01
#define CMD_I2C_WRITE		0x02
#define CMD_I2C_SCAN		0x03
#define CMD_I2C_RELEASE_SDA	0x04
#define CMD_I2C_RELEASE_SCL	0x05
#define CMD_I2C_DROP_SDA	0x06
#define CMD_I2C_DROP_SCL	0x07
#define CMD_I2C_READ_SDA	0x08
#define CMD_I2C_READ_SCL	0x09
#define CMD_GET_FW_VERSION	0x0a
#define CMD_GET_SERIAL		0x0b
#define CMD_I2C_START		0x0c
#define CMD_I2C_STOP		0x0d
#define CMD_I2C_REPEATED_START	0x0e
#define CMD_I2C_PUT_BYTE	0x0f
#define CMD_I2C_GET_BYTE	0x10
#define CMD_I2C_PUT_ACK		0x11
#define CMD_I2C_GET_ACK		0x12
#define CMD_I2C_PUT_BYTE_ACK	0x13
#define CMD_I2C_GET_BYTE_ACK	0x14
#define CMD_I2C_SET_SPEED	0x1b
#define CMD_I2C_GET_SPEED	0x1c
#define CMD_I2C_SET_CLK_SYNC	0x24
#define CMD_I2C_GET_CLK_SYNC	0x25
#define CMD_I2C_SET_CLK_SYNC_TO	0x26
#define CMD_I2C_GET_CLK_SYNC_TO	0x27
#define RESP_OK			0x00
#define RESP_FAILED		0x01
#define RESP_BAD_MEMADDR	0x04
#define RESP_DATA_ERR		0x05
#define RESP_NOT_IMPLEMENTED	0x06
#define RESP_NACK		0x07
#define RESP_TIMEOUT		0x09
#define U2C_I2C_SPEED_FAST	0
#define U2C_I2C_SPEED_STD	1
#define U2C_I2C_SPEED_2KHZ	242
#define U2C_I2C_SPEED(f)	((DIV_ROUND_UP(1000000, (f)) - 10) / 2 + 1)
#define U2C_I2C_FREQ_FAST	400000
#define U2C_I2C_FREQ_STD	100000
#define U2C_I2C_FREQ(s)		(1000000 / (2 * (s - 1) + 10))
#define DIOLAN_USB_TIMEOUT	100
#define DIOLAN_SYNC_TIMEOUT	20
#define DIOLAN_OUTBUF_LEN	128
#define DIOLAN_FLUSH_LEN	(DIOLAN_OUTBUF_LEN - 4)
#define DIOLAN_INBUF_LEN	256
struct i2c_diolan_u2c ;
static uint frequency = U2C_I2C_FREQ_STD;
module_param(frequency, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(frequency, "I2C clock frequency in hertz");
static int diolan_usb_transfer(struct i2c_diolan_u2c *dev)
static int diolan_write_cmd(struct i2c_diolan_u2c *dev, bool flush)
static int diolan_usb_cmd(struct i2c_diolan_u2c *dev, u8 command, bool flush)
static int diolan_usb_cmd_data(struct i2c_diolan_u2c *dev, u8 command, u8 data,
bool flush)
static int diolan_usb_cmd_data2(struct i2c_diolan_u2c *dev, u8 command, u8 d1,
u8 d2, bool flush)
static void diolan_flush_input(struct i2c_diolan_u2c *dev)
static int diolan_i2c_start(struct i2c_diolan_u2c *dev)
static int diolan_i2c_repeated_start(struct i2c_diolan_u2c *dev)
static int diolan_i2c_stop(struct i2c_diolan_u2c *dev)
static int diolan_i2c_get_byte_ack(struct i2c_diolan_u2c *dev, bool ack,
u8 *byte)
static int diolan_i2c_put_byte_ack(struct i2c_diolan_u2c *dev, u8 byte)
static int diolan_set_speed(struct i2c_diolan_u2c *dev, u8 speed)
static int diolan_set_clock_synch(struct i2c_diolan_u2c *dev, bool enable)
static int diolan_set_clock_synch_timeout(struct i2c_diolan_u2c *dev, int ms)
static void diolan_fw_version(struct i2c_diolan_u2c *dev)
static void diolan_get_serial(struct i2c_diolan_u2c *dev)
static int diolan_init(struct i2c_diolan_u2c *dev)
static int diolan_usb_xfer(struct i2c_adapter *adapter, struct i2c_msg *msgs,
int num)
static u32 diolan_usb_func(struct i2c_adapter *a)
static const struct i2c_algorithm diolan_usb_algorithm = ;
static const struct usb_device_id diolan_u2c_table[] = ;
MODULE_DEVICE_TABLE(usb, diolan_u2c_table);
static void diolan_u2c_free(struct i2c_diolan_u2c *dev)
static int diolan_u2c_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void diolan_u2c_disconnect(struct usb_interface *interface)
static struct usb_driver diolan_u2c_driver = ;
static int __init diolan_u2c_init(void)
static void __exit diolan_u2c_exit(void)
module_init(diolan_u2c_init);
module_exit(diolan_u2c_exit);
MODULE_AUTHOR("Guenter Roeck <guenter.roeck@ericsson.com>");
MODULE_DESCRIPTION(DRIVER_NAME " driver");
MODULE_LICENSE("GPL");

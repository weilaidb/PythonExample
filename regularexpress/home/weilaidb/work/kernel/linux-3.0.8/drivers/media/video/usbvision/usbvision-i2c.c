#define DBG_I2C		(1 << 0)
static int i2c_debug;
module_param(i2c_debug, int, 0644);
MODULE_PARM_DESC(i2c_debug, "enable debug messages [i2c]");
#define PDEBUG(level, fmt, args...)
static int usbvision_i2c_write(struct usb_usbvision *usbvision, unsigned char addr, char *buf,
short len);
static int usbvision_i2c_read(struct usb_usbvision *usbvision, unsigned char addr, char *buf,
short len);
static inline int try_write_address(struct i2c_adapter *i2c_adap,
unsigned char addr, int retries)
static inline int try_read_address(struct i2c_adapter *i2c_adap,
unsigned char addr, int retries)
static inline int usb_find_address(struct i2c_adapter *i2c_adap,
struct i2c_msg *msg, int retries,
unsigned char *add)
static int
usbvision_i2c_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg msgs[], int num)
static u32 functionality(struct i2c_adapter *adap)
static struct i2c_algorithm usbvision_algo = ;
static struct i2c_adapter i2c_adap_template;
int usbvision_i2c_register(struct usb_usbvision *usbvision)
int usbvision_i2c_unregister(struct usb_usbvision *usbvision)
static int
usbvision_i2c_read_max4(struct usb_usbvision *usbvision, unsigned char addr,
char *buf, short len)
static int usbvision_i2c_write_max4(struct usb_usbvision *usbvision,
unsigned char addr, const char *buf,
short len)
static int usbvision_i2c_write(struct usb_usbvision *usbvision, unsigned char addr, char *buf,
short len)
static int usbvision_i2c_read(struct usb_usbvision *usbvision, unsigned char addr, char *buf,
short len)
static struct i2c_adapter i2c_adap_template = ;

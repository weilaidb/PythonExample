#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
#define CTRL_READ_REQUEST	0xb8
#define CTRL_WRITE_REQUEST	0x38
#define REQTYPE_I2C_READ	0xb1
#define REQTYPE_I2C_WRITE	0xb0
#define REQTYPE_I2C_WRITE_STATT	0xd0
#define Z8F0811_IR_TX_I2C_ADDR	0x70
#define Z8F0811_IR_RX_I2C_ADDR	0x71
struct i2c_client *hdpvr_register_ir_tx_i2c(struct hdpvr_device *dev)
struct i2c_client *hdpvr_register_ir_rx_i2c(struct hdpvr_device *dev)
static int hdpvr_i2c_read(struct hdpvr_device *dev, int bus,
unsigned char addr, char *wdata, int wlen,
char *data, int len)
static int hdpvr_i2c_write(struct hdpvr_device *dev, int bus,
unsigned char addr, char *data, int len)
static int hdpvr_transfer(struct i2c_adapter *i2c_adapter, struct i2c_msg *msgs,
int num)
static u32 hdpvr_functionality(struct i2c_adapter *adapter)
static struct i2c_algorithm hdpvr_algo = ;
static struct i2c_adapter hdpvr_i2c_adapter_template = ;
static int hdpvr_activate_ir(struct hdpvr_device *dev)
int hdpvr_register_i2c_adapter(struct hdpvr_device *dev)

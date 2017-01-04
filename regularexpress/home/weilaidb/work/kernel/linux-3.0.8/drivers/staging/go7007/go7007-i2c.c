#define SPI_I2C_ADDR_BASE		0x1400
#define STATUS_REG_ADDR			(SPI_I2C_ADDR_BASE + 0x2)
#define I2C_CTRL_REG_ADDR		(SPI_I2C_ADDR_BASE + 0x6)
#define I2C_DEV_UP_ADDR_REG_ADDR	(SPI_I2C_ADDR_BASE + 0x7)
#define I2C_LO_ADDR_REG_ADDR		(SPI_I2C_ADDR_BASE + 0x8)
#define I2C_DATA_REG_ADDR		(SPI_I2C_ADDR_BASE + 0x9)
#define I2C_CLKFREQ_REG_ADDR		(SPI_I2C_ADDR_BASE + 0xa)
#define I2C_STATE_MASK			0x0007
#define I2C_READ_READY_MASK		0x0008
static DEFINE_MUTEX(adlink_mpg24_i2c_lock);
static int go7007_i2c_xfer(struct go7007 *go, u16 addr, int read,
u16 command, int flags, u8 *data)
static int go7007_smbus_xfer(struct i2c_adapter *adapter, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data *data)
static int go7007_i2c_master_xfer(struct i2c_adapter *adapter,
struct i2c_msg msgs[], int num)
static u32 go7007_functionality(struct i2c_adapter *adapter)
static struct i2c_algorithm go7007_algo = ;
static struct i2c_adapter go7007_adap_templ = ;
int go7007_i2c_init(struct go7007 *go)

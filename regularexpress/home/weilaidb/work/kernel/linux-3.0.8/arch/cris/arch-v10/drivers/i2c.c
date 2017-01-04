#define D(x)
#define I2C_MAJOR 123
static const char i2c_name[] = "i2c";
#define CLOCK_LOW_TIME            8
#define CLOCK_HIGH_TIME           8
#define START_CONDITION_HOLD_TIME 8
#define STOP_CONDITION_HOLD_TIME  8
#define ENABLE_OUTPUT 0x01
#define ENABLE_INPUT 0x00
#define I2C_CLOCK_HIGH 1
#define I2C_CLOCK_LOW 0
#define I2C_DATA_HIGH 1
#define I2C_DATA_LOW 0
#define CONFIG_ETRAX_I2C_DATA_PORT 0
#define CONFIG_ETRAX_I2C_CLK_PORT 1
#define SDABIT CONFIG_ETRAX_I2C_DATA_PORT
#define SCLBIT CONFIG_ETRAX_I2C_CLK_PORT
#define i2c_enable()
#define i2c_disable()
#define i2c_dir_out() \
REG_SHADOW_SET(R_PORT_PB_DIR, port_pb_dir_shadow, SDABIT, 1)
#define i2c_dir_in()  \
REG_SHADOW_SET(R_PORT_PB_DIR, port_pb_dir_shadow, SDABIT, 0)
#define i2c_clk(x) \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, SCLBIT, x)
#define i2c_data(x) \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, SDABIT, x)
#define i2c_getbit() (((*R_PORT_PB_READ & (1 << SDABIT))) >> SDABIT)
#define i2c_enable() *R_PORT_PB_I2C = (port_pb_i2c_shadow |= IO_MASK(R_PORT_PB_I2C, i2c_en))
#define i2c_disable() *R_PORT_PB_I2C = (port_pb_i2c_shadow &= ~IO_MASK(R_PORT_PB_I2C, i2c_en))
#define i2c_dir_out() \
*R_PORT_PB_I2C = (port_pb_i2c_shadow &= ~IO_MASK(R_PORT_PB_I2C, i2c_oe_)); \
REG_SHADOW_SET(R_PORT_PB_DIR, port_pb_dir_shadow, 0, 1);
#define i2c_dir_in() \
*R_PORT_PB_I2C = (port_pb_i2c_shadow |= IO_MASK(R_PORT_PB_I2C, i2c_oe_)); \
REG_SHADOW_SET(R_PORT_PB_DIR, port_pb_dir_shadow, 0, 0);
#define i2c_clk(x) \
*R_PORT_PB_I2C = (port_pb_i2c_shadow = (port_pb_i2c_shadow & \
~IO_MASK(R_PORT_PB_I2C, i2c_clk)) | IO_FIELD(R_PORT_PB_I2C, i2c_clk, (x))); \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, 1, x);
#define i2c_data(x) \
*R_PORT_PB_I2C = (port_pb_i2c_shadow = (port_pb_i2c_shadow & \
~IO_MASK(R_PORT_PB_I2C, i2c_d)) | IO_FIELD(R_PORT_PB_I2C, i2c_d, (x))); \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, 0, x);
#define i2c_getbit() (*R_PORT_PB_READ & 0x1)
#define i2c_delay(usecs) udelay(usecs)
static DEFINE_SPINLOCK(i2c_lock);
void
i2c_start(void)
void
i2c_stop(void)
void
i2c_outbyte(unsigned char x)
unsigned char
i2c_inbyte(void)
int
i2c_getack(void)
void
i2c_sendack(void)
void
i2c_sendnack(void)
int
i2c_writereg(unsigned char theSlave, unsigned char theReg,
unsigned char theValue)
unsigned char
i2c_readreg(unsigned char theSlave, unsigned char theReg)
static int
i2c_open(struct inode *inode, struct file *filp)
static int
i2c_release(struct inode *inode, struct file *filp)
static long i2c_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations i2c_fops = ;
int __init
i2c_init(void)
static int __init
i2c_register(void)
module_init(i2c_register);

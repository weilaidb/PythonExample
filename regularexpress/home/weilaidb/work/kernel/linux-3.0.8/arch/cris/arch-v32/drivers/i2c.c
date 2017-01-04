#define D(x)
#define I2C_MAJOR 123
static DEFINE_MUTEX(i2c_mutex);
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
#define i2c_enable()
#define i2c_disable()
#define i2c_dir_out() crisv32_io_set_dir(&cris_i2c_data, crisv32_io_dir_out)
#define i2c_dir_in() crisv32_io_set_dir(&cris_i2c_data, crisv32_io_dir_in)
#define i2c_clk(x) crisv32_io_set(&cris_i2c_clk, x)
#define i2c_data(x) crisv32_io_set(&cris_i2c_data, x)
#define i2c_getbit() crisv32_io_rd(&cris_i2c_data)
#define i2c_delay(usecs) udelay(usecs)
static DEFINE_SPINLOCK(i2c_lock);
static struct crisv32_iopin cris_i2c_clk;
static struct crisv32_iopin cris_i2c_data;
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
i2c_write(unsigned char theSlave, void *data, size_t nbytes)
int
i2c_read(unsigned char theSlave, void *data, size_t nbytes)
int
i2c_writereg(unsigned char theSlave, unsigned char theReg,
unsigned char theValue)
unsigned char
i2c_readreg(unsigned char theSlave, unsigned char theReg)
static int
i2c_open(struct inode *inode, struct file *filp)
static int
i2c_release(struct inode *inode, struct file *filp)
static long
i2c_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations i2c_fops = ;
static int __init i2c_init(void)
static int __init i2c_register(void)
module_init(i2c_register);

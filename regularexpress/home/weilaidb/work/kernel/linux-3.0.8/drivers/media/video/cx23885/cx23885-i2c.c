static unsigned int i2c_debug;
module_param(i2c_debug, int, 0644);
MODULE_PARM_DESC(i2c_debug, "enable debug messages [i2c]");
static unsigned int i2c_scan;
module_param(i2c_scan, int, 0444);
MODULE_PARM_DESC(i2c_scan, "scan i2c bus at insmod time");
#define dprintk(level, fmt, arg...)\
do  while (0)
#define I2C_WAIT_DELAY 32
#define I2C_WAIT_RETRY 64
#define I2C_EXTEND  (1 << 3)
#define I2C_NOSTOP  (1 << 4)
static inline int i2c_slave_did_ack(struct i2c_adapter *i2c_adap)
static inline int i2c_is_busy(struct i2c_adapter *i2c_adap)
static int i2c_wait_done(struct i2c_adapter *i2c_adap)
static int i2c_sendbytes(struct i2c_adapter *i2c_adap,
const struct i2c_msg *msg, int joined_rlen)
static int i2c_readbytes(struct i2c_adapter *i2c_adap,
const struct i2c_msg *msg, int joined)
static int i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, int num)
static u32 cx23885_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm cx23885_i2c_algo_template = ;
static struct i2c_adapter cx23885_i2c_adap_template = ;
static struct i2c_client cx23885_i2c_client_template = ;
static char *i2c_devs[128] = ;
static void do_i2c_scan(char *name, struct i2c_client *c)
int cx23885_i2c_register(struct cx23885_i2c *bus)
int cx23885_i2c_unregister(struct cx23885_i2c *bus)
void cx23885_av_clk(struct cx23885_dev *dev, int enable)

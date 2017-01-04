static unsigned int i2c_scan;
module_param(i2c_scan, int, 0444);
MODULE_PARM_DESC(i2c_scan, "scan i2c bus at insmod time");
static unsigned int i2c_debug;
module_param(i2c_debug, int, 0644);
MODULE_PARM_DESC(i2c_debug, "enable debug messages [i2c]");
#define dprintk1(lvl, fmt, args...)			\
do  while (0)
#define dprintk2(lvl, fmt, args...)			\
do  while (0)
static inline bool is_tuner(struct cx231xx *dev, struct cx231xx_i2c *bus,
const struct i2c_msg *msg, int tuner_type)
int cx231xx_i2c_send_bytes(struct i2c_adapter *i2c_adap,
const struct i2c_msg *msg)
static int cx231xx_i2c_recv_bytes(struct i2c_adapter *i2c_adap,
const struct i2c_msg *msg)
static int cx231xx_i2c_recv_bytes_with_saddr(struct i2c_adapter *i2c_adap,
const struct i2c_msg *msg1,
const struct i2c_msg *msg2)
static int cx231xx_i2c_check_for_device(struct i2c_adapter *i2c_adap,
const struct i2c_msg *msg)
static int cx231xx_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msgs[], int num)
static u32 functionality(struct i2c_adapter *adap)
static struct i2c_algorithm cx231xx_algo = ;
static struct i2c_adapter cx231xx_adap_template = ;
static struct i2c_client cx231xx_client_template = ;
static char *i2c_devs[128] = ;
void cx231xx_do_i2c_scan(struct cx231xx *dev, struct i2c_client *c)
int cx231xx_i2c_register(struct cx231xx_i2c *bus)
int cx231xx_i2c_unregister(struct cx231xx_i2c *bus)

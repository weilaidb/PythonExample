static int i2c_scan;
module_param(i2c_scan, int, 0444);
MODULE_PARM_DESC(i2c_scan, "scan i2c bus at insmod time");
#define I2C_WAIT_DELAY 512
#define I2C_WAIT_RETRY 64
static inline int i2c_slave_did_write_ack(struct i2c_adapter *i2c_adap)
static inline int i2c_slave_did_read_ack(struct i2c_adapter *i2c_adap)
static int i2c_wait_read_ack(struct i2c_adapter *i2c_adap)
static inline int i2c_is_read_busy(struct i2c_adapter *i2c_adap)
static int i2c_wait_read_done(struct i2c_adapter *i2c_adap)
static inline int i2c_is_write_done(struct i2c_adapter *i2c_adap)
static int i2c_wait_write_done(struct i2c_adapter *i2c_adap)
static inline int i2c_is_busy(struct i2c_adapter *i2c_adap)
static int i2c_wait_done(struct i2c_adapter *i2c_adap)
static int i2c_sendbytes(struct i2c_adapter *i2c_adap,
const struct i2c_msg *msg, int joined_rlen)
static int i2c_readbytes(struct i2c_adapter *i2c_adap,
const struct i2c_msg *msg, int joined)
static int i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, int num)
static u32 au0828_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm au0828_i2c_algo_template = ;
static struct i2c_adapter au0828_i2c_adap_template = ;
static struct i2c_client au0828_i2c_client_template = ;
static char *i2c_devs[128] = ;
static void do_i2c_scan(char *name, struct i2c_client *c)
int au0828_i2c_register(struct au0828_dev *dev)
int au0828_i2c_unregister(struct au0828_dev *dev)

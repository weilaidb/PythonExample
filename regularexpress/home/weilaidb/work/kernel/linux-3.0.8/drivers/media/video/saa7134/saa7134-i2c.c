static unsigned int i2c_debug;
module_param(i2c_debug, int, 0644);
MODULE_PARM_DESC(i2c_debug,"enable debug messages [i2c]");
static unsigned int i2c_scan;
module_param(i2c_scan, int, 0444);
MODULE_PARM_DESC(i2c_scan,"scan i2c bus at insmod time");
#define d1printk if (1 == i2c_debug) printk
#define d2printk if (2 == i2c_debug) printk
#define I2C_WAIT_DELAY  32
#define I2C_WAIT_RETRY  16
static char *str_i2c_status[] = ;
enum i2c_status ;
static char *str_i2c_attr[] = ;
enum i2c_attr ;
static inline enum i2c_status i2c_get_status(struct saa7134_dev *dev)
static inline void i2c_set_status(struct saa7134_dev *dev,
enum i2c_status status)
static inline void i2c_set_attr(struct saa7134_dev *dev, enum i2c_attr attr)
static inline int i2c_is_error(enum i2c_status status)
static inline int i2c_is_idle(enum i2c_status status)
static inline int i2c_is_busy(enum i2c_status status)
static int i2c_is_busy_wait(struct saa7134_dev *dev)
static int i2c_reset(struct saa7134_dev *dev)
static inline int i2c_send_byte(struct saa7134_dev *dev,
enum i2c_attr attr,
unsigned char data)
static inline int i2c_recv_byte(struct saa7134_dev *dev)
static int saa7134_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs, int num)
static u32 functionality(struct i2c_adapter *adap)
static struct i2c_algorithm saa7134_algo = ;
static struct i2c_adapter saa7134_adap_template = ;
static struct i2c_client saa7134_client_template = ;
static int
saa7134_i2c_eeprom(struct saa7134_dev *dev, unsigned char *eedata, int len)
static char *i2c_devs[128] = ;
static void do_i2c_scan(char *name, struct i2c_client *c)
int saa7134_i2c_register(struct saa7134_dev *dev)
int saa7134_i2c_unregister(struct saa7134_dev *dev)

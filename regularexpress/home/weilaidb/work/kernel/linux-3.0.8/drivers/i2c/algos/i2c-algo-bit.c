#define bit_dbg(level, dev, format, args...) \
do  while (0)
#define bit_dbg(level, dev, format, args...) \
do  while (0)
static int bit_test;
module_param(bit_test, bool, 0);
MODULE_PARM_DESC(bit_test, "Test the lines of the bus to see if it is stuck");
static int i2c_debug = 1;
module_param(i2c_debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(i2c_debug,
"debug level - 0 off; 1 normal; 2 verbose; 3 very verbose");
#define setsda(adap, val)	adap->setsda(adap->data, val)
#define setscl(adap, val)	adap->setscl(adap->data, val)
#define getsda(adap)		adap->getsda(adap->data)
#define getscl(adap)		adap->getscl(adap->data)
static inline void sdalo(struct i2c_algo_bit_data *adap)
static inline void sdahi(struct i2c_algo_bit_data *adap)
static inline void scllo(struct i2c_algo_bit_data *adap)
static int sclhi(struct i2c_algo_bit_data *adap)
static void i2c_start(struct i2c_algo_bit_data *adap)
static void i2c_repstart(struct i2c_algo_bit_data *adap)
static void i2c_stop(struct i2c_algo_bit_data *adap)
static int i2c_outb(struct i2c_adapter *i2c_adap, unsigned char c)
static int i2c_inb(struct i2c_adapter *i2c_adap)
static int test_bus(struct i2c_adapter *i2c_adap)
static int try_address(struct i2c_adapter *i2c_adap,
unsigned char addr, int retries)
static int sendbytes(struct i2c_adapter *i2c_adap, struct i2c_msg *msg)
static int acknak(struct i2c_adapter *i2c_adap, int is_ack)
static int readbytes(struct i2c_adapter *i2c_adap, struct i2c_msg *msg)
static int bit_doAddress(struct i2c_adapter *i2c_adap, struct i2c_msg *msg)
static int bit_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msgs[], int num)
static u32 bit_func(struct i2c_adapter *adap)
static const struct i2c_algorithm i2c_bit_algo = ;
static int __i2c_bit_add_bus(struct i2c_adapter *adap,
int (*add_adapter)(struct i2c_adapter *))
int i2c_bit_add_bus(struct i2c_adapter *adap)
EXPORT_SYMBOL(i2c_bit_add_bus);
int i2c_bit_add_numbered_bus(struct i2c_adapter *adap)
EXPORT_SYMBOL(i2c_bit_add_numbered_bus);
MODULE_AUTHOR("Simon G. Vogl <simon@tk.uni-linz.ac.at>");
MODULE_DESCRIPTION("I2C-Bus bit-banging algorithm");
MODULE_LICENSE("GPL");

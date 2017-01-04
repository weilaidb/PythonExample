#define DEB2(x) if (i2c_debug >= 2) x
#define DEB3(x) if (i2c_debug >= 3) x
#define DEBPROTO(x) if (i2c_debug >= 9) x;
#define DEF_TIMEOUT 16
static int i2c_debug;
#define set_pcf(adap, ctl, val) adap->setpcf(adap->data, ctl, val)
#define get_pcf(adap, ctl) adap->getpcf(adap->data, ctl)
#define get_own(adap) adap->getown(adap->data)
#define get_clock(adap) adap->getclock(adap->data)
#define i2c_outb(adap, val) adap->setpcf(adap->data, 0, val)
#define i2c_inb(adap) adap->getpcf(adap->data, 0)
static void i2c_start(struct i2c_algo_pcf_data *adap)
static void i2c_repstart(struct i2c_algo_pcf_data *adap)
static void i2c_stop(struct i2c_algo_pcf_data *adap)
static void handle_lab(struct i2c_algo_pcf_data *adap, const int *status)
static int wait_for_bb(struct i2c_algo_pcf_data *adap)
static int wait_for_pin(struct i2c_algo_pcf_data *adap, int *status)
static int pcf_init_8584 (struct i2c_algo_pcf_data *adap)
static int pcf_sendbytes(struct i2c_adapter *i2c_adap, const char *buf,
int count, int last)
static int pcf_readbytes(struct i2c_adapter *i2c_adap, char *buf,
int count, int last)
static int pcf_doAddress(struct i2c_algo_pcf_data *adap,
struct i2c_msg *msg)
static int pcf_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg *msgs,
int num)
static u32 pcf_func(struct i2c_adapter *adap)
static const struct i2c_algorithm pcf_algo = ;
int i2c_pcf_add_bus(struct i2c_adapter *adap)
EXPORT_SYMBOL(i2c_pcf_add_bus);
MODULE_AUTHOR("Hans Berglund <hb@spacetec.no>");
MODULE_DESCRIPTION("I2C-Bus PCF8584 algorithm");
MODULE_LICENSE("GPL");
module_param(i2c_debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(i2c_debug,
"debug level - 0 off; 1 normal; 2,3 more verbose; 9 pcf-protocol");

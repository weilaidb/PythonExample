static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "turn on debugging (default: 0)");
#define dprintk(args...) do  while (0)
static int dibx000_write_word(struct dibx000_i2c_master *mst, u16 reg, u16 val)
static u16 dibx000_read_word(struct dibx000_i2c_master *mst, u16 reg)
static int dibx000_is_i2c_done(struct dibx000_i2c_master *mst)
static int dibx000_master_i2c_write(struct dibx000_i2c_master *mst, struct i2c_msg *msg, u8 stop)
static int dibx000_master_i2c_read(struct dibx000_i2c_master *mst, struct i2c_msg *msg)
int dibx000_i2c_set_speed(struct i2c_adapter *i2c_adap, u16 speed)
EXPORT_SYMBOL(dibx000_i2c_set_speed);
static u32 dibx000_i2c_func(struct i2c_adapter *adapter)
static int dibx000_i2c_select_interface(struct dibx000_i2c_master *mst,
enum dibx000_i2c_interface intf)
static int dibx000_i2c_master_xfer_gpio12(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
static int dibx000_i2c_master_xfer_gpio34(struct i2c_adapter *i2c_adap, struct i2c_msg msg[], int num)
static struct i2c_algorithm dibx000_i2c_master_gpio12_xfer_algo = ;
static struct i2c_algorithm dibx000_i2c_master_gpio34_xfer_algo = ;
static int dibx000_i2c_gate_ctrl(struct dibx000_i2c_master *mst, u8 tx[4],
u8 addr, int onoff)
static int dibx000_i2c_gated_gpio67_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msg[], int num)
static struct i2c_algorithm dibx000_i2c_gated_gpio67_algo = ;
static int dibx000_i2c_gated_tuner_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msg[], int num)
static struct i2c_algorithm dibx000_i2c_gated_tuner_algo = ;
struct i2c_adapter *dibx000_get_i2c_adapter(struct dibx000_i2c_master *mst,
enum dibx000_i2c_interface intf,
int gating)
EXPORT_SYMBOL(dibx000_get_i2c_adapter);
void dibx000_reset_i2c_master(struct dibx000_i2c_master *mst)
EXPORT_SYMBOL(dibx000_reset_i2c_master);
static int i2c_adapter_init(struct i2c_adapter *i2c_adap,
struct i2c_algorithm *algo, const char *name,
struct dibx000_i2c_master *mst)
int dibx000_init_i2c_master(struct dibx000_i2c_master *mst, u16 device_rev,
struct i2c_adapter *i2c_adap, u8 i2c_addr)
EXPORT_SYMBOL(dibx000_init_i2c_master);
void dibx000_exit_i2c_master(struct dibx000_i2c_master *mst)
EXPORT_SYMBOL(dibx000_exit_i2c_master);
u32 systime(void)
EXPORT_SYMBOL(systime);
MODULE_AUTHOR("Patrick Boettcher <pboettcher@dibcom.fr>");
MODULE_DESCRIPTION("Common function the DiBcom demodulator family");
MODULE_LICENSE("GPL");

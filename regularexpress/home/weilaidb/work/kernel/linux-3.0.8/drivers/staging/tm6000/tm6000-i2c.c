static unsigned int i2c_debug;
module_param(i2c_debug, int, 0644);
MODULE_PARM_DESC(i2c_debug, "enable debug messages [i2c]");
#define i2c_dprintk(lvl, fmt, args...) if (i2c_debug >= lvl) do  while (0)
static int tm6000_i2c_send_regs(struct tm6000_core *dev, unsigned char addr,
__u8 reg, char *buf, int len)
static int tm6000_i2c_recv_regs(struct tm6000_core *dev, unsigned char addr,
__u8 reg, char *buf, int len)
static int tm6000_i2c_recv_regs16(struct tm6000_core *dev, unsigned char addr,
__u16 reg, char *buf, int len)
static int tm6000_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msgs[], int num)
static int tm6000_i2c_eeprom(struct tm6000_core *dev)
static u32 functionality(struct i2c_adapter *adap)
static const struct i2c_algorithm tm6000_algo = ;
int tm6000_i2c_register(struct tm6000_core *dev)
int tm6000_i2c_unregister(struct tm6000_core *dev)

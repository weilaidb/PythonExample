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
static int em2800_i2c_send_max4(struct em28xx *dev, unsigned char addr,
char *buf, int len)
static int em2800_i2c_send_bytes(void *data, unsigned char addr, char *buf,
short len)
static int em2800_i2c_check_for_device(struct em28xx *dev, unsigned char addr)
static int em2800_i2c_recv_bytes(struct em28xx *dev, unsigned char addr,
char *buf, int len)
static int em28xx_i2c_send_bytes(void *data, unsigned char addr, char *buf,
short len, int stop)
static int em28xx_i2c_recv_bytes(struct em28xx *dev, unsigned char addr,
char *buf, int len)
static int em28xx_i2c_check_for_device(struct em28xx *dev, unsigned char addr)
static int em28xx_i2c_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msgs[], int num)
static inline unsigned long em28xx_hash_mem(char *buf, int length, int bits)
static int em28xx_i2c_eeprom(struct em28xx *dev, unsigned char *eedata, int len)
static u32 functionality(struct i2c_adapter *adap)
static struct i2c_algorithm em28xx_algo = ;
static struct i2c_adapter em28xx_adap_template = ;
static struct i2c_client em28xx_client_template = ;
static char *i2c_devs[128] = ;
void em28xx_do_i2c_scan(struct em28xx *dev)
int em28xx_i2c_register(struct em28xx *dev)
int em28xx_i2c_unregister(struct em28xx *dev)

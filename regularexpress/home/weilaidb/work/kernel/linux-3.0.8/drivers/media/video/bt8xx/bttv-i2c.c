static int i2c_debug;
static int i2c_hw;
static int i2c_scan;
module_param(i2c_debug, int, 0644);
MODULE_PARM_DESC(i2c_debug, "configure i2c debug level");
module_param(i2c_hw,    int, 0444);
MODULE_PARM_DESC(i2c_hw,"force use of hardware i2c support, "
"instead of software bitbang");
module_param(i2c_scan,  int, 0444);
MODULE_PARM_DESC(i2c_scan,"scan i2c bus at insmod time");
static unsigned int i2c_udelay = 5;
module_param(i2c_udelay, int, 0444);
MODULE_PARM_DESC(i2c_udelay,"soft i2c delay at insmod time, in usecs "
"(should be 5 or higher). Lower value means higher bus speed.");
static void bttv_bit_setscl(void *data, int state)
static void bttv_bit_setsda(void *data, int state)
static int bttv_bit_getscl(void *data)
static int bttv_bit_getsda(void *data)
static struct i2c_algo_bit_data __devinitdata bttv_i2c_algo_bit_template = ;
static u32 functionality(struct i2c_adapter *adap)
static int
bttv_i2c_wait_done(struct bttv *btv)
#define I2C_HW (BT878_I2C_MODE  | BT848_I2C_SYNC |\
BT848_I2C_SCL | BT848_I2C_SDA)
static int
bttv_i2c_sendbytes(struct bttv *btv, const struct i2c_msg *msg, int last)
static int
bttv_i2c_readbytes(struct bttv *btv, const struct i2c_msg *msg, int last)
static int bttv_i2c_xfer(struct i2c_adapter *i2c_adap, struct i2c_msg *msgs, int num)
static const struct i2c_algorithm bttv_algo = ;
int bttv_I2CRead(struct bttv *btv, unsigned char addr, char *probe_for)
int bttv_I2CWrite(struct bttv *btv, unsigned char addr, unsigned char b1,
unsigned char b2, int both)
void __devinit bttv_readee(struct bttv *btv, unsigned char *eedata, int addr)
static char *i2c_devs[128] = ;
static void do_i2c_scan(char *name, struct i2c_client *c)
int __devinit init_bttv_i2c(struct bttv *btv)

static int ngene_command_i2c_read(struct ngene *dev, u8 adr,
u8 *out, u8 outlen, u8 *in, u8 inlen, int flag)
static int ngene_command_i2c_write(struct ngene *dev, u8 adr,
u8 *out, u8 outlen)
static void ngene_i2c_set_bus(struct ngene *dev, int bus)
static int ngene_i2c_master_xfer(struct i2c_adapter *adapter,
struct i2c_msg msg[], int num)
static u32 ngene_i2c_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm ngene_i2c_algo = ;
int ngene_i2c_init(struct ngene *dev, int dev_nr)

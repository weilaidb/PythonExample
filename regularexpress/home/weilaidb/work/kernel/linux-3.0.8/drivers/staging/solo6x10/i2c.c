u8 solo_i2c_readbyte(struct solo_dev *solo_dev, int id, u8 addr, u8 off)
void solo_i2c_writebyte(struct solo_dev *solo_dev, int id, u8 addr,
u8 off, u8 data)
static void solo_i2c_flush(struct solo_dev *solo_dev, int wr)
static void solo_i2c_start(struct solo_dev *solo_dev)
static void solo_i2c_stop(struct solo_dev *solo_dev)
static int solo_i2c_handle_read(struct solo_dev *solo_dev)
static int solo_i2c_handle_write(struct solo_dev *solo_dev)
int solo_i2c_isr(struct solo_dev *solo_dev)
static int solo_i2c_master_xfer(struct i2c_adapter *adap,
struct i2c_msg msgs[], int num)
static u32 solo_i2c_functionality(struct i2c_adapter *adap)
static struct i2c_algorithm solo_i2c_algo = ;
int solo_i2c_init(struct solo_dev *solo_dev)
void solo_i2c_exit(struct solo_dev *solo_dev)

static int mb862xx_i2c_wait_event(struct i2c_adapter *adap)
static int mb862xx_i2c_do_address(struct i2c_adapter *adap, int addr)
static int mb862xx_i2c_write_byte(struct i2c_adapter *adap, u8 byte)
static int mb862xx_i2c_read_byte(struct i2c_adapter *adap, u8 *byte, int last)
void mb862xx_i2c_stop(struct i2c_adapter *adap)
static int mb862xx_i2c_read(struct i2c_adapter *adap, struct i2c_msg *m)
static int mb862xx_i2c_write(struct i2c_adapter *adap, struct i2c_msg *m)
static int mb862xx_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs,
int num)
static u32 mb862xx_func(struct i2c_adapter *adap)
static const struct i2c_algorithm mb862xx_algo = ;
static struct i2c_adapter mb862xx_i2c_adapter = ;
int mb862xx_i2c_init(struct mb862xxfb_par *par)
void mb862xx_i2c_exit(struct mb862xxfb_par *par)

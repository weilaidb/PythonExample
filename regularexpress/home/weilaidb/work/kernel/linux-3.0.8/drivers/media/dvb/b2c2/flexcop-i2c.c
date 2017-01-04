#define FC_MAX_I2C_RETRIES 100000
static int flexcop_i2c_operation(struct flexcop_device *fc,
flexcop_ibi_value *r100)
static int flexcop_i2c_read4(struct flexcop_i2c_adapter *i2c,
flexcop_ibi_value r100, u8 *buf)
static int flexcop_i2c_write4(struct flexcop_device *fc,
flexcop_ibi_value r100, u8 *buf)
int flexcop_i2c_request(struct flexcop_i2c_adapter *i2c,
flexcop_access_op_t op, u8 chipaddr, u8 addr, u8 *buf, u16 len)
EXPORT_SYMBOL(flexcop_i2c_request);
static int flexcop_master_xfer(struct i2c_adapter *i2c_adap,
struct i2c_msg msgs[], int num)
static u32 flexcop_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm flexcop_algo = ;
int flexcop_i2c_init(struct flexcop_device *fc)
void flexcop_i2c_exit(struct flexcop_device *fc)

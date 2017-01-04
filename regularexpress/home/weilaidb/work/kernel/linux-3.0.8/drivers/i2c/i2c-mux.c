struct i2c_mux_priv ;
static int i2c_mux_master_xfer(struct i2c_adapter *adap,
struct i2c_msg msgs[], int num)
static int i2c_mux_smbus_xfer(struct i2c_adapter *adap,
u16 addr, unsigned short flags,
char read_write, u8 command,
int size, union i2c_smbus_data *data)
static u32 i2c_mux_functionality(struct i2c_adapter *adap)
struct i2c_adapter *i2c_add_mux_adapter(struct i2c_adapter *parent,
void *mux_dev, u32 force_nr, u32 chan_id,
int (*select) (struct i2c_adapter *,
void *, u32),
int (*deselect) (struct i2c_adapter *,
void *, u32))
EXPORT_SYMBOL_GPL(i2c_add_mux_adapter);
int i2c_del_mux_adapter(struct i2c_adapter *adap)
EXPORT_SYMBOL_GPL(i2c_del_mux_adapter);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("I2C driver for multiplexed I2C busses");
MODULE_LICENSE("GPL v2");

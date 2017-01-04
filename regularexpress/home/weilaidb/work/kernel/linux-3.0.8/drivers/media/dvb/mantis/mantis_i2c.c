#define TRIALS			10000
static int mantis_i2c_read(struct mantis_pci *mantis, const struct i2c_msg *msg)
static int mantis_i2c_write(struct mantis_pci *mantis, const struct i2c_msg *msg)
static int mantis_i2c_xfer(struct i2c_adapter *adapter, struct i2c_msg *msgs, int num)
static u32 mantis_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm mantis_algo = ;
int __devinit mantis_i2c_init(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_i2c_init);
int mantis_i2c_exit(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_i2c_exit);

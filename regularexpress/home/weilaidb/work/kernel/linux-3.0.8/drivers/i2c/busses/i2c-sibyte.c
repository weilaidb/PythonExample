struct i2c_algo_sibyte_data ;
#define SMB_CSR(a,r) ((long)(a->reg_base + r))
static int smbus_xfer(struct i2c_adapter *i2c_adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size, union i2c_smbus_data * data)
static u32 bit_func(struct i2c_adapter *adap)
static const struct i2c_algorithm i2c_sibyte_algo = ;
static int __init i2c_sibyte_add_bus(struct i2c_adapter *i2c_adap, int speed)
static struct i2c_algo_sibyte_data sibyte_board_data[2] = ;
static struct i2c_adapter sibyte_board_adapter[2] = ;
static int __init i2c_sibyte_init(void)
static void __exit i2c_sibyte_exit(void)
module_init(i2c_sibyte_init);
module_exit(i2c_sibyte_exit);
MODULE_AUTHOR("Kip Walker (Broadcom Corp.), Steven J. Hill <sjhill@realitydiluted.com>");
MODULE_DESCRIPTION("SMBus adapter routines for SiByte boards");
MODULE_LICENSE("GPL");

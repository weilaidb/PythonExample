#define DEBUG 1
#define MAX_CHIPS 10
#define STUB_FUNC (I2C_FUNC_SMBUS_QUICK | I2C_FUNC_SMBUS_BYTE | \
I2C_FUNC_SMBUS_BYTE_DATA | I2C_FUNC_SMBUS_WORD_DATA | \
I2C_FUNC_SMBUS_I2C_BLOCK)
static unsigned short chip_addr[MAX_CHIPS];
module_param_array(chip_addr, ushort, NULL, S_IRUGO);
MODULE_PARM_DESC(chip_addr,
"Chip addresses (up to 10, between 0x03 and 0x77)");
static unsigned long functionality = STUB_FUNC;
module_param(functionality, ulong, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(functionality, "Override functionality bitfield");
struct stub_chip ;
static struct stub_chip *stub_chips;
static s32 stub_xfer(struct i2c_adapter * adap, u16 addr, unsigned short flags,
char read_write, u8 command, int size, union i2c_smbus_data * data)
static u32 stub_func(struct i2c_adapter *adapter)
static const struct i2c_algorithm smbus_algorithm = ;
static struct i2c_adapter stub_adapter = ;
static int __init i2c_stub_init(void)
static void __exit i2c_stub_exit(void)
MODULE_AUTHOR("Mark M. Hoffman <mhoffman@lightlink.com>");
MODULE_DESCRIPTION("I2C stub driver");
MODULE_LICENSE("GPL");
module_init(i2c_stub_init);
module_exit(i2c_stub_exit);

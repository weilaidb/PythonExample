extern struct i2c_adapter *nforce2_smbus;
static struct i2c_adapter *s4985_adapter;
static struct i2c_algorithm *s4985_algo;
static DEFINE_MUTEX(nforce2_lock);
static s32 nforce2_access_virt0(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data *data)
static u8 last_channels;
static inline s32 nforce2_access_channel(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data *data,
u8 channels)
static s32 nforce2_access_virt1(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data *data)
static s32 nforce2_access_virt2(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data *data)
static s32 nforce2_access_virt3(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data *data)
static s32 nforce2_access_virt4(struct i2c_adapter *adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data *data)
static int __init nforce2_s4985_init(void)
static void __exit nforce2_s4985_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("S4985 SMBus multiplexing");
MODULE_LICENSE("GPL");
module_init(nforce2_s4985_init);
module_exit(nforce2_s4985_exit);

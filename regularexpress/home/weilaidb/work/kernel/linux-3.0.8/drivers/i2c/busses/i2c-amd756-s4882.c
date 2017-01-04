extern struct i2c_adapter amd756_smbus;
static struct i2c_adapter *s4882_adapter;
static struct i2c_algorithm *s4882_algo;
static DEFINE_MUTEX(amd756_lock);
static s32 amd756_access_virt0(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data * data)
static u8 last_channels;
static inline s32 amd756_access_channel(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data * data,
u8 channels)
static s32 amd756_access_virt1(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data * data)
static s32 amd756_access_virt2(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data * data)
static s32 amd756_access_virt3(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data * data)
static s32 amd756_access_virt4(struct i2c_adapter * adap, u16 addr,
unsigned short flags, char read_write,
u8 command, int size,
union i2c_smbus_data * data)
static int __init amd756_s4882_init(void)
static void __exit amd756_s4882_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("S4882 SMBus multiplexing");
MODULE_LICENSE("GPL");
module_init(amd756_s4882_init);
module_exit(amd756_s4882_exit);

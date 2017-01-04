#define FORCE_ONES	0xdc
#define SCL		0x02
#define SDA		0x01
static u_int force_ones;
static void ioc_setscl(void *data, int state)
static void ioc_setsda(void *data, int state)
static int ioc_getscl(void *data)
static int ioc_getsda(void *data)
static struct i2c_algo_bit_data ioc_data = ;
static struct i2c_adapter ioc_ops = ;
static int __init i2c_ioc_init(void)
module_init(i2c_ioc_init);

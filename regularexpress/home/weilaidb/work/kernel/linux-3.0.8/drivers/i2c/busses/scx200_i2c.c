#define NAME "scx200_i2c"
MODULE_AUTHOR("Christer Weinigel <wingel@nano-system.com>");
MODULE_DESCRIPTION("NatSemi SCx200 I2C Driver");
MODULE_LICENSE("GPL");
static int scl = CONFIG_SCx200_I2C_SCL;
static int sda = CONFIG_SCx200_I2C_SDA;
module_param(scl, int, 0);
MODULE_PARM_DESC(scl, "GPIO line for SCL");
module_param(sda, int, 0);
MODULE_PARM_DESC(sda, "GPIO line for SDA");
static void scx200_i2c_setscl(void *data, int state)
static void scx200_i2c_setsda(void *data, int state)
static int scx200_i2c_getscl(void *data)
static int scx200_i2c_getsda(void *data)
static struct i2c_algo_bit_data scx200_i2c_data = ;
static struct i2c_adapter scx200_i2c_ops = ;
static int scx200_i2c_init(void)
static void scx200_i2c_cleanup(void)
module_init(scx200_i2c_init);
module_exit(scx200_i2c_cleanup);

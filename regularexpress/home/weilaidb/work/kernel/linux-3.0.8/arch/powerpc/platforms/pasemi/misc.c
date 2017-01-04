struct i2c_driver_device ;
static struct i2c_driver_device i2c_devices[] __initdata = ;
static int __init find_i2c_driver(struct device_node *node,
struct i2c_board_info *info)
static int __init pasemi_register_i2c_devices(void)
device_initcall(pasemi_register_i2c_devices);

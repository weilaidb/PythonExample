static struct i2c_pnx_data i2c0_data = ;
static struct i2c_pnx_data i2c1_data = ;
static struct i2c_pnx_data i2c2_data = ;
static struct platform_device i2c0_device = ;
static struct platform_device i2c1_device = ;
static struct platform_device i2c2_device = ;
static struct platform_device *devices[] __initdata = ;
void __init pnx4008_register_i2c_devices(void)

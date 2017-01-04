static struct octeon_cf_data octeon_cf_data;
static int __init octeon_cf_device_init(void)
device_initcall(octeon_cf_device_init);
static int __init octeon_rng_device_init(void)
device_initcall(octeon_rng_device_init);
static struct i2c_board_info __initdata octeon_i2c_devices[] = ;
static int __init octeon_i2c_devices_init(void)
arch_initcall(octeon_i2c_devices_init);
#define OCTEON_I2C_IO_BASE 0x1180000001000ull
#define OCTEON_I2C_IO_UNIT_OFFSET 0x200
static struct octeon_i2c_data octeon_i2c_data[2];
static int __init octeon_i2c_device_init(void)
device_initcall(octeon_i2c_device_init);
static int __init octeon_mdiobus_device_init(void)
device_initcall(octeon_mdiobus_device_init);
static int __init octeon_mgmt_device_init(void)
device_initcall(octeon_mgmt_device_init);
static int __init octeon_ehci_device_init(void)
device_initcall(octeon_ehci_device_init);
static int __init octeon_ohci_device_init(void)
device_initcall(octeon_ohci_device_init);
MODULE_AUTHOR("David Daney <ddaney@caviumnetworks.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Platform driver for Octeon SOC");

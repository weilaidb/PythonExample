static struct i2c_gpio_platform_data acs5k_i2c_device_platdata = ;
static struct platform_device acs5k_i2c_device = ;
static int acs5k_pca9555_setup(struct i2c_client *client,
unsigned gpio_base, unsigned ngpio,
void *context)
static struct pca953x_platform_data acs5k_i2c_pca9555_platdata = ;
static struct i2c_board_info acs5k_i2c_devs[] __initdata = ;
static void __devinit acs5k_i2c_init(void)
static struct mtd_partition acs5k_nor_partitions[] = ;
static struct physmap_flash_data acs5k_nor_pdata = ;
static struct resource acs5k_nor_resource[] = ;
static struct platform_device acs5k_device_nor = ;
static void __init acs5k_register_nor(void)
static int __init acs5k_protection_setup(char *s)
__setup("protect_bootloader=", acs5k_protection_setup);
static void __init acs5k_init_gpio(void)
static void __init acs5k_init(void)
MACHINE_START(ACS5K, "Brivo Systems LLC ACS-5000 Master board")
.boot_params	= KS8695_SDRAM_PA + 0x100,
.map_io		= ks8695_map_io,
.init_irq	= ks8695_init_irq,
.init_machine	= acs5k_init,
.timer		= &ks8695_timer,
MACHINE_END

struct mtd_partition hp_t5325_partitions[] = ;
const struct flash_platform_data hp_t5325_flash = ;
struct spi_board_info __initdata hp_t5325_spi_slave_info[] = ;
static struct mv643xx_eth_platform_data hp_t5325_ge00_data = ;
static struct mv_sata_platform_data hp_t5325_sata_data = ;
static struct gpio_keys_button hp_t5325_buttons[] = ;
static struct gpio_keys_platform_data hp_t5325_button_data = ;
static struct platform_device hp_t5325_button_device = ;
static unsigned int hp_t5325_mpp_config[] __initdata = ;
static struct alc5623_platform_data alc5621_data = ;
static struct i2c_board_info i2c_board_info[] __initdata = ;
#define HP_T5325_GPIO_POWER_OFF		48
static void hp_t5325_power_off(void)
static void __init hp_t5325_init(void)
static int __init hp_t5325_pci_init(void)
subsys_initcall(hp_t5325_pci_init);
MACHINE_START(T5325, "HP t5325 Thin Client")
.boot_params	= 0x00000100,
.init_machine	= hp_t5325_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END

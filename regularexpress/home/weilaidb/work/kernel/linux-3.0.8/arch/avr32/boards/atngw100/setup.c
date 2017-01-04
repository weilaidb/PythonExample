unsigned long at32_board_osc_rates[3] = ;
static struct smc_timing nand_timing __initdata = ;
static struct smc_config nand_config __initdata = ;
static struct mtd_partition nand_partitions[] = ;
static struct mtd_partition *nand_part_info(int size, int *num_partitions)
static struct atmel_nand_data atngw100mkii_nand_data __initdata = ;
struct tag *bootloader_tags __initdata;
struct eth_addr ;
static struct eth_addr __initdata hw_addr[2];
static struct eth_platform_data __initdata eth_data[2];
static struct spi_board_info spi0_board_info[] __initdata = ;
static struct mci_platform_data __initdata mci0_data = ;
static struct usba_platform_data atngw100_usba_data __initdata = ;
static int __init parse_tag_ethernet(struct tag *tag)
__tagtable(ATAG_ETHERNET, parse_tag_ethernet);
static void __init set_hw_addr(struct platform_device *pdev)
void __init setup_board(void)
static const struct gpio_led ngw_leds[] = ;
static const struct gpio_led_platform_data ngw_led_data = ;
static struct platform_device ngw_gpio_leds = ;
static struct i2c_gpio_platform_data i2c_gpio_data = ;
static struct platform_device i2c_gpio_device = ;
static struct i2c_board_info __initdata i2c_info[] = ;
static int __init atngw100_init(void)
postcore_initcall(atngw100_init);
static int __init atngw100_arch_init(void)
arch_initcall(atngw100_arch_init);

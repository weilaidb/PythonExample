extern struct atmel_lcdfb_info mimc200_lcdc_data;
unsigned long at32_board_osc_rates[3] = ;
struct tag *bootloader_tags __initdata;
static struct fb_videomode __initdata pt0434827_modes[] = ;
static struct fb_monspecs __initdata mimc200_default_monspecs = ;
struct atmel_lcdfb_info __initdata mimc200_lcdc_data = ;
struct eth_addr ;
static struct eth_addr __initdata hw_addr[2];
static struct eth_platform_data __initdata eth_data[2];
static struct spi_eeprom eeprom_25lc010 = ;
static struct spi_board_info spi0_board_info[] __initdata = ;
static struct mci_platform_data __initdata mci0_data = ;
static int __init parse_tag_ethernet(struct tag *tag)
__tagtable(ATAG_ETHERNET, parse_tag_ethernet);
static void __init set_hw_addr(struct platform_device *pdev)
void __init setup_board(void)
static struct i2c_gpio_platform_data i2c_gpio_data = ;
static struct platform_device i2c_gpio_device = ;
static struct i2c_board_info __initdata i2c_info[] = ;
static int __init mimc200_init(void)
postcore_initcall(mimc200_init);

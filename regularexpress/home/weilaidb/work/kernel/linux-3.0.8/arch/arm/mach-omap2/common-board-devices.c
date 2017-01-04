static struct i2c_board_info __initdata pmic_i2c_board_info = ;
void __init omap_pmic_init(int bus, u32 clkrate,
const char *pmic_type, int pmic_irq,
struct twl4030_platform_data *pmic_data)
#if defined(CONFIG_TOUCHSCREEN_ADS7846) || \
defined(CONFIG_TOUCHSCREEN_ADS7846_MODULE)
static struct omap2_mcspi_device_config ads7846_mcspi_config = ;
static struct ads7846_platform_data ads7846_config = ;
static struct spi_board_info ads7846_spi_board_info __initdata = ;
void __init omap_ads7846_init(int bus_num, int gpio_pendown, int gpio_debounce,
struct ads7846_platform_data *board_pdata)
void __init omap_ads7846_init(int bus_num, int gpio_pendown, int gpio_debounce,
struct ads7846_platform_data *board_pdata)
#if defined(CONFIG_MTD_NAND_OMAP2) || defined(CONFIG_MTD_NAND_OMAP2_MODULE)
static struct omap_nand_platform_data nand_data = ;
void __init omap_nand_flash_init(int options, struct mtd_partition *parts,
int nr_parts)
void __init omap_nand_flash_init(int options, struct mtd_partition *parts,
int nr_parts)

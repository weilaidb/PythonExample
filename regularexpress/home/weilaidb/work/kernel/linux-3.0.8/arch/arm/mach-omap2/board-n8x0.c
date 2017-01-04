static int slot1_cover_open;
static int slot2_cover_open;
static struct device *mmc_device;
#define TUSB6010_ASYNC_CS	1
#define TUSB6010_SYNC_CS	4
#define TUSB6010_GPIO_INT	58
#define TUSB6010_GPIO_ENABLE	0
#define TUSB6010_DMACHAN	0x3f
static int tusb_set_power(int state)
static struct musb_hdrc_config musb_config = ;
static struct musb_hdrc_platform_data tusb_data = ;
static void __init n8x0_usb_init(void)
static void __init n8x0_usb_init(void)
static struct omap2_mcspi_device_config p54spi_mcspi_config = ;
static struct spi_board_info n800_spi_board_info[] __initdata = ;
#if defined(CONFIG_MTD_ONENAND_OMAP2) || \
defined(CONFIG_MTD_ONENAND_OMAP2_MODULE)
static struct mtd_partition onenand_partitions[] = ;
static struct omap_onenand_platform_data board_onenand_data[] = ;
#if defined(CONFIG_MENELAUS) &&						\
(defined(CONFIG_MMC_OMAP) || defined(CONFIG_MMC_OMAP_MODULE))
#define N8X0_SLOT_SWITCH_GPIO	96
#define N810_EMMC_VSD_GPIO	23
#define N810_EMMC_VIO_GPIO	9
static int n8x0_mmc_switch_slot(struct device *dev, int slot)
static int n8x0_mmc_set_power_menelaus(struct device *dev, int slot,
int power_on, int vdd)
static void n810_set_power_emmc(struct device *dev,
int power_on)
static int n8x0_mmc_set_power(struct device *dev, int slot, int power_on,
int vdd)
static int n8x0_mmc_set_bus_mode(struct device *dev, int slot, int bus_mode)
static int n8x0_mmc_get_cover_state(struct device *dev, int slot)
static void n8x0_mmc_callback(void *data, u8 card_mask)
static int n8x0_mmc_late_init(struct device *dev)
static void n8x0_mmc_shutdown(struct device *dev)
static void n8x0_mmc_cleanup(struct device *dev)
static struct omap_mmc_platform_data mmc1_data = ;
static struct omap_mmc_platform_data *mmc_data[OMAP24XX_NR_MMC];
static struct gpio n810_emmc_gpios[] __initdata = ;
static void __init n8x0_mmc_init(void)
void __init n8x0_mmc_init(void)
static int n8x0_auto_sleep_regulators(void)
static int n8x0_auto_voltage_scale(void)
static int n8x0_menelaus_late_init(struct device *dev)
static int n8x0_menelaus_late_init(struct device *dev)
static struct menelaus_platform_data n8x0_menelaus_platform_data __initdata = ;
static struct i2c_board_info __initdata n8x0_i2c_board_info_1[] __initdata = ;
static struct aic3x_pdata n810_aic33_data __initdata = ;
static struct i2c_board_info n810_i2c_board_info_2[] __initdata = ;
static void __init n8x0_map_io(void)
static void __init n8x0_init_early(void)
static struct omap_board_mux board_mux[] __initdata = ;
static struct omap_device_pad serial2_pads[] __initdata = ;
static inline void board_serial_init(void)
static inline void board_serial_init(void)
static void __init n8x0_init_machine(void)
MACHINE_START(NOKIA_N800, "Nokia N800")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= n8x0_map_io,
.init_early	= n8x0_init_early,
.init_irq	= omap_init_irq,
.init_machine	= n8x0_init_machine,
.timer		= &omap_timer,
MACHINE_END
MACHINE_START(NOKIA_N810, "Nokia N810")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= n8x0_map_io,
.init_early	= n8x0_init_early,
.init_irq	= omap_init_irq,
.init_machine	= n8x0_init_machine,
.timer		= &omap_timer,
MACHINE_END
MACHINE_START(NOKIA_N810_WIMAX, "Nokia N810 WiMAX")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= n8x0_map_io,
.init_early	= n8x0_init_early,
.init_irq	= omap_init_irq,
.init_machine	= n8x0_init_machine,
.timer		= &omap_timer,
MACHINE_END

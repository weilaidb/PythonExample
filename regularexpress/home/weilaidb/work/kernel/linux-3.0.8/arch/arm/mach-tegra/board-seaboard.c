static struct plat_serial8250_port debug_uart_platform_data[] = ;
static struct platform_device debug_uart = ;
static __initdata struct tegra_clk_init_table seaboard_clk_init_table[] = ;
static struct tegra_i2c_platform_data seaboard_i2c1_platform_data = ;
static struct tegra_i2c_platform_data seaboard_i2c2_platform_data = ;
static struct tegra_i2c_platform_data seaboard_i2c3_platform_data = ;
static struct tegra_i2c_platform_data seaboard_dvc_platform_data = ;
static struct gpio_keys_button seaboard_gpio_keys_buttons[] = ;
static struct gpio_keys_platform_data seaboard_gpio_keys = ;
static struct platform_device seaboard_gpio_keys_device = ;
static struct tegra_sdhci_platform_data sdhci_pdata1 = ;
static struct tegra_sdhci_platform_data sdhci_pdata3 = ;
static struct tegra_sdhci_platform_data sdhci_pdata4 = ;
static struct platform_device *seaboard_devices[] __initdata = ;
static struct i2c_board_info __initdata isl29018_device = ;
static struct i2c_board_info __initdata adt7461_device = ;
static void __init seaboard_i2c_init(void)
static void __init seaboard_common_init(void)
static void __init tegra_seaboard_init(void)
static void __init tegra_kaen_init(void)
static void __init tegra_wario_init(void)
MACHINE_START(SEABOARD, "seaboard")
.boot_params    = 0x00000100,
.map_io         = tegra_map_common_io,
.init_early     = tegra_init_early,
.init_irq       = tegra_init_irq,
.timer          = &tegra_timer,
.init_machine   = tegra_seaboard_init,
MACHINE_END
MACHINE_START(KAEN, "kaen")
.boot_params    = 0x00000100,
.map_io         = tegra_map_common_io,
.init_early     = tegra_init_early,
.init_irq       = tegra_init_irq,
.timer          = &tegra_timer,
.init_machine   = tegra_kaen_init,
MACHINE_END
MACHINE_START(WARIO, "wario")
.boot_params    = 0x00000100,
.map_io         = tegra_map_common_io,
.init_early     = tegra_init_early,
.init_irq       = tegra_init_irq,
.timer          = &tegra_timer,
.init_machine   = tegra_wario_init,
MACHINE_END

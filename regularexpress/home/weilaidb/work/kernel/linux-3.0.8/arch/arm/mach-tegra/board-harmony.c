static struct plat_serial8250_port debug_uart_platform_data[] = ;
static struct platform_device debug_uart = ;
static struct tegra_wm8903_platform_data harmony_audio_pdata = ;
static struct platform_device harmony_audio_device = ;
static struct tegra_i2c_platform_data harmony_i2c1_platform_data = ;
static struct tegra_i2c_platform_data harmony_i2c2_platform_data = ;
static struct tegra_i2c_platform_data harmony_i2c3_platform_data = ;
static struct tegra_i2c_platform_data harmony_dvc_platform_data = ;
static struct wm8903_platform_data harmony_wm8903_pdata = ;
static struct i2c_board_info __initdata wm8903_board_info = ;
static void __init harmony_i2c_init(void)
static struct platform_device *harmony_devices[] __initdata = ;
static void __init tegra_harmony_fixup(struct machine_desc *desc,
struct tag *tags, char **cmdline, struct meminfo *mi)
static __initdata struct tegra_clk_init_table harmony_clk_init_table[] = ;
static struct tegra_sdhci_platform_data sdhci_pdata1 = ;
static struct tegra_sdhci_platform_data sdhci_pdata2 = ;
static struct tegra_sdhci_platform_data sdhci_pdata4 = ;
static void __init tegra_harmony_init(void)
MACHINE_START(HARMONY, "harmony")
.boot_params  = 0x00000100,
.fixup		= tegra_harmony_fixup,
.map_io         = tegra_map_common_io,
.init_early	= tegra_init_early,
.init_irq       = tegra_init_irq,
.timer          = &tegra_timer,
.init_machine   = tegra_harmony_init,
MACHINE_END

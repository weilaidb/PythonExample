static struct plat_serial8250_port debug_uart_platform_data[] = ;
static struct platform_device debug_uart = ;
static struct platform_device *paz00_devices[] __initdata = ;
static void __init tegra_paz00_fixup(struct machine_desc *desc,
struct tag *tags, char **cmdline, struct meminfo *mi)
static __initdata struct tegra_clk_init_table paz00_clk_init_table[] = ;
static struct tegra_sdhci_platform_data sdhci_pdata1 = ;
static struct tegra_sdhci_platform_data sdhci_pdata2 = ;
static struct tegra_sdhci_platform_data sdhci_pdata4 = ;
static void __init tegra_paz00_init(void)
MACHINE_START(PAZ00, "paz00")
.boot_params	= 0x00000100,
.fixup		= tegra_paz00_fixup,
.map_io         = tegra_map_common_io,
.init_early	= tegra_init_early,
.init_irq       = tegra_init_irq,
.timer          = &tegra_timer,
.init_machine   = tegra_paz00_init,
MACHINE_END

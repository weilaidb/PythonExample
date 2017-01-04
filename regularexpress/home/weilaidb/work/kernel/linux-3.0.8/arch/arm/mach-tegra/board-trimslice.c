static struct plat_serial8250_port debug_uart_platform_data[] = ;
static struct platform_device debug_uart = ;
static struct tegra_sdhci_platform_data sdhci_pdata1 = ;
static struct tegra_sdhci_platform_data sdhci_pdata4 = ;
static struct platform_device *trimslice_devices[] __initdata = ;
static void __init tegra_trimslice_fixup(struct machine_desc *desc,
struct tag *tags, char **cmdline, struct meminfo *mi)
static __initdata struct tegra_clk_init_table trimslice_clk_init_table[] = ;
static int __init tegra_trimslice_pci_init(void)
subsys_initcall(tegra_trimslice_pci_init);
static void __init tegra_trimslice_init(void)
MACHINE_START(TRIMSLICE, "trimslice")
.boot_params	= 0x00000100,
.fixup		= tegra_trimslice_fixup,
.map_io         = tegra_map_common_io,
.init_early	= tegra_init_early,
.init_irq       = tegra_init_irq,
.timer          = &tegra_timer,
.init_machine   = tegra_trimslice_init,
MACHINE_END

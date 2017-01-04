static struct map_desc tegra_io_desc[] __initdata = ;
void __init tegra_map_common_io(void)
void __iomem *tegra_ioremap(unsigned long p, size_t size, unsigned int type)
EXPORT_SYMBOL(tegra_ioremap);
void tegra_iounmap(volatile void __iomem *addr)
EXPORT_SYMBOL(tegra_iounmap);

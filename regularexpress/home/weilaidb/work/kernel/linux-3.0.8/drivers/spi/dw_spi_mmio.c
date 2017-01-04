#define DRIVER_NAME "dw_spi_mmio"
struct dw_spi_mmio ;
static int __devinit dw_spi_mmio_probe(struct platform_device *pdev)
static int __devexit dw_spi_mmio_remove(struct platform_device *pdev)
static struct platform_driver dw_spi_mmio_driver = ;
static int __init dw_spi_mmio_init(void)
module_init(dw_spi_mmio_init);
static void __exit dw_spi_mmio_exit(void)
module_exit(dw_spi_mmio_exit);
MODULE_AUTHOR("Jean-Hugues Deschenes <jean-hugues.deschenes@octasic.com>");
MODULE_DESCRIPTION("Memory-mapped I/O interface driver for DW SPI Core");
MODULE_LICENSE("GPL v2");

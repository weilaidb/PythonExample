static char *spi_src_clks[] = ;
static int s5pv210_spi_cfg_gpio(struct platform_device *pdev)
static struct resource s5pv210_spi0_resource[] = ;
static struct s3c64xx_spi_info s5pv210_spi0_pdata = ;
static u64 spi_dmamask = DMA_BIT_MASK(32);
struct platform_device s5pv210_device_spi0 = ;
static struct resource s5pv210_spi1_resource[] = ;
static struct s3c64xx_spi_info s5pv210_spi1_pdata = ;
struct platform_device s5pv210_device_spi1 = ;
void __init s5pv210_spi_set_info(int cntrlr, int src_clk_nr, int num_cs)

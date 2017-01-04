static char *spi_src_clks[] = ;
static int s5pc100_spi_cfg_gpio(struct platform_device *pdev)
static struct resource s5pc100_spi0_resource[] = ;
static struct s3c64xx_spi_info s5pc100_spi0_pdata = ;
static u64 spi_dmamask = DMA_BIT_MASK(32);
struct platform_device s5pc100_device_spi0 = ;
static struct resource s5pc100_spi1_resource[] = ;
static struct s3c64xx_spi_info s5pc100_spi1_pdata = ;
struct platform_device s5pc100_device_spi1 = ;
static struct resource s5pc100_spi2_resource[] = ;
static struct s3c64xx_spi_info s5pc100_spi2_pdata = ;
struct platform_device s5pc100_device_spi2 = ;
void __init s5pc100_spi_set_info(int cntrlr, int src_clk_nr, int num_cs)

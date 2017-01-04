static char *s5p64x0_spi_src_clks[] = ;
static int s5p6440_spi_cfg_gpio(struct platform_device *pdev)
static int s5p6450_spi_cfg_gpio(struct platform_device *pdev)
static struct resource s5p64x0_spi0_resource[] = ;
static struct s3c64xx_spi_info s5p6440_spi0_pdata = ;
static struct s3c64xx_spi_info s5p6450_spi0_pdata = ;
static u64 spi_dmamask = DMA_BIT_MASK(32);
struct platform_device s5p64x0_device_spi0 = ;
static struct resource s5p64x0_spi1_resource[] = ;
static struct s3c64xx_spi_info s5p6440_spi1_pdata = ;
static struct s3c64xx_spi_info s5p6450_spi1_pdata = ;
struct platform_device s5p64x0_device_spi1 = ;
void __init s5p64x0_spi_set_info(int cntrlr, int src_clk_nr, int num_cs)

static u64 dma_dmamask = DMA_BIT_MASK(32);
static struct resource s5pv210_pdma0_resource[] = ;
static struct s3c_pl330_platdata s5pv210_pdma0_pdata = ;
static struct platform_device s5pv210_device_pdma0 = ;
static struct resource s5pv210_pdma1_resource[] = ;
static struct s3c_pl330_platdata s5pv210_pdma1_pdata = ;
static struct platform_device s5pv210_device_pdma1 = ;
static struct platform_device *s5pv210_dmacs[] __initdata = ;
static int __init s5pv210_dma_init(void)
arch_initcall(s5pv210_dma_init);

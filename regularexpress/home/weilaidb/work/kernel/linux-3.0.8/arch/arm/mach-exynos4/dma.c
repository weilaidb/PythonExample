static u64 dma_dmamask = DMA_BIT_MASK(32);
static struct resource exynos4_pdma0_resource[] = ;
static struct s3c_pl330_platdata exynos4_pdma0_pdata = ;
static struct platform_device exynos4_device_pdma0 = ;
static struct resource exynos4_pdma1_resource[] = ;
static struct s3c_pl330_platdata exynos4_pdma1_pdata = ;
static struct platform_device exynos4_device_pdma1 = ;
static struct platform_device *exynos4_dmacs[] __initdata = ;
static int __init exynos4_dma_init(void)
arch_initcall(exynos4_dma_init);

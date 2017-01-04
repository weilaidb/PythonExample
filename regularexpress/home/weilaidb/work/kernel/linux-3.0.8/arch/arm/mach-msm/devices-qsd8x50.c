static struct resource resources_uart3[] = ;
struct platform_device msm_device_uart3 = ;
struct platform_device msm_device_smd = ;
static struct resource resources_otg[] = ;
struct platform_device msm_device_otg = ;
static struct resource resources_hsusb[] = ;
struct platform_device msm_device_hsusb = ;
static u64 dma_mask = 0xffffffffULL;
static struct resource resources_hsusb_host[] = ;
struct platform_device msm_device_hsusb_host = ;
static struct resource resources_sdc1[] = ;
static struct resource resources_sdc2[] = ;
static struct resource resources_sdc3[] = ;
static struct resource resources_sdc4[] = ;
struct platform_device msm_device_sdc1 = ;
struct platform_device msm_device_sdc2 = ;
struct platform_device msm_device_sdc3 = ;
struct platform_device msm_device_sdc4 = ;
static struct platform_device *msm_sdcc_devices[] __initdata = ;
int __init msm_add_sdcc(unsigned int controller,
struct msm_mmc_platform_data *plat,
unsigned int stat_irq, unsigned long stat_irq_flags)
struct clk_lookup msm_clocks_8x50[] = ;
unsigned msm_num_clocks_8x50 = ARRAY_SIZE(msm_clocks_8x50);

static struct resource resources_uart1[] = ;
static struct resource resources_uart2[] = ;
static struct resource resources_uart3[] = ;
struct platform_device msm_device_uart1 = ;
struct platform_device msm_device_uart2 = ;
struct platform_device msm_device_uart3 = ;
static struct resource resources_i2c[] = ;
struct platform_device msm_device_i2c = ;
static struct resource resources_hsusb[] = ;
struct platform_device msm_device_hsusb = ;
struct flash_platform_data msm_nand_data = ;
static struct resource resources_nand[] = ;
struct platform_device msm_device_nand = ;
struct platform_device msm_device_smd = ;
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
static struct resource resources_mddi0[] = ;
static struct resource resources_mddi1[] = ;
struct platform_device msm_device_mddi0 = ;
struct platform_device msm_device_mddi1 = ;
static struct resource resources_mdp[] = ;
struct platform_device msm_device_mdp = ;
struct clk_lookup msm_clocks_7x01a[] = ;
unsigned msm_num_clocks_7x01a = ARRAY_SIZE(msm_clocks_7x01a);

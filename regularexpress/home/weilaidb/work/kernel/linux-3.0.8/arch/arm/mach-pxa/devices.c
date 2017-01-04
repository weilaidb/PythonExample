void __init pxa_register_device(struct platform_device *dev, void *data)
static struct resource pxa_resource_pmu = ;
struct platform_device pxa_device_pmu = ;
static struct resource pxamci_resources[] = ;
static u64 pxamci_dmamask = 0xffffffffUL;
struct platform_device pxa_device_mci = ;
void __init pxa_set_mci_info(struct pxamci_platform_data *info)
static struct pxa2xx_udc_mach_info pxa_udc_info = ;
void __init pxa_set_udc_info(struct pxa2xx_udc_mach_info *info)
static struct resource pxa2xx_udc_resources[] = ;
static u64 udc_dma_mask = ~(u32)0;
struct platform_device pxa25x_device_udc = ;
struct platform_device pxa27x_device_udc = ;
static struct resource pxa3xx_u2d_resources[] = ;
struct platform_device pxa3xx_device_u2d = ;
void __init pxa3xx_set_u2d_info(struct pxa3xx_u2d_platform_data *info)
static struct resource pxafb_resources[] = ;
static u64 fb_dma_mask = ~(u64)0;
struct platform_device pxa_device_fb = ;
void __init pxa_set_fb_info(struct device *parent, struct pxafb_mach_info *info)
static struct resource pxa_resource_ffuart[] = ;
struct platform_device pxa_device_ffuart = ;
void __init pxa_set_ffuart_info(void *info)
static struct resource pxa_resource_btuart[] = ;
struct platform_device pxa_device_btuart = ;
void __init pxa_set_btuart_info(void *info)
static struct resource pxa_resource_stuart[] = ;
struct platform_device pxa_device_stuart = ;
void __init pxa_set_stuart_info(void *info)
static struct resource pxa_resource_hwuart[] = ;
struct platform_device pxa_device_hwuart = ;
void __init pxa_set_hwuart_info(void *info)
static struct resource pxai2c_resources[] = ;
struct platform_device pxa_device_i2c = ;
void __init pxa_set_i2c_info(struct i2c_pxa_platform_data *info)
static struct resource pxa27x_resources_i2c_power[] = ;
struct platform_device pxa27x_device_i2c_power = ;
static struct resource pxai2s_resources[] = ;
struct platform_device pxa_device_i2s = ;
struct platform_device pxa_device_asoc_ssp1 = ;
struct platform_device pxa_device_asoc_ssp2= ;
struct platform_device pxa_device_asoc_ssp3 = ;
struct platform_device pxa_device_asoc_ssp4 = ;
struct platform_device pxa_device_asoc_platform = ;
static u64 pxaficp_dmamask = ~(u32)0;
struct platform_device pxa_device_ficp = ;
void __init pxa_set_ficp_info(struct pxaficp_platform_data *info)
static struct resource pxa_rtc_resources[] = ;
struct platform_device sa1100_device_rtc = ;
struct platform_device pxa_device_rtc = ;
static struct resource pxa_ac97_resources[] = ;
static u64 pxa_ac97_dmamask = 0xffffffffUL;
struct platform_device pxa_device_ac97 = ;
void __init pxa_set_ac97_info(pxa2xx_audio_ops_t *ops)
static struct resource pxa25x_resource_pwm0[] = ;
struct platform_device pxa25x_device_pwm0 = ;
static struct resource pxa25x_resource_pwm1[] = ;
struct platform_device pxa25x_device_pwm1 = ;
static u64 pxa25x_ssp_dma_mask = DMA_BIT_MASK(32);
static struct resource pxa25x_resource_ssp[] = ;
struct platform_device pxa25x_device_ssp = ;
static u64 pxa25x_nssp_dma_mask = DMA_BIT_MASK(32);
static struct resource pxa25x_resource_nssp[] = ;
struct platform_device pxa25x_device_nssp = ;
static u64 pxa25x_assp_dma_mask = DMA_BIT_MASK(32);
static struct resource pxa25x_resource_assp[] = ;
struct platform_device pxa25x_device_assp = ;
#if defined(CONFIG_PXA27x) || defined(CONFIG_PXA3xx)
static struct resource pxa27x_resource_camera[] = ;
static u64 pxa27x_dma_mask_camera = DMA_BIT_MASK(32);
static struct platform_device pxa27x_device_camera = ;
void __init pxa_set_camera_info(struct pxacamera_platform_data *info)
static u64 pxa27x_ohci_dma_mask = DMA_BIT_MASK(32);
static struct resource pxa27x_resource_ohci[] = ;
struct platform_device pxa27x_device_ohci = ;
void __init pxa_set_ohci_info(struct pxaohci_platform_data *info)
#if defined(CONFIG_PXA27x) || defined(CONFIG_PXA3xx) || defined(CONFIG_PXA95x)
static struct resource pxa27x_resource_keypad[] = ;
struct platform_device pxa27x_device_keypad = ;
void __init pxa_set_keypad_info(struct pxa27x_keypad_platform_data *info)
static u64 pxa27x_ssp1_dma_mask = DMA_BIT_MASK(32);
static struct resource pxa27x_resource_ssp1[] = ;
struct platform_device pxa27x_device_ssp1 = ;
static u64 pxa27x_ssp2_dma_mask = DMA_BIT_MASK(32);
static struct resource pxa27x_resource_ssp2[] = ;
struct platform_device pxa27x_device_ssp2 = ;
static u64 pxa27x_ssp3_dma_mask = DMA_BIT_MASK(32);
static struct resource pxa27x_resource_ssp3[] = ;
struct platform_device pxa27x_device_ssp3 = ;
static struct resource pxa27x_resource_pwm0[] = ;
struct platform_device pxa27x_device_pwm0 = ;
static struct resource pxa27x_resource_pwm1[] = ;
struct platform_device pxa27x_device_pwm1 = ;
static struct resource pxa3xx_resources_mci2[] = ;
struct platform_device pxa3xx_device_mci2 = ;
void __init pxa3xx_set_mci2_info(struct pxamci_platform_data *info)
static struct resource pxa3xx_resources_mci3[] = ;
struct platform_device pxa3xx_device_mci3 = ;
void __init pxa3xx_set_mci3_info(struct pxamci_platform_data *info)
static struct resource pxa3xx_resources_gcu[] = ;
static u64 pxa3xx_gcu_dmamask = DMA_BIT_MASK(32);
struct platform_device pxa3xx_device_gcu = ;
#if defined(CONFIG_PXA3xx) || defined(CONFIG_PXA95x)
static struct resource pxa3xx_resources_i2c_power[] = ;
struct platform_device pxa3xx_device_i2c_power = ;
static struct resource pxa3xx_resources_nand[] = ;
static u64 pxa3xx_nand_dma_mask = DMA_BIT_MASK(32);
struct platform_device pxa3xx_device_nand = ;
void __init pxa3xx_set_nand_info(struct pxa3xx_nand_platform_data *info)
static u64 pxa3xx_ssp4_dma_mask = DMA_BIT_MASK(32);
static struct resource pxa3xx_resource_ssp4[] = ;
struct platform_device pxa3xx_device_ssp4 = ;
void __init pxa2xx_set_spi_info(unsigned id, struct pxa2xx_spi_master *info)

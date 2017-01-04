static struct resource mxc_hsi2c_resources[] = ;
struct platform_device mxc_hsi2c_device = ;
static u64 usb_dma_mask = DMA_BIT_MASK(32);
static struct resource usbotg_resources[] = ;
struct platform_device mxc_usbdr_udc_device = ;
struct platform_device mxc_usbdr_host_device = ;
static struct resource usbh1_resources[] = ;
struct platform_device mxc_usbh1_device = ;
static struct resource usbh2_resources[] = ;
struct platform_device mxc_usbh2_device = ;
static struct mxc_gpio_port mxc_gpio_ports[] = ;
int __init imx51_register_gpios(void)
int __init imx53_register_gpios(void)

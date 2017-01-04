#define DAVINCI_USB_OTG_BASE	0x01c64000
#define DA8XX_USB0_BASE 	0x01e00000
#define DA8XX_USB1_BASE 	0x01e25000
#if defined(CONFIG_USB_MUSB_HDRC) || defined(CONFIG_USB_MUSB_HDRC_MODULE)
static struct musb_hdrc_eps_bits musb_eps[] = ;
static struct musb_hdrc_config musb_config = ;
static struct musb_hdrc_platform_data usb_data = ;
static struct resource usb_resources[] = ;
static u64 usb_dmamask = DMA_BIT_MASK(32);
static struct platform_device usb_dev = ;
void __init davinci_setup_usb(unsigned mA, unsigned potpgt_ms)
static struct resource da8xx_usb20_resources[] = ;
int __init da8xx_register_usb20(unsigned mA, unsigned potpgt)
void __init davinci_setup_usb(unsigned mA, unsigned potpgt_ms)
int __init da8xx_register_usb20(unsigned mA, unsigned potpgt)
static struct resource da8xx_usb11_resources[] = ;
static u64 da8xx_usb11_dma_mask = DMA_BIT_MASK(32);
static struct platform_device da8xx_usb11_device = ;
int __init da8xx_register_usb11(struct da8xx_ohci_root_hub *pdata)

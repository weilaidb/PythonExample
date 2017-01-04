#if defined(CONFIG_USB_EHCI_HCD) || defined(CONFIG_USB_GADGET)
#if defined(CONFIG_USB_EHCI_HCD)
static struct resource msp_usbhost0_resources[] = ;
static u64 msp_usbhost0_dma_mask = 0xffffffffUL;
static struct mspusb_device msp_usbhost0_device = ;
static u64 msp_usbhost1_dma_mask = 0xffffffffUL;
static struct resource msp_usbhost1_resources[] = ;
static struct mspusb_device msp_usbhost1_device = ;
#if defined(CONFIG_USB_GADGET)
static struct resource msp_usbdev0_resources[] = ;
static u64 msp_usbdev_dma_mask = 0xffffffffUL;
static struct mspusb_device msp_usbdev0_device = ;
static struct resource msp_usbdev1_resources[] = ;
static struct mspusb_device msp_usbdev1_device = ;
static int __init msp_usb_setup(void)
subsys_initcall(msp_usb_setup);

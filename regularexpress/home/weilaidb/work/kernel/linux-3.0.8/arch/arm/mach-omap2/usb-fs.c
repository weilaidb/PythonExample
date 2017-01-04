#define INT_USB_IRQ_GEN		INT_24XX_USB_IRQ_GEN
#define INT_USB_IRQ_NISO	INT_24XX_USB_IRQ_NISO
#define INT_USB_IRQ_ISO		INT_24XX_USB_IRQ_ISO
#define INT_USB_IRQ_HGEN	INT_24XX_USB_IRQ_HGEN
#define INT_USB_IRQ_OTG		INT_24XX_USB_IRQ_OTG
#if defined(CONFIG_ARCH_OMAP2)
static struct resource udc_resources[] = ;
static u64 udc_dmamask = ~(u32)0;
static struct platform_device udc_device = ;
static inline void udc_device_init(struct omap_usb_config *pdata)
static inline void udc_device_init(struct omap_usb_config *pdata)
#if	defined(CONFIG_USB_OHCI_HCD) || defined(CONFIG_USB_OHCI_HCD_MODULE)
static u64 ohci_dmamask = ~(u32)0;
static struct resource ohci_resources[] = ;
static struct platform_device ohci_device = ;
static inline void ohci_device_init(struct omap_usb_config *pdata)
static inline void ohci_device_init(struct omap_usb_config *pdata)
#if	defined(CONFIG_USB_OTG) && defined(CONFIG_ARCH_OMAP_OTG)
static struct resource otg_resources[] = ;
static struct platform_device otg_device = ;
static inline void otg_device_init(struct omap_usb_config *pdata)
static inline void otg_device_init(struct omap_usb_config *pdata)
static void omap2_usb_devconf_clear(u8 port, u32 mask)
static void omap2_usb_devconf_set(u8 port, u32 mask)
static void omap2_usb2_disable_5pinbitll(void)
static void omap2_usb2_enable_5pinunitll(void)
static u32 __init omap2_usb0_init(unsigned nwires, unsigned is_device)
static u32 __init omap2_usb1_init(unsigned nwires)
static u32 __init omap2_usb2_init(unsigned nwires, unsigned alt_pingroup)
void __init omap2_usbfs_init(struct omap_usb_config *pdata)

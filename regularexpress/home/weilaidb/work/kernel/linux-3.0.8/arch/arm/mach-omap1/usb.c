#define INT_USB_IRQ_GEN		IH2_BASE + 20
#define INT_USB_IRQ_NISO	IH2_BASE + 30
#define INT_USB_IRQ_ISO		IH2_BASE + 29
#define INT_USB_IRQ_HGEN	INT_USB_HHC_1
#define INT_USB_IRQ_OTG		IH2_BASE + 8
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
u32 __init omap1_usb0_init(unsigned nwires, unsigned is_device)
u32 __init omap1_usb1_init(unsigned nwires)
u32 __init omap1_usb2_init(unsigned nwires, unsigned alt_pingroup)
#define DPLL_IOB		(1 << 13)
#define DPLL_PLL_ENABLE		(1 << 4)
#define DPLL_LOCK		(1 << 0)
#define APLL_NDPLL_SWITCH	(1 << 0)
static void __init omap_1510_usb_init(struct omap_usb_config *config)
static inline void omap_1510_usb_init(struct omap_usb_config *config)
void __init omap1_usb_init(struct omap_usb_config *pdata)

#define USBH_ENABLE_BE (1<<0)
#define USBH_ENABLE_C  (1<<1)
#define USBH_ENABLE_E  (1<<2)
#define USBH_ENABLE_CE (1<<3)
#define USBH_ENABLE_RD (1<<4)
#define USBH_ENABLE_INIT (USBH_ENABLE_CE | USBH_ENABLE_E | USBH_ENABLE_C)
#elif defined(__BIG_ENDIAN)
#define USBH_ENABLE_INIT (USBH_ENABLE_CE | USBH_ENABLE_E | USBH_ENABLE_C | \
USBH_ENABLE_BE)
#error not byte order defined
#define USB_HOST_CONFIG    (USB_MSR_BASE + USB_MSR_MCFG)
#define USB_MCFG_PFEN     (1<<31)
#define USB_MCFG_RDCOMB   (1<<30)
#define USB_MCFG_SSDEN    (1<<23)
#define USB_MCFG_OHCCLKEN (1<<16)
#define USB_MCFG_UCAM     (1<<7)
#define USB_MCFG_UCAM     (0)
#define USB_MCFG_OBMEN    (1<<1)
#define USB_MCFG_OMEMEN   (1<<0)
#define USBH_ENABLE_CE    USB_MCFG_OHCCLKEN
#define USBH_ENABLE_INIT  (USB_MCFG_PFEN  | USB_MCFG_RDCOMB 	|	\
USBH_ENABLE_CE | USB_MCFG_SSDEN	|	\
USB_MCFG_UCAM  |				\
USB_MCFG_OBMEN | USB_MCFG_OMEMEN)
#define USBH_DISABLE      (USB_MCFG_OBMEN | USB_MCFG_OMEMEN)
extern int usb_disabled(void);
static void au1xxx_start_ohc(void)
static void au1xxx_stop_ohc(void)
static int __devinit ohci_au1xxx_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_au1xxx_hc_driver = ;
static int ohci_hcd_au1xxx_drv_probe(struct platform_device *pdev)
static int ohci_hcd_au1xxx_drv_remove(struct platform_device *pdev)
static int ohci_hcd_au1xxx_drv_suspend(struct device *dev)
static int ohci_hcd_au1xxx_drv_resume(struct device *dev)
static const struct dev_pm_ops au1xxx_ohci_pmops = ;
#define AU1XXX_OHCI_PMOPS &au1xxx_ohci_pmops
#define AU1XXX_OHCI_PMOPS NULL
static struct platform_driver ohci_hcd_au1xxx_driver = ;
MODULE_ALIAS("platform:au1xxx-ohci");

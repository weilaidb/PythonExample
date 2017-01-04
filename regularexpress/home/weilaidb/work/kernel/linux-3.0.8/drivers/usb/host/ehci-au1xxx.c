#define USB_HOST_CONFIG   (USB_MSR_BASE + USB_MSR_MCFG)
#define USB_MCFG_PFEN     (1<<31)
#define USB_MCFG_RDCOMB   (1<<30)
#define USB_MCFG_SSDEN    (1<<23)
#define USB_MCFG_PHYPLLEN (1<<19)
#define USB_MCFG_UCECLKEN (1<<18)
#define USB_MCFG_EHCCLKEN (1<<17)
#define USB_MCFG_UCAM     (1<<7)
#define USB_MCFG_UCAM     (0)
#define USB_MCFG_EBMEN    (1<<3)
#define USB_MCFG_EMEMEN   (1<<2)
#define USBH_ENABLE_CE	(USB_MCFG_PHYPLLEN | USB_MCFG_EHCCLKEN)
#define USBH_ENABLE_INIT (USB_MCFG_PFEN  | USB_MCFG_RDCOMB |	\
USBH_ENABLE_CE | USB_MCFG_SSDEN  |	\
USB_MCFG_UCAM  | USB_MCFG_EBMEN  |	\
USB_MCFG_EMEMEN)
#define USBH_DISABLE      (USB_MCFG_EBMEN | USB_MCFG_EMEMEN)
extern int usb_disabled(void);
static void au1xxx_start_ehc(void)
static void au1xxx_stop_ehc(void)
static int au1xxx_ehci_setup(struct usb_hcd *hcd)
static const struct hc_driver ehci_au1xxx_hc_driver = ;
static int ehci_hcd_au1xxx_drv_probe(struct platform_device *pdev)
static int ehci_hcd_au1xxx_drv_remove(struct platform_device *pdev)
static int ehci_hcd_au1xxx_drv_suspend(struct device *dev)
static int ehci_hcd_au1xxx_drv_resume(struct device *dev)
static const struct dev_pm_ops au1xxx_ehci_pmops = ;
#define AU1XXX_EHCI_PMOPS &au1xxx_ehci_pmops
#define AU1XXX_EHCI_PMOPS NULL
static struct platform_driver ehci_hcd_au1xxx_driver = ;
MODULE_ALIAS("platform:au1xxx-ehci");

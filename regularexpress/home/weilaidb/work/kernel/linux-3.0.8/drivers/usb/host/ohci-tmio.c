#define CCR_REVID	0x08
#define CCR_BASE	0x10
#define CCR_ILME	0x40
#define CCR_PM		0x4c
#define CCR_INTC	0x50
#define CCR_LMW1L	0x54
#define CCR_LMW1H	0x56
#define CCR_LMW1BL	0x58
#define CCR_LMW1BH	0x5A
#define CCR_LMW2L	0x5C
#define CCR_LMW2H	0x5E
#define CCR_LMW2BL	0x60
#define CCR_LMW2BH	0x62
#define CCR_MISC	0xFC
#define CCR_PM_GKEN      0x0001
#define CCR_PM_CKRNEN    0x0002
#define CCR_PM_USBPW1    0x0004
#define CCR_PM_USBPW2    0x0008
#define CCR_PM_USBPW3    0x0008
#define CCR_PM_PMEE      0x0100
#define CCR_PM_PMES      0x8000
struct tmio_hcd ;
#define hcd_to_tmio(hcd)	((struct tmio_hcd *)(hcd_to_ohci(hcd) + 1))
static void tmio_write_pm(struct platform_device *dev)
static void tmio_stop_hc(struct platform_device *dev)
static void tmio_start_hc(struct platform_device *dev)
static int ohci_tmio_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_tmio_hc_driver = ;
static struct platform_driver ohci_hcd_tmio_driver;
static int __devinit ohci_hcd_tmio_drv_probe(struct platform_device *dev)
static int __devexit ohci_hcd_tmio_drv_remove(struct platform_device *dev)
static int ohci_hcd_tmio_drv_suspend(struct platform_device *dev, pm_message_t state)
static int ohci_hcd_tmio_drv_resume(struct platform_device *dev)
#define ohci_hcd_tmio_drv_suspend NULL
#define ohci_hcd_tmio_drv_resume NULL
static struct platform_driver ohci_hcd_tmio_driver = ;

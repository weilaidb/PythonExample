#define MSM_USB_BASE (hcd->regs)
static struct otg_transceiver *otg;
static int ehci_msm_reset(struct usb_hcd *hcd)
static struct hc_driver msm_hc_driver = ;
static int ehci_msm_probe(struct platform_device *pdev)
static int __devexit ehci_msm_remove(struct platform_device *pdev)
static int ehci_msm_pm_suspend(struct device *dev)
static int ehci_msm_pm_resume(struct device *dev)
#define ehci_msm_pm_suspend	NULL
#define ehci_msm_pm_resume	NULL
static const struct dev_pm_ops ehci_msm_dev_pm_ops = ;
static struct platform_driver ehci_msm_driver = ;

static int usb_hcd_fsl_probe(const struct hc_driver *driver,
struct platform_device *pdev)
static void usb_hcd_fsl_remove(struct usb_hcd *hcd,
struct platform_device *pdev)
static void ehci_fsl_setup_phy(struct ehci_hcd *ehci,
enum fsl_usb2_phy_modes phy_mode,
unsigned int port_offset)
static void ehci_fsl_usb_setup(struct ehci_hcd *ehci)
static int ehci_fsl_reinit(struct ehci_hcd *ehci)
static int ehci_fsl_setup(struct usb_hcd *hcd)
struct ehci_fsl ;
static int ehci_fsl_mpc512x_drv_suspend(struct device *dev)
static int ehci_fsl_mpc512x_drv_resume(struct device *dev)
static inline int ehci_fsl_mpc512x_drv_suspend(struct device *dev)
static inline int ehci_fsl_mpc512x_drv_resume(struct device *dev)
static struct ehci_fsl *hcd_to_ehci_fsl(struct usb_hcd *hcd)
static int ehci_fsl_drv_suspend(struct device *dev)
static int ehci_fsl_drv_resume(struct device *dev)
static int ehci_fsl_drv_restore(struct device *dev)
static struct dev_pm_ops ehci_fsl_pm_ops = ;
#define EHCI_FSL_PM_OPS		(&ehci_fsl_pm_ops)
#define EHCI_FSL_PM_OPS		NULL
static int ehci_start_port_reset(struct usb_hcd *hcd, unsigned port)
#define ehci_start_port_reset	NULL
static const struct hc_driver ehci_fsl_hc_driver = ;
static int ehci_fsl_drv_probe(struct platform_device *pdev)
static int ehci_fsl_drv_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:fsl-ehci");
static struct platform_driver ehci_fsl_driver = ;

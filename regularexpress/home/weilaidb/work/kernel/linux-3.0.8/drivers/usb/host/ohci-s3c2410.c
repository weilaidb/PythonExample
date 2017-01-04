#define valid_port(idx) ((idx) == 1 || (idx) == 2)
static struct clk *clk;
static struct clk *usb_clk;
static void s3c2410_hcd_oc(struct s3c2410_hcd_info *info, int port_oc);
static struct s3c2410_hcd_info *to_s3c2410_info(struct usb_hcd *hcd)
static void s3c2410_start_hc(struct platform_device *dev, struct usb_hcd *hcd)
static void s3c2410_stop_hc(struct platform_device *dev)
static int
ohci_s3c2410_hub_status_data(struct usb_hcd *hcd, char *buf)
static void s3c2410_usb_set_power(struct s3c2410_hcd_info *info,
int port, int to)
static int ohci_s3c2410_hub_control(
struct usb_hcd	*hcd,
u16		typeReq,
u16		wValue,
u16		wIndex,
char		*buf,
u16		wLength)
static void s3c2410_hcd_oc(struct s3c2410_hcd_info *info, int port_oc)
static void
usb_hcd_s3c2410_remove(struct usb_hcd *hcd, struct platform_device *dev)
static int usb_hcd_s3c2410_probe(const struct hc_driver *driver,
struct platform_device *dev)
static int
ohci_s3c2410_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_s3c2410_hc_driver = ;
static int __devinit ohci_hcd_s3c2410_drv_probe(struct platform_device *pdev)
static int __devexit ohci_hcd_s3c2410_drv_remove(struct platform_device *pdev)
static struct platform_driver ohci_hcd_s3c2410_driver = ;
MODULE_ALIAS("platform:s3c2410-ohci");

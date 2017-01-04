#error "This file is SA-1111 bus glue.  CONFIG_SA1111 must be defined."
extern int usb_disabled(void);
static void sa1111_start_hc(struct sa1111_dev *dev)
static void sa1111_stop_hc(struct sa1111_dev *dev)
int usb_hcd_sa1111_probe (const struct hc_driver *driver,
struct sa1111_dev *dev)
void usb_hcd_sa1111_remove (struct usb_hcd *hcd, struct sa1111_dev *dev)
static int __devinit
ohci_sa1111_start (struct usb_hcd *hcd)
static const struct hc_driver ohci_sa1111_hc_driver = ;
static int ohci_hcd_sa1111_drv_probe(struct sa1111_dev *dev)
static int ohci_hcd_sa1111_drv_remove(struct sa1111_dev *dev)
static struct sa1111_driver ohci_hcd_sa1111_driver = ;

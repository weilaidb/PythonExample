#define SSB_OHCI_TMSLOW_HOSTMODE	(1 << 29)
struct ssb_ohci_device ;
static inline
struct ssb_ohci_device *hcd_to_ssb_ohci(struct usb_hcd *hcd)
static int ssb_ohci_reset(struct usb_hcd *hcd)
static int ssb_ohci_start(struct usb_hcd *hcd)
static const struct hc_driver ssb_ohci_hc_driver = ;
static void ssb_ohci_detach(struct ssb_device *dev)
static int ssb_ohci_attach(struct ssb_device *dev)
static int ssb_ohci_probe(struct ssb_device *dev,
const struct ssb_device_id *id)
static void ssb_ohci_remove(struct ssb_device *dev)
static int ssb_ohci_suspend(struct ssb_device *dev, pm_message_t state)
static int ssb_ohci_resume(struct ssb_device *dev)
#define ssb_ohci_suspend	NULL
#define ssb_ohci_resume	NULL
static const struct ssb_device_id ssb_ohci_table[] = ;
MODULE_DEVICE_TABLE(ssb, ssb_ohci_table);
static struct ssb_driver ssb_ohci_driver = ;

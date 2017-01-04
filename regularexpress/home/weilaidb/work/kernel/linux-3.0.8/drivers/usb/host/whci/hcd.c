static int whc_reset(struct usb_hcd *usb_hcd)
static int whc_start(struct usb_hcd *usb_hcd)
static void whc_stop(struct usb_hcd *usb_hcd)
static int whc_get_frame_number(struct usb_hcd *usb_hcd)
static int whc_urb_enqueue(struct usb_hcd *usb_hcd, struct urb *urb,
gfp_t mem_flags)
static int whc_urb_dequeue(struct usb_hcd *usb_hcd, struct urb *urb, int status)
static void whc_endpoint_disable(struct usb_hcd *usb_hcd,
struct usb_host_endpoint *ep)
static void whc_endpoint_reset(struct usb_hcd *usb_hcd,
struct usb_host_endpoint *ep)
static struct hc_driver whc_hc_driver = ;
static int whc_probe(struct umc_dev *umc)
static void whc_remove(struct umc_dev *umc)
static struct umc_driver whci_hc_driver = ;
static int __init whci_hc_driver_init(void)
module_init(whci_hc_driver_init);
static void __exit whci_hc_driver_exit(void)
module_exit(whci_hc_driver_exit);
static struct pci_device_id __used whci_hcd_id_table[] = ;
MODULE_DEVICE_TABLE(pci, whci_hcd_id_table);
MODULE_DESCRIPTION("WHCI Wireless USB host controller driver");
MODULE_AUTHOR("Cambridge Silicon Radio Ltd.");
MODULE_LICENSE("GPL");

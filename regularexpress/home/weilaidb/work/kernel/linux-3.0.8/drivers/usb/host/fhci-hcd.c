void fhci_start_sof_timer(struct fhci_hcd *fhci)
void fhci_stop_sof_timer(struct fhci_hcd *fhci)
u16 fhci_get_sof_timer_count(struct fhci_usb *usb)
static u32 endpoint_zero_init(struct fhci_usb *usb,
enum fhci_mem_alloc data_mem,
u32 ring_len)
void fhci_usb_enable_interrupt(struct fhci_usb *usb)
void fhci_usb_disable_interrupt(struct fhci_usb *usb)
static u32 fhci_usb_enable(struct fhci_hcd *fhci)
static u32 fhci_usb_disable(struct fhci_hcd *fhci)
int fhci_ioports_check_bus_state(struct fhci_hcd *fhci)
static void fhci_mem_free(struct fhci_hcd *fhci)
static int fhci_mem_init(struct fhci_hcd *fhci)
static void fhci_usb_free(void *lld)
static int fhci_usb_init(struct fhci_hcd *fhci)
static struct fhci_usb *fhci_create_lld(struct fhci_hcd *fhci)
static int fhci_start(struct usb_hcd *hcd)
static void fhci_stop(struct usb_hcd *hcd)
static int fhci_urb_enqueue(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
static int fhci_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void fhci_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *ep)
static int fhci_get_frame_number(struct usb_hcd *hcd)
static const struct hc_driver fhci_driver = ;
static int __devinit of_fhci_probe(struct platform_device *ofdev)
static int __devexit fhci_remove(struct device *dev)
static int __devexit of_fhci_remove(struct platform_device *ofdev)
static const struct of_device_id of_fhci_match[] = ;
MODULE_DEVICE_TABLE(of, of_fhci_match);
static struct platform_driver of_fhci_driver = ;
static int __init fhci_module_init(void)
module_init(fhci_module_init);
static void __exit fhci_module_exit(void)
module_exit(fhci_module_exit);
MODULE_DESCRIPTION("USB Freescale Host Controller Interface Driver");
MODULE_AUTHOR("Shlomi Gridish <gridish@freescale.com>, "
"Jerry Huang <Chang-Ming.Huang@freescale.com>, "
"Anton Vorontsov <avorontsov@ru.mvista.com>");
MODULE_LICENSE("GPL");

#define DRIVER_AUTHOR							\
"Linus 'Frodo Rabbit' Torvalds, Johannes Erdfelt, "		\
"Randy Dunlap, Georg Acher, Deti Fliegl, Thomas Sailer, "	\
"Roman Weissgaerber, Alan Stern"
#define DRIVER_DESC "USB Universal Host Controller Interface driver"
static int ignore_oc;
module_param(ignore_oc, bool, S_IRUGO);
MODULE_PARM_DESC(ignore_oc, "ignore hardware overcurrent indications");
#define DEBUG_CONFIGURED	1
static int debug = 1;
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debug level");
#define DEBUG_CONFIGURED	0
#define debug			0
static char *errbuf;
#define ERRBUF_LEN    (32 * 1024)
static struct kmem_cache *uhci_up_cachep;
static void suspend_rh(struct uhci_hcd *uhci, enum uhci_rh_state new_state);
static void wakeup_rh(struct uhci_hcd *uhci);
static void uhci_get_current_frame_number(struct uhci_hcd *uhci);
static __hc32 uhci_frame_skel_link(struct uhci_hcd *uhci, int frame)
static void finish_reset(struct uhci_hcd *uhci)
static void uhci_hc_died(struct uhci_hcd *uhci)
static void check_and_reset_hc(struct uhci_hcd *uhci)
#if defined(CONFIG_USB_UHCI_SUPPORT_NON_PCI_HC)
static void uhci_generic_reset_hc(struct uhci_hcd *uhci)
static int uhci_generic_check_and_reset_hc(struct uhci_hcd *uhci)
static void configure_hc(struct uhci_hcd *uhci)
static int resume_detect_interrupts_are_broken(struct uhci_hcd *uhci)
static int global_suspend_mode_is_broken(struct uhci_hcd *uhci)
static void suspend_rh(struct uhci_hcd *uhci, enum uhci_rh_state new_state)
__releases(uhci->lock)
__acquires(uhci->lock)
static void start_rh(struct uhci_hcd *uhci)
static void wakeup_rh(struct uhci_hcd *uhci)
__releases(uhci->lock)
__acquires(uhci->lock)
static irqreturn_t uhci_irq(struct usb_hcd *hcd)
static void uhci_get_current_frame_number(struct uhci_hcd *uhci)
static void release_uhci(struct uhci_hcd *uhci)
static int uhci_start(struct usb_hcd *hcd)
static void uhci_stop(struct usb_hcd *hcd)
static int uhci_rh_suspend(struct usb_hcd *hcd)
static int uhci_rh_resume(struct usb_hcd *hcd)
static void uhci_hcd_endpoint_disable(struct usb_hcd *hcd,
struct usb_host_endpoint *hep)
static int uhci_hcd_get_frame_number(struct usb_hcd *hcd)
static int uhci_count_ports(struct usb_hcd *hcd)
static const char hcd_name[] = "uhci_hcd";
#define	PCI_DRIVER		uhci_pci_driver
#define PLATFORM_DRIVER		uhci_grlib_driver
#if !defined(PCI_DRIVER) && !defined(PLATFORM_DRIVER)
#error "missing bus glue for uhci-hcd"
static int __init uhci_hcd_init(void)
static void __exit uhci_hcd_cleanup(void)
module_init(uhci_hcd_init);
module_exit(uhci_hcd_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");

#define DRIVER_DESC	"USB Host+Gadget Emulator"
#define DRIVER_VERSION	"02 May 2005"
#define POWER_BUDGET	500
static const char	driver_name [] = "dummy_hcd";
static const char	driver_desc [] = "USB Host+Gadget Emulator";
static const char	gadget_name [] = "dummy_udc";
MODULE_DESCRIPTION (DRIVER_DESC);
MODULE_AUTHOR ("David Brownell");
MODULE_LICENSE ("GPL");
struct dummy_ep ;
struct dummy_request ;
static inline struct dummy_ep *usb_ep_to_dummy_ep (struct usb_ep *_ep)
static inline struct dummy_request *usb_request_to_dummy_request
(struct usb_request *_req)
static const char ep0name [] = "ep0";
static const char *const ep_name [] = ;
#define DUMMY_ENDPOINTS	ARRAY_SIZE(ep_name)
#define FIFO_SIZE		64
struct urbp ;
enum dummy_rh_state ;
struct dummy ;
static inline struct dummy *hcd_to_dummy (struct usb_hcd *hcd)
static inline struct usb_hcd *dummy_to_hcd (struct dummy *dum)
static inline struct device *dummy_dev (struct dummy *dum)
static inline struct device *udc_dev (struct dummy *dum)
static inline struct dummy *ep_to_dummy (struct dummy_ep *ep)
static inline struct dummy *gadget_to_dummy (struct usb_gadget *gadget)
static inline struct dummy *gadget_dev_to_dummy (struct device *dev)
static struct dummy			*the_controller;
static void nuke (struct dummy *dum, struct dummy_ep *ep)
static void
stop_activity (struct dummy *dum)
static void
set_link_state (struct dummy *dum)
#define is_enabled(dum) \
(dum->port_status & USB_PORT_STAT_ENABLE)
static int
dummy_enable (struct usb_ep *_ep, const struct usb_endpoint_descriptor *desc)
static int dummy_disable (struct usb_ep *_ep)
static struct usb_request *
dummy_alloc_request (struct usb_ep *_ep, gfp_t mem_flags)
static void
dummy_free_request (struct usb_ep *_ep, struct usb_request *_req)
static void
fifo_complete (struct usb_ep *ep, struct usb_request *req)
static int
dummy_queue (struct usb_ep *_ep, struct usb_request *_req,
gfp_t mem_flags)
static int dummy_dequeue (struct usb_ep *_ep, struct usb_request *_req)
static int
dummy_set_halt_and_wedge(struct usb_ep *_ep, int value, int wedged)
static int
dummy_set_halt(struct usb_ep *_ep, int value)
static int dummy_set_wedge(struct usb_ep *_ep)
static const struct usb_ep_ops dummy_ep_ops = ;
static int dummy_g_get_frame (struct usb_gadget *_gadget)
static int dummy_wakeup (struct usb_gadget *_gadget)
static int dummy_set_selfpowered (struct usb_gadget *_gadget, int value)
static int dummy_pullup (struct usb_gadget *_gadget, int value)
static const struct usb_gadget_ops dummy_ops = ;
static ssize_t
show_function (struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR (function, S_IRUGO, show_function, NULL);
int
usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int
usb_gadget_unregister_driver (struct usb_gadget_driver *driver)
EXPORT_SYMBOL (usb_gadget_unregister_driver);
#undef is_enabled
extern int net2280_set_fifo_mode (struct usb_gadget *gadget, int mode);
int net2280_set_fifo_mode (struct usb_gadget *gadget, int mode)
EXPORT_SYMBOL (net2280_set_fifo_mode);
static void
dummy_gadget_release (struct device *dev)
static int dummy_udc_probe (struct platform_device *pdev)
static int dummy_udc_remove (struct platform_device *pdev)
static int dummy_udc_suspend (struct platform_device *pdev, pm_message_t state)
static int dummy_udc_resume (struct platform_device *pdev)
static struct platform_driver dummy_udc_driver = ;
static int dummy_urb_enqueue (
struct usb_hcd			*hcd,
struct urb			*urb,
gfp_t				mem_flags
)
static int dummy_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static int
transfer(struct dummy *dum, struct urb *urb, struct dummy_ep *ep, int limit,
int *status)
static int periodic_bytes (struct dummy *dum, struct dummy_ep *ep)
#define is_active(dum)	((dum->port_status & \
(USB_PORT_STAT_CONNECTION | USB_PORT_STAT_ENABLE | \
USB_PORT_STAT_SUSPEND)) \
== (USB_PORT_STAT_CONNECTION | USB_PORT_STAT_ENABLE))
static struct dummy_ep *find_endpoint (struct dummy *dum, u8 address)
#undef is_active
#define Dev_Request	(USB_TYPE_STANDARD | USB_RECIP_DEVICE)
#define Dev_InRequest	(Dev_Request | USB_DIR_IN)
#define Intf_Request	(USB_TYPE_STANDARD | USB_RECIP_INTERFACE)
#define Intf_InRequest	(Intf_Request | USB_DIR_IN)
#define Ep_Request	(USB_TYPE_STANDARD | USB_RECIP_ENDPOINT)
#define Ep_InRequest	(Ep_Request | USB_DIR_IN)
static int handle_control_request(struct dummy *dum, struct urb *urb,
struct usb_ctrlrequest *setup,
int *status)
static void dummy_timer (unsigned long _dum)
#define PORT_C_MASK \
((USB_PORT_STAT_C_CONNECTION \
| USB_PORT_STAT_C_ENABLE \
| USB_PORT_STAT_C_SUSPEND \
| USB_PORT_STAT_C_OVERCURRENT \
| USB_PORT_STAT_C_RESET) << 16)
static int dummy_hub_status (struct usb_hcd *hcd, char *buf)
static inline void
hub_descriptor (struct usb_hub_descriptor *desc)
static int dummy_hub_control (
struct usb_hcd	*hcd,
u16		typeReq,
u16		wValue,
u16		wIndex,
char		*buf,
u16		wLength
)
static int dummy_bus_suspend (struct usb_hcd *hcd)
static int dummy_bus_resume (struct usb_hcd *hcd)
static inline ssize_t
show_urb (char *buf, size_t size, struct urb *urb)
static ssize_t
show_urbs (struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR (urbs, S_IRUGO, show_urbs, NULL);
static int dummy_start (struct usb_hcd *hcd)
static void dummy_stop (struct usb_hcd *hcd)
static int dummy_h_get_frame (struct usb_hcd *hcd)
static const struct hc_driver dummy_hcd = ;
static int dummy_hcd_probe(struct platform_device *pdev)
static int dummy_hcd_remove (struct platform_device *pdev)
static int dummy_hcd_suspend (struct platform_device *pdev, pm_message_t state)
static int dummy_hcd_resume (struct platform_device *pdev)
static struct platform_driver dummy_hcd_driver = ;
static struct platform_device *the_udc_pdev;
static struct platform_device *the_hcd_pdev;
static int __init init (void)
module_init (init);
static void __exit cleanup (void)
module_exit (cleanup);

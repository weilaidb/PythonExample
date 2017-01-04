#define	CY_AS_DRIVER_DESC		"cypress west bridge usb gadget"
#define	CY_AS_DRIVER_VERSION		"REV B"
#define	DMA_ADDR_INVALID			(~(dma_addr_t)0)
static const char cy_as_driver_name[] = "cy_astoria_gadget";
static const char cy_as_driver_desc[] = CY_AS_DRIVER_DESC;
static const char cy_as_ep0name[] = "EP0";
static const char *cy_as_ep_names[] = ;
static void
cyas_ep_reset(
struct cyasgadget_ep *an_ep);
static int
cyasgadget_fifo_status(
struct usb_ep *_ep);
static void
cyasgadget_stallcallback(
cy_as_device_handle h,
cy_as_return_status_t status,
uint32_t tag,
cy_as_funct_c_b_type cbtype,
void *cbdata);
static cyasgadget	*cy_as_gadget_controller;
static int append_mtp;
module_param(append_mtp, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(append_mtp,
"west bridge to append descriptors for mtp 0=no 1=yes");
static int msc_enum_bus_0;
module_param(msc_enum_bus_0, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(msc_enum_bus_0,
"west bridge to enumerate bus 0 as msc 0=no 1=yes");
static int msc_enum_bus_1;
module_param(msc_enum_bus_1, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(msc_enum_bus_1,
"west bridge to enumerate bus 1 as msc 0=no 1=yes");
static void cy_as_gadget_usb_event_callback(
cy_as_device_handle h,
cy_as_usb_event ev,
void *evdata
)
static void cy_as_gadget_mtp_event_callback(
cy_as_device_handle handle,
cy_as_mtp_event evtype,
void *evdata
)
static void
cyasgadget_setupreadcallback(
cy_as_device_handle h,
cy_as_end_point_number_t ep,
uint32_t count,
void *buf,
cy_as_return_status_t status)
static void cyasgadget_setupwritecallback(
cy_as_device_handle h,
cy_as_end_point_number_t ep,
uint32_t count,
void *buf,
cy_as_return_status_t status
)
static void cyasgadget_readcallback(
cy_as_device_handle h,
cy_as_end_point_number_t ep,
uint32_t count,
void *buf,
cy_as_return_status_t status
)
static void cyasgadget_writecallback(
cy_as_device_handle h,
cy_as_end_point_number_t ep,
uint32_t count,
void *buf,
cy_as_return_status_t status
)
static void cyasgadget_stallcallback(
cy_as_device_handle h,
cy_as_return_status_t status,
uint32_t tag,
cy_as_funct_c_b_type cbtype,
void *cbdata
)
static int cyasgadget_enable(
struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc
)
static int cyasgadget_disable(
struct usb_ep *_ep
)
static struct usb_request *cyasgadget_alloc_request(
struct usb_ep *_ep, gfp_t gfp_flags
)
static void cyasgadget_free_request(
struct usb_ep *_ep,
struct usb_request *_req
)
static int cyasgadget_queue(
struct usb_ep *_ep,
struct usb_request *_req,
gfp_t gfp_flags
)
static int cyasgadget_dequeue(
struct usb_ep *_ep,
struct usb_request *_req
)
static int cyasgadget_set_halt(
struct usb_ep *_ep,
int value
)
static int cyasgadget_fifo_status(
struct usb_ep *_ep
)
static void cyasgadget_fifo_flush(
struct usb_ep *_ep
)
static struct usb_ep_ops cyasgadget_ep_ops = ;
static int cyasgadget_get_frame(
struct usb_gadget *_gadget
)
static int cyasgadget_wakeup(
struct usb_gadget *_gadget
)
static int cyasgadget_set_selfpowered(
struct usb_gadget *_gadget,
int value
)
static int cyasgadget_pullup(
struct usb_gadget *_gadget,
int is_on
)
static int cyasgadget_ioctl(
struct usb_gadget *_gadget,
unsigned code,
unsigned long param
)
static const struct usb_gadget_ops cyasgadget_ops = ;
static void cyas_ep_reset(
cyasgadget_ep *an_ep
)
static void cyas_usb_reset(
cyasgadget *cy_as_dev
)
static void cyas_usb_reinit(
cyasgadget *cy_as_dev
)
static void cyas_ep0_start(
cyasgadget *dev
)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
static void cyasgadget_nuke(
cyasgadget_ep *an_ep
)
static void cyasgadget_stop_activity(
cyasgadget *dev,
struct usb_gadget_driver *driver
)
int usb_gadget_unregister_driver(
struct usb_gadget_driver *driver
)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static void cyas_gadget_release(
struct device *_dev
)
static void cyasgadget_deinit(
cyasgadget *cy_as_dev
)
static int cyasgadget_initialize(void)
static int __init cyas_init(void)
module_init(cyas_init);
static void __exit cyas_cleanup(void)
module_exit(cyas_cleanup);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(CY_AS_DRIVER_DESC);
MODULE_AUTHOR("cypress semiconductor");

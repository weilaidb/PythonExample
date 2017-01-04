#define DRIVER_DESC		"Marvell PXA USB Device Controller driver"
#define DRIVER_VERSION		"8 Nov 2010"
#define ep_dir(ep)	(((ep)->ep_num == 0) ? \
((ep)->udc->ep0_dir) : ((ep)->direction))
#define RESET_TIMEOUT		10000
#define FLUSH_TIMEOUT		10000
#define EPSTATUS_TIMEOUT	10000
#define PRIME_TIMEOUT		10000
#define READSAFE_TIMEOUT	1000
#define DTD_TIMEOUT		1000
#define LOOPS_USEC_SHIFT	4
#define LOOPS_USEC		(1 << LOOPS_USEC_SHIFT)
#define LOOPS(timeout)		((timeout) >> LOOPS_USEC_SHIFT)
static const char driver_name[] = "mv_udc";
static const char driver_desc[] = DRIVER_DESC;
static struct mv_udc	*the_controller;
int mv_usb_otgsc;
static void nuke(struct mv_ep *ep, int status);
static const struct usb_endpoint_descriptor mv_ep0_desc = ;
static void ep0_reset(struct mv_udc *udc)
static void ep0_stall(struct mv_udc *udc)
static int process_ep_req(struct mv_udc *udc, int index,
struct mv_req *curr_req)
static void done(struct mv_ep *ep, struct mv_req *req, int status)
static int queue_dtd(struct mv_ep *ep, struct mv_req *req)
static struct mv_dtd *build_dtd(struct mv_req *req, unsigned *length,
dma_addr_t *dma, int *is_last)
static int req_to_dtd(struct mv_req *req)
static int mv_ep_enable(struct usb_ep *_ep,
const struct usb_endpoint_descriptor *desc)
static int  mv_ep_disable(struct usb_ep *_ep)
static struct usb_request *
mv_alloc_request(struct usb_ep *_ep, gfp_t gfp_flags)
static void mv_free_request(struct usb_ep *_ep, struct usb_request *_req)
static void mv_ep_fifo_flush(struct usb_ep *_ep)
static int
mv_ep_queue(struct usb_ep *_ep, struct usb_request *_req, gfp_t gfp_flags)
static int mv_ep_dequeue(struct usb_ep *_ep, struct usb_request *_req)
static void ep_set_stall(struct mv_udc *udc, u8 ep_num, u8 direction, int stall)
static int ep_is_stall(struct mv_udc *udc, u8 ep_num, u8 direction)
static int mv_ep_set_halt_wedge(struct usb_ep *_ep, int halt, int wedge)
static int mv_ep_set_halt(struct usb_ep *_ep, int halt)
static int mv_ep_set_wedge(struct usb_ep *_ep)
static struct usb_ep_ops mv_ep_ops = ;
static void udc_stop(struct mv_udc *udc)
static void udc_start(struct mv_udc *udc)
static int udc_reset(struct mv_udc *udc)
static int mv_udc_get_frame(struct usb_gadget *gadget)
static int mv_udc_wakeup(struct usb_gadget *gadget)
static int mv_udc_pullup(struct usb_gadget *gadget, int is_on)
static const struct usb_gadget_ops mv_ops = ;
static void mv_udc_testmode(struct mv_udc *udc, u16 index, bool enter)
static int eps_init(struct mv_udc *udc)
static void nuke(struct mv_ep *ep, int status)
static void stop_activity(struct mv_udc *udc, struct usb_gadget_driver *driver)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static int
udc_prime_status(struct mv_udc *udc, u8 direction, u16 status, bool empty)
static void ch9setaddress(struct mv_udc *udc, struct usb_ctrlrequest *setup)
static void ch9getstatus(struct mv_udc *udc, u8 ep_num,
struct usb_ctrlrequest *setup)
static void ch9clearfeature(struct mv_udc *udc, struct usb_ctrlrequest *setup)
static void ch9setfeature(struct mv_udc *udc, struct usb_ctrlrequest *setup)
static void handle_setup_packet(struct mv_udc *udc, u8 ep_num,
struct usb_ctrlrequest *setup)
static void ep0_req_complete(struct mv_udc *udc,
struct mv_ep *ep0, struct mv_req *req)
static void get_setup_data(struct mv_udc *udc, u8 ep_num, u8 *buffer_ptr)
static void irq_process_tr_complete(struct mv_udc *udc)
void irq_process_reset(struct mv_udc *udc)
static void handle_bus_resume(struct mv_udc *udc)
static void irq_process_suspend(struct mv_udc *udc)
static void irq_process_port_change(struct mv_udc *udc)
static void irq_process_error(struct mv_udc *udc)
static irqreturn_t mv_udc_irq(int irq, void *dev)
static void gadget_release(struct device *_dev)
static int mv_udc_remove(struct platform_device *dev)
int mv_udc_probe(struct platform_device *dev)
static int mv_udc_suspend(struct device *_dev)
static int mv_udc_resume(struct device *_dev)
static const struct dev_pm_ops mv_udc_pm_ops = ;
static struct platform_driver udc_driver = ;
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Chao Xie <chao.xie@marvell.com>");
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
static int __init init(void)
module_init(init);
static void __exit cleanup(void)
module_exit(cleanup);

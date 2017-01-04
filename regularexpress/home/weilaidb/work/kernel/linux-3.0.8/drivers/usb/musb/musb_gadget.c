#define is_buffer_mapped(req) (is_dma_capable() && \
(req->map_state != UN_MAPPED))
static inline void map_dma_buffer(struct musb_request *request,
struct musb *musb, struct musb_ep *musb_ep)
static inline void unmap_dma_buffer(struct musb_request *request,
struct musb *musb)
void musb_g_giveback(
struct musb_ep		*ep,
struct usb_request	*request,
int			status)
__releases(ep->musb->lock)
__acquires(ep->musb->lock)
static void nuke(struct musb_ep *ep, const int status)
static inline int max_ep_writesize(struct musb *musb, struct musb_ep *ep)
static void txstate(struct musb *musb, struct musb_request *req)
void musb_g_tx(struct musb *musb, u8 epnum)
static void rxstate(struct musb *musb, struct musb_request *req)
void musb_g_rx(struct musb *musb, u8 epnum)
static int musb_gadget_enable(struct usb_ep *ep,
const struct usb_endpoint_descriptor *desc)
static int musb_gadget_disable(struct usb_ep *ep)
struct usb_request *musb_alloc_request(struct usb_ep *ep, gfp_t gfp_flags)
void musb_free_request(struct usb_ep *ep, struct usb_request *req)
static LIST_HEAD(buffers);
struct free_record ;
void musb_ep_restart(struct musb *musb, struct musb_request *req)
static int musb_gadget_queue(struct usb_ep *ep, struct usb_request *req,
gfp_t gfp_flags)
static int musb_gadget_dequeue(struct usb_ep *ep, struct usb_request *request)
static int musb_gadget_set_halt(struct usb_ep *ep, int value)
static int musb_gadget_set_wedge(struct usb_ep *ep)
static int musb_gadget_fifo_status(struct usb_ep *ep)
static void musb_gadget_fifo_flush(struct usb_ep *ep)
static const struct usb_ep_ops musb_ep_ops = ;
static int musb_gadget_get_frame(struct usb_gadget *gadget)
static int musb_gadget_wakeup(struct usb_gadget *gadget)
static int
musb_gadget_set_self_powered(struct usb_gadget *gadget, int is_selfpowered)
static void musb_pullup(struct musb *musb, int is_on)
static int musb_gadget_vbus_draw(struct usb_gadget *gadget, unsigned mA)
static int musb_gadget_pullup(struct usb_gadget *gadget, int is_on)
static const struct usb_gadget_ops musb_gadget_operations = ;
static struct musb *the_gadget;
static void musb_gadget_release(struct device *dev)
static void __init
init_peripheral_ep(struct musb *musb, struct musb_ep *ep, u8 epnum, int is_in)
static inline void __init musb_g_init_endpoints(struct musb *musb)
int __init musb_gadget_setup(struct musb *musb)
void musb_gadget_cleanup(struct musb *musb)
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
static void stop_activity(struct musb *musb, struct usb_gadget_driver *driver)
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
void musb_g_resume(struct musb *musb)
void musb_g_suspend(struct musb *musb)
void musb_g_wakeup(struct musb *musb)
void musb_g_disconnect(struct musb *musb)
void musb_g_reset(struct musb *musb)
__releases(musb->lock)
__acquires(musb->lock)

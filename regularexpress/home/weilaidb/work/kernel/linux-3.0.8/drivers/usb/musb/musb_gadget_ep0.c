#define	next_ep0_request(musb)	next_in_request(&(musb)->endpoints[0])
static char *decode_ep0stage(u8 stage)
static int service_tx_status_request(
struct musb *musb,
const struct usb_ctrlrequest *ctrlrequest)
static int
service_in_request(struct musb *musb, const struct usb_ctrlrequest *ctrlrequest)
static void musb_g_ep0_giveback(struct musb *musb, struct usb_request *req)
static inline void musb_try_b_hnp_enable(struct musb *musb)
static int
service_zero_data_request(struct musb *musb,
struct usb_ctrlrequest *ctrlrequest)
__releases(musb->lock)
__acquires(musb->lock)
static void ep0_rxstate(struct musb *musb)
static void ep0_txstate(struct musb *musb)
static void
musb_read_setup(struct musb *musb, struct usb_ctrlrequest *req)
static int
forward_to_driver(struct musb *musb, const struct usb_ctrlrequest *ctrlrequest)
__releases(musb->lock)
__acquires(musb->lock)
irqreturn_t musb_g_ep0_irq(struct musb *musb)
static int
musb_g_ep0_enable(struct usb_ep *ep, const struct usb_endpoint_descriptor *desc)
static int musb_g_ep0_disable(struct usb_ep *e)
static int
musb_g_ep0_queue(struct usb_ep *e, struct usb_request *r, gfp_t gfp_flags)
static int musb_g_ep0_dequeue(struct usb_ep *ep, struct usb_request *req)
static int musb_g_ep0_halt(struct usb_ep *e, int value)
const struct usb_ep_ops musb_g_ep0_ops = ;

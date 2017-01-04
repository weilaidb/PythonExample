static void musb_ep_program(struct musb *musb, u8 epnum,
struct urb *urb, int is_out,
u8 *buf, u32 offset, u32 len);
static void musb_h_tx_flush_fifo(struct musb_hw_ep *ep)
static void musb_h_ep0_flush_fifo(struct musb_hw_ep *ep)
static inline void musb_h_tx_start(struct musb_hw_ep *ep)
static inline void musb_h_tx_dma_start(struct musb_hw_ep *ep)
static void musb_ep_set_qh(struct musb_hw_ep *ep, int is_in, struct musb_qh *qh)
static struct musb_qh *musb_ep_get_qh(struct musb_hw_ep *ep, int is_in)
static void
musb_start_urb(struct musb *musb, int is_in, struct musb_qh *qh)
static void musb_giveback(struct musb *musb, struct urb *urb, int status)
__releases(musb->lock)
__acquires(musb->lock)
static inline void musb_save_toggle(struct musb_qh *qh, int is_in,
struct urb *urb)
static void musb_advance_schedule(struct musb *musb, struct urb *urb,
struct musb_hw_ep *hw_ep, int is_in)
static u16 musb_h_flush_rxfifo(struct musb_hw_ep *hw_ep, u16 csr)
static bool
musb_host_packet_rx(struct musb *musb, struct urb *urb, u8 epnum, u8 iso_err)
static void
musb_rx_reinit(struct musb *musb, struct musb_qh *qh, struct musb_hw_ep *ep)
static bool musb_tx_dma_program(struct dma_controller *dma,
struct musb_hw_ep *hw_ep, struct musb_qh *qh,
struct urb *urb, u32 offset, u32 length)
static void musb_ep_program(struct musb *musb, u8 epnum,
struct urb *urb, int is_out,
u8 *buf, u32 offset, u32 len)
static bool musb_h_ep0_continue(struct musb *musb, u16 len, struct urb *urb)
irqreturn_t musb_h_ep0_irq(struct musb *musb)
void musb_host_tx(struct musb *musb, u8 epnum)
static void musb_bulk_rx_nak_timeout(struct musb *musb, struct musb_hw_ep *ep)
void musb_host_rx(struct musb *musb, u8 epnum)
static int musb_schedule(
struct musb		*musb,
struct musb_qh		*qh,
int			is_in)
static int musb_urb_enqueue(
struct usb_hcd			*hcd,
struct urb			*urb,
gfp_t				mem_flags)
static int musb_cleanup_urb(struct urb *urb, struct musb_qh *qh)
static int musb_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void
musb_h_disable(struct usb_hcd *hcd, struct usb_host_endpoint *hep)
static int musb_h_get_frame_number(struct usb_hcd *hcd)
static int musb_h_start(struct usb_hcd *hcd)
static void musb_h_stop(struct usb_hcd *hcd)
static int musb_bus_suspend(struct usb_hcd *hcd)
static int musb_bus_resume(struct usb_hcd *hcd)
const struct hc_driver musb_hc_driver = ;

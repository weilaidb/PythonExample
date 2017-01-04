static int
qtd_fill(struct ehci_hcd *ehci, struct ehci_qtd *qtd, dma_addr_t buf,
size_t len, int token, int maxpacket)
static inline void
qh_update (struct ehci_hcd *ehci, struct ehci_qh *qh, struct ehci_qtd *qtd)
static void
qh_refresh (struct ehci_hcd *ehci, struct ehci_qh *qh)
static void qh_link_async(struct ehci_hcd *ehci, struct ehci_qh *qh);
static void ehci_clear_tt_buffer_complete(struct usb_hcd *hcd,
struct usb_host_endpoint *ep)
static void ehci_clear_tt_buffer(struct ehci_hcd *ehci, struct ehci_qh *qh,
struct urb *urb, u32 token)
static int qtd_copy_status (
struct ehci_hcd *ehci,
struct urb *urb,
size_t length,
u32 token
)
static void
ehci_urb_done(struct ehci_hcd *ehci, struct urb *urb, int status)
__releases(ehci->lock)
__acquires(ehci->lock)
static void start_unlink_async (struct ehci_hcd *ehci, struct ehci_qh *qh);
static void unlink_async (struct ehci_hcd *ehci, struct ehci_qh *qh);
static int qh_schedule (struct ehci_hcd *ehci, struct ehci_qh *qh);
static unsigned
qh_completions (struct ehci_hcd *ehci, struct ehci_qh *qh)
#define hb_mult(wMaxPacketSize) (1 + (((wMaxPacketSize) >> 11) & 0x03))
#define max_packet(wMaxPacketSize) ((wMaxPacketSize) & 0x07ff)
static void qtd_list_free (
struct ehci_hcd		*ehci,
struct urb		*urb,
struct list_head	*qtd_list
)
static struct list_head *
qh_urb_transaction (
struct ehci_hcd		*ehci,
struct urb		*urb,
struct list_head	*head,
gfp_t			flags
)
static struct ehci_qh *
qh_make (
struct ehci_hcd		*ehci,
struct urb		*urb,
gfp_t			flags
)
static void qh_link_async (struct ehci_hcd *ehci, struct ehci_qh *qh)
static struct ehci_qh *qh_append_tds (
struct ehci_hcd		*ehci,
struct urb		*urb,
struct list_head	*qtd_list,
int			epnum,
void			**ptr
)
static int
submit_async (
struct ehci_hcd		*ehci,
struct urb		*urb,
struct list_head	*qtd_list,
gfp_t			mem_flags
)
static void end_unlink_async (struct ehci_hcd *ehci)
static void start_unlink_async (struct ehci_hcd *ehci, struct ehci_qh *qh)
static void scan_async (struct ehci_hcd *ehci)

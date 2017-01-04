static void urb_free_priv (struct ohci_hcd *hc, urb_priv_t *urb_priv)
static void
finish_urb(struct ohci_hcd *ohci, struct urb *urb, int status)
__releases(ohci->lock)
__acquires(ohci->lock)
static int balance (struct ohci_hcd *ohci, int interval, int load)
static void periodic_link (struct ohci_hcd *ohci, struct ed *ed)
static int ed_schedule (struct ohci_hcd *ohci, struct ed *ed)
static void periodic_unlink (struct ohci_hcd *ohci, struct ed *ed)
static void ed_deschedule (struct ohci_hcd *ohci, struct ed *ed)
static struct ed *ed_get (
struct ohci_hcd		*ohci,
struct usb_host_endpoint *ep,
struct usb_device	*udev,
unsigned int		pipe,
int			interval
)
static void start_ed_unlink (struct ohci_hcd *ohci, struct ed *ed)
static void
td_fill (struct ohci_hcd *ohci, u32 info,
dma_addr_t data, int len,
struct urb *urb, int index)
static void td_submit_urb (
struct ohci_hcd	*ohci,
struct urb	*urb
)
static int td_done(struct ohci_hcd *ohci, struct urb *urb, struct td *td)
static void ed_halted(struct ohci_hcd *ohci, struct td *td, int cc)
static struct td *dl_reverse_done_list (struct ohci_hcd *ohci)
static void
finish_unlinks (struct ohci_hcd *ohci, u16 tick)
static void takeback_td(struct ohci_hcd *ohci, struct td *td)
static void
dl_done_list (struct ohci_hcd *ohci)

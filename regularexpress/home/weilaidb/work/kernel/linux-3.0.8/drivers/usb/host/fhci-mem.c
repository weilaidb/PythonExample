static void init_td(struct td *td)
static void init_ed(struct ed *ed)
static struct td *get_empty_td(struct fhci_hcd *fhci)
void fhci_recycle_empty_td(struct fhci_hcd *fhci, struct td *td)
struct ed *fhci_get_empty_ed(struct fhci_hcd *fhci)
void fhci_recycle_empty_ed(struct fhci_hcd *fhci, struct ed *ed)
struct td *fhci_td_fill(struct fhci_hcd *fhci, struct urb *urb,
struct urb_priv *urb_priv, struct ed *ed, u16 index,
enum fhci_ta_type type, int toggle, u8 *data, u32 len,
u16 interval, u16 start_frame, bool ioc)

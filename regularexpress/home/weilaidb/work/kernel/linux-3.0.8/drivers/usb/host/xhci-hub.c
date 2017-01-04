#define	PORT_WAKE_BITS	(PORT_WKOC_E | PORT_WKDISC_E | PORT_WKCONN_E)
#define	PORT_RWC_BITS	(PORT_CSC | PORT_PEC | PORT_WRC | PORT_OCC | \
PORT_RC | PORT_PLC | PORT_PE)
static void xhci_common_hub_descriptor(struct xhci_hcd *xhci,
struct usb_hub_descriptor *desc, int ports)
static void xhci_usb2_hub_descriptor(struct usb_hcd *hcd, struct xhci_hcd *xhci,
struct usb_hub_descriptor *desc)
static void xhci_usb3_hub_descriptor(struct usb_hcd *hcd, struct xhci_hcd *xhci,
struct usb_hub_descriptor *desc)
static void xhci_hub_descriptor(struct usb_hcd *hcd, struct xhci_hcd *xhci,
struct usb_hub_descriptor *desc)
static unsigned int xhci_port_speed(unsigned int port_status)
#define	XHCI_PORT_RO	((1<<0) | (1<<3) | (0xf<<10) | (1<<30))
#define XHCI_PORT_RWS	((0xf<<5) | (1<<9) | (0x3<<14) | (0x7<<25))
#define	XHCI_PORT_RW1S	((1<<4))
#define XHCI_PORT_RW1CS	((1<<1) | (0x7f<<17))
#define	XHCI_PORT_RW	((1<<16))
#define	XHCI_PORT_RZ	((1<<2) | (1<<24) | (0xf<<28))
u32 xhci_port_state_to_neutral(u32 state)
int xhci_find_slot_id_by_port(struct usb_hcd *hcd, struct xhci_hcd *xhci,
u16 port)
static int xhci_stop_device(struct xhci_hcd *xhci, int slot_id, int suspend)
void xhci_ring_device(struct xhci_hcd *xhci, int slot_id)
static void xhci_disable_port(struct usb_hcd *hcd, struct xhci_hcd *xhci,
u16 wIndex, __le32 __iomem *addr, u32 port_status)
static void xhci_clear_port_change_bit(struct xhci_hcd *xhci, u16 wValue,
u16 wIndex, __le32 __iomem *addr, u32 port_status)
static int xhci_get_ports(struct usb_hcd *hcd, __le32 __iomem ***port_array)
int xhci_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
int xhci_hub_status_data(struct usb_hcd *hcd, char *buf)
int xhci_bus_suspend(struct usb_hcd *hcd)
int xhci_bus_resume(struct usb_hcd *hcd)

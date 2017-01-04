static const __u8 root_hub_hub_des[] =
;
#define	UHCI_RH_MAXCHILD	7
#define WZ_BITS		(USBPORTSC_RES2 | USBPORTSC_RES3 | USBPORTSC_RES4)
#define RWC_BITS	(USBPORTSC_OCC | USBPORTSC_PEC | USBPORTSC_CSC)
#define SUSPEND_BITS	(USBPORTSC_SUSP | USBPORTSC_RD)
static int any_ports_active(struct uhci_hcd *uhci)
static inline int get_hub_status_data(struct uhci_hcd *uhci, char *buf)
#define OK(x)			len = (x); break
#define CLR_RH_PORTSTAT(x) \
status = uhci_readw(uhci, port_addr);	\
status &= ~(RWC_BITS|WZ_BITS); \
status &= ~(x); \
status |= RWC_BITS & (x); \
uhci_writew(uhci, status, port_addr)
#define SET_RH_PORTSTAT(x) \
status = uhci_readw(uhci, port_addr);	\
status |= (x); \
status &= ~(RWC_BITS|WZ_BITS); \
uhci_writew(uhci, status, port_addr)
static void uhci_finish_suspend(struct uhci_hcd *uhci, int port,
unsigned long port_addr)
static void wait_for_HP(struct uhci_hcd *uhci, unsigned long port_addr)
static void uhci_check_ports(struct uhci_hcd *uhci)
static int uhci_hub_status_data(struct usb_hcd *hcd, char *buf)
static int uhci_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)

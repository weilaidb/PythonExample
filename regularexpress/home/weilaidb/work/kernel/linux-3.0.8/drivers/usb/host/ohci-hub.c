#define dbg_port(hc,label,num,value) \
ohci_dbg (hc, \
"%s roothub.portstatus [%d] " \
"= 0x%08x%s%s%s%s%s%s%s%s%s%s%s%s\n", \
label, num, temp, \
(temp & RH_PS_PRSC) ? " PRSC" : "", \
(temp & RH_PS_OCIC) ? " OCIC" : "", \
(temp & RH_PS_PSSC) ? " PSSC" : "", \
(temp & RH_PS_PESC) ? " PESC" : "", \
(temp & RH_PS_CSC) ? " CSC" : "", \
\
(temp & RH_PS_LSDA) ? " LSDA" : "", \
(temp & RH_PS_PPS) ? " PPS" : "", \
(temp & RH_PS_PRS) ? " PRS" : "", \
(temp & RH_PS_POCI) ? " POCI" : "", \
(temp & RH_PS_PSS) ? " PSS" : "", \
\
(temp & RH_PS_PES) ? " PES" : "", \
(temp & RH_PS_CCS) ? " CCS" : "" \
);
#define OHCI_SCHED_ENABLES \
(OHCI_CTRL_CLE|OHCI_CTRL_BLE|OHCI_CTRL_PLE|OHCI_CTRL_IE)
static void dl_done_list (struct ohci_hcd *);
static void finish_unlinks (struct ohci_hcd *, u16);
static int ohci_rh_suspend (struct ohci_hcd *ohci, int autostop)
__releases(ohci->lock)
__acquires(ohci->lock)
static inline struct ed *find_head (struct ed *ed)
static int ohci_rh_resume (struct ohci_hcd *ohci)
__releases(ohci->lock)
__acquires(ohci->lock)
static int ohci_bus_suspend (struct usb_hcd *hcd)
static int ohci_bus_resume (struct usb_hcd *hcd)
static void ohci_finish_controller_resume(struct usb_hcd *hcd)
static int ohci_root_hub_state_changes(struct ohci_hcd *ohci, int changed,
int any_connected, int rhsc_status)
static inline int ohci_rh_resume(struct ohci_hcd *ohci)
static int ohci_root_hub_state_changes(struct ohci_hcd *ohci, int changed,
int any_connected, int rhsc_status)
static int
ohci_hub_status_data (struct usb_hcd *hcd, char *buf)
static void
ohci_hub_descriptor (
struct ohci_hcd			*ohci,
struct usb_hub_descriptor	*desc
)
static int ohci_start_port_reset (struct usb_hcd *hcd, unsigned port)
#define	ohci_start_port_reset		NULL
#define	PORT_RESET_MSEC		50
#define	PORT_RESET_MSEC		10
#define	PORT_RESET_HW_MSEC	10
#define tick_before(t1,t2) ((s16)(((s16)(t1))-((s16)(t2))) < 0)
static inline int root_port_reset (struct ohci_hcd *ohci, unsigned port)
static int ohci_hub_control (
struct usb_hcd	*hcd,
u16		typeReq,
u16		wValue,
u16		wIndex,
char		*buf,
u16		wLength
)

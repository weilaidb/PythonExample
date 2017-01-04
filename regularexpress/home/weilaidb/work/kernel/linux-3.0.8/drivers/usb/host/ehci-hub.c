#define	PORT_WAKE_BITS	(PORT_WKOC_E|PORT_WKDISC_E|PORT_WKCONN_E)
static int ehci_hub_control(
struct usb_hcd	*hcd,
u16		typeReq,
u16		wValue,
u16		wIndex,
char		*buf,
u16		wLength
);
static void ehci_handover_companion_ports(struct ehci_hcd *ehci)
static int ehci_port_change(struct ehci_hcd *ehci)
static __maybe_unused void ehci_adjust_port_wakeup_flags(struct ehci_hcd *ehci,
bool suspending, bool do_wakeup)
static int ehci_bus_suspend (struct usb_hcd *hcd)
static int ehci_bus_resume (struct usb_hcd *hcd)
#define ehci_bus_suspend	NULL
#define ehci_bus_resume		NULL
static ssize_t show_companion(struct device *dev,
struct device_attribute *attr,
char *buf)
static void set_owner(struct ehci_hcd *ehci, int portnum, int new_owner)
static ssize_t store_companion(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(companion, 0644, show_companion, store_companion);
static inline int create_companion_file(struct ehci_hcd *ehci)
static inline void remove_companion_file(struct ehci_hcd *ehci)
static int check_reset_complete (
struct ehci_hcd	*ehci,
int		index,
u32 __iomem	*status_reg,
int		port_status
)
static int
ehci_hub_status_data (struct usb_hcd *hcd, char *buf)
static void
ehci_hub_descriptor (
struct ehci_hcd			*ehci,
struct usb_hub_descriptor	*desc
)
static int ehci_hub_control (
struct usb_hcd	*hcd,
u16		typeReq,
u16		wValue,
u16		wIndex,
char		*buf,
u16		wLength
)
static void ehci_relinquish_port(struct usb_hcd *hcd, int portnum)
static int ehci_port_handed_over(struct usb_hcd *hcd, int portnum)

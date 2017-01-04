static unsigned epnum;
static unsigned in_epnum;
static int
ep_matches (
struct usb_gadget		*gadget,
struct usb_ep			*ep,
struct usb_endpoint_descriptor	*desc
)
static struct usb_ep *
find_ep (struct usb_gadget *gadget, const char *name)
struct usb_ep *usb_ep_autoconfig (
struct usb_gadget		*gadget,
struct usb_endpoint_descriptor	*desc
)
void usb_ep_autoconfig_reset (struct usb_gadget *gadget)

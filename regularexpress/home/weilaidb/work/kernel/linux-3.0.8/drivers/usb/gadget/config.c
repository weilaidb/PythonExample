int
usb_descriptor_fillbuf(void *buf, unsigned buflen,
const struct usb_descriptor_header **src)
int usb_gadget_config_buf(
const struct usb_config_descriptor	*config,
void					*buf,
unsigned				length,
const struct usb_descriptor_header	**desc
)
struct usb_descriptor_header **
usb_copy_descriptors(struct usb_descriptor_header **src)
struct usb_endpoint_descriptor *
usb_find_endpoint(
struct usb_descriptor_header **src,
struct usb_descriptor_header **copy,
struct usb_endpoint_descriptor *match
)

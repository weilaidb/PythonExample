static u8 root_hub_des[] = ;
static void fhci_gpio_set_value(struct fhci_hcd *fhci, int gpio_nr, bool on)
void fhci_config_transceiver(struct fhci_hcd *fhci,
enum fhci_port_status status)
void fhci_port_disable(struct fhci_hcd *fhci)
void fhci_port_enable(void *lld)
void fhci_io_port_generate_reset(struct fhci_hcd *fhci)
void fhci_port_reset(void *lld)
int fhci_hub_status_data(struct usb_hcd *hcd, char *buf)
int fhci_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)

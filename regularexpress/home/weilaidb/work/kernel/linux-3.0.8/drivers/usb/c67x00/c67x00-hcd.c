static __u8 c67x00_hub_des[] = ;
static void c67x00_hub_reset_host_port(struct c67x00_sie *sie, int port)
static int c67x00_hub_status_data(struct usb_hcd *hcd, char *buf)
static int c67x00_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
static void c67x00_hcd_irq(struct c67x00_sie *sie, u16 int_status, u16 msg)
static int c67x00_hcd_start(struct usb_hcd *hcd)
static void c67x00_hcd_stop(struct usb_hcd *hcd)
static int c67x00_hcd_get_frame(struct usb_hcd *hcd)
static struct hc_driver c67x00_hc_driver = ;
int c67x00_hcd_probe(struct c67x00_sie *sie)
void c67x00_hcd_remove(struct c67x00_sie *sie)

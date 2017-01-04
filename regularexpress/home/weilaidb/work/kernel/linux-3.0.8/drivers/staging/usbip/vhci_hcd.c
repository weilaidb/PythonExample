#define DRIVER_AUTHOR "Takahiro Hirofuchi"
#define DRIVER_DESC "USB/IP 'Virtual' Host Controller (VHCI) Driver"
static int vhci_hub_status(struct usb_hcd *hcd, char *buff);
static int vhci_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buff, u16 wLength);
static int vhci_urb_enqueue(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags);
static int vhci_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status);
static int vhci_start(struct usb_hcd *vhci_hcd);
static void vhci_stop(struct usb_hcd *hcd);
static int vhci_get_frame_number(struct usb_hcd *hcd);
static const char driver_name[] = "vhci_hcd";
static const char driver_desc[] = "USB/IP Virtual Host Controller";
struct vhci_hcd *the_controller;
static const char * const bit_desc[] = ;
static void dump_port_status(u32 status)
void rh_port_connect(int rhport, enum usb_device_speed speed)
void rh_port_disconnect(int rhport)
#define PORT_C_MASK				\
((USB_PORT_STAT_C_CONNECTION		\
| USB_PORT_STAT_C_ENABLE		\
| USB_PORT_STAT_C_SUSPEND		\
| USB_PORT_STAT_C_OVERCURRENT		\
| USB_PORT_STAT_C_RESET) << 16)
static int vhci_hub_status(struct usb_hcd *hcd, char *buf)
static inline void hub_descriptor(struct usb_hub_descriptor *desc)
static int vhci_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength)
static struct vhci_device *get_vdev(struct usb_device *udev)
static void vhci_tx_urb(struct urb *urb)
static int vhci_urb_enqueue(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags)
static int vhci_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void vhci_device_unlink_cleanup(struct vhci_device *vdev)
static void vhci_shutdown_connection(struct usbip_device *ud)
static void vhci_device_reset(struct usbip_device *ud)
static void vhci_device_unusable(struct usbip_device *ud)
static void vhci_device_init(struct vhci_device *vdev)
static int vhci_start(struct usb_hcd *hcd)
static void vhci_stop(struct usb_hcd *hcd)
static int vhci_get_frame_number(struct usb_hcd *hcd)
static int vhci_bus_suspend(struct usb_hcd *hcd)
static int vhci_bus_resume(struct usb_hcd *hcd)
#define vhci_bus_suspend      NULL
#define vhci_bus_resume       NULL
static struct hc_driver vhci_hc_driver = ;
static int vhci_hcd_probe(struct platform_device *pdev)
static int vhci_hcd_remove(struct platform_device *pdev)
static int vhci_hcd_suspend(struct platform_device *pdev, pm_message_t state)
static int vhci_hcd_resume(struct platform_device *pdev)
#define vhci_hcd_suspend	NULL
#define vhci_hcd_resume		NULL
static struct platform_driver vhci_driver = ;
static void the_pdev_release(struct device *dev)
static struct platform_device the_pdev = ;
static int __init vhci_init(void)
static void __exit vhci_cleanup(void)
module_init(vhci_init);
module_exit(vhci_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
MODULE_VERSION(USBIP_VERSION);

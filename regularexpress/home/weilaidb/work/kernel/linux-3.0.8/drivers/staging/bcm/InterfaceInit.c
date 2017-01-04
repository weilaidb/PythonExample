static struct usb_device_id InterfaceUsbtable[] = ;
MODULE_DEVICE_TABLE(usb, InterfaceUsbtable);
static int debug = -1;
module_param(debug, uint, 0600);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
static const u32 default_msg =
NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK
| NETIF_MSG_TIMER | NETIF_MSG_TX_ERR | NETIF_MSG_RX_ERR
| NETIF_MSG_IFUP | NETIF_MSG_IFDOWN;
static int InterfaceAdapterInit(PS_INTERFACE_ADAPTER Adapter);
static void InterfaceAdapterFree(PS_INTERFACE_ADAPTER psIntfAdapter)
static void ConfigureEndPointTypesThroughEEPROM(PMINI_ADAPTER Adapter)
static int
usbbcm_device_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void usbbcm_disconnect(struct usb_interface *intf)
static int AllocUsbCb(PS_INTERFACE_ADAPTER psIntfAdapter)
static int device_run(PS_INTERFACE_ADAPTER psIntfAdapter)
static inline int bcm_usb_endpoint_num(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_type(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_dir_in(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_dir_out(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_xfer_bulk(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_xfer_control(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_xfer_int(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_xfer_isoc(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_is_bulk_in(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_is_bulk_out(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_is_int_in(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_is_int_out(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_is_isoc_in(const struct usb_endpoint_descriptor *epd)
static inline int bcm_usb_endpoint_is_isoc_out(const struct usb_endpoint_descriptor *epd)
static int InterfaceAdapterInit(PS_INTERFACE_ADAPTER psIntfAdapter)
static int InterfaceSuspend(struct usb_interface *intf, pm_message_t message)
static int InterfaceResume(struct usb_interface *intf)
static struct usb_driver usbbcm_driver = ;
struct class *bcm_class;
static __init int bcm_init(void)
static __exit void bcm_exit(void)
module_init(bcm_init);
module_exit(bcm_exit);
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");

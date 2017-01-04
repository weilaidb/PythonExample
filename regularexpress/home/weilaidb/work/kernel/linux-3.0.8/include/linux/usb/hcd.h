#define __USB_CORE_HCD_H
#define MAX_TOPO_LEVEL		6
#define USB_PID_EXT			0xf0
#define USB_PID_OUT			0xe1
#define USB_PID_ACK			0xd2
#define USB_PID_DATA0			0xc3
#define USB_PID_PING			0xb4
#define USB_PID_SOF			0xa5
#define USB_PID_NYET			0x96
#define USB_PID_DATA2			0x87
#define USB_PID_SPLIT			0x78
#define USB_PID_IN			0x69
#define USB_PID_NAK			0x5a
#define USB_PID_DATA1			0x4b
#define USB_PID_PREAMBLE		0x3c
#define USB_PID_ERR			0x3c
#define USB_PID_SETUP			0x2d
#define USB_PID_STALL			0x1e
#define USB_PID_MDATA			0x0f
struct usb_hcd ;
static inline struct usb_bus *hcd_to_bus(struct usb_hcd *hcd)
static inline struct usb_hcd *bus_to_hcd(struct usb_bus *bus)
struct hcd_timeout ;
struct hc_driver ;
extern int usb_hcd_link_urb_to_ep(struct usb_hcd *hcd, struct urb *urb);
extern int usb_hcd_check_unlink_urb(struct usb_hcd *hcd, struct urb *urb,
int status);
extern void usb_hcd_unlink_urb_from_ep(struct usb_hcd *hcd, struct urb *urb);
extern int usb_hcd_submit_urb(struct urb *urb, gfp_t mem_flags);
extern int usb_hcd_unlink_urb(struct urb *urb, int status);
extern void usb_hcd_giveback_urb(struct usb_hcd *hcd, struct urb *urb,
int status);
extern int usb_hcd_map_urb_for_dma(struct usb_hcd *hcd, struct urb *urb,
gfp_t mem_flags);
extern void usb_hcd_unmap_urb_setup_for_dma(struct usb_hcd *, struct urb *);
extern void usb_hcd_unmap_urb_for_dma(struct usb_hcd *, struct urb *);
extern void usb_hcd_flush_endpoint(struct usb_device *udev,
struct usb_host_endpoint *ep);
extern void usb_hcd_disable_endpoint(struct usb_device *udev,
struct usb_host_endpoint *ep);
extern void usb_hcd_reset_endpoint(struct usb_device *udev,
struct usb_host_endpoint *ep);
extern void usb_hcd_synchronize_unlinks(struct usb_device *udev);
extern int usb_hcd_alloc_bandwidth(struct usb_device *udev,
struct usb_host_config *new_config,
struct usb_host_interface *old_alt,
struct usb_host_interface *new_alt);
extern int usb_hcd_get_frame_number(struct usb_device *udev);
extern struct usb_hcd *usb_create_hcd(const struct hc_driver *driver,
struct device *dev, const char *bus_name);
extern struct usb_hcd *usb_create_shared_hcd(const struct hc_driver *driver,
struct device *dev, const char *bus_name,
struct usb_hcd *shared_hcd);
extern struct usb_hcd *usb_get_hcd(struct usb_hcd *hcd);
extern void usb_put_hcd(struct usb_hcd *hcd);
extern int usb_hcd_is_primary_hcd(struct usb_hcd *hcd);
extern int usb_add_hcd(struct usb_hcd *hcd,
unsigned int irqnum, unsigned long irqflags);
extern void usb_remove_hcd(struct usb_hcd *hcd);
struct platform_device;
extern void usb_hcd_platform_shutdown(struct platform_device *dev);
struct pci_dev;
struct pci_device_id;
extern int usb_hcd_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id);
extern void usb_hcd_pci_remove(struct pci_dev *dev);
extern void usb_hcd_pci_shutdown(struct pci_dev *dev);
extern const struct dev_pm_ops usb_hcd_pci_pm_ops;
int hcd_buffer_create(struct usb_hcd *hcd);
void hcd_buffer_destroy(struct usb_hcd *hcd);
void *hcd_buffer_alloc(struct usb_bus *bus, size_t size,
gfp_t mem_flags, dma_addr_t *dma);
void hcd_buffer_free(struct usb_bus *bus, size_t size,
void *addr, dma_addr_t dma);
extern irqreturn_t usb_hcd_irq(int irq, void *__hcd);
extern void usb_hc_died(struct usb_hcd *hcd);
extern void usb_hcd_poll_rh_status(struct usb_hcd *hcd);
#define usb_gettoggle(dev, ep, out) (((dev)->toggle[out] >> (ep)) & 1)
#define	usb_dotoggle(dev, ep, out)  ((dev)->toggle[out] ^= (1 << (ep)))
#define usb_settoggle(dev, ep, out, bit) \
((dev)->toggle[out] = ((dev)->toggle[out] & ~(1 << (ep))) | \
((bit) << (ep)))
extern struct usb_device *usb_alloc_dev(struct usb_device *parent,
struct usb_bus *, unsigned port);
extern int usb_new_device(struct usb_device *dev);
extern void usb_disconnect(struct usb_device **);
extern int usb_get_configuration(struct usb_device *dev);
extern void usb_destroy_configuration(struct usb_device *dev);
struct usb_device;
struct usb_tt ;
struct usb_tt_clear ;
extern int usb_hub_clear_tt_buffer(struct urb *urb);
extern void usb_ep0_reinit(struct usb_device *);
#define DeviceRequest \
((USB_DIR_IN|USB_TYPE_STANDARD|USB_RECIP_DEVICE)<<8)
#define DeviceOutRequest \
((USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_DEVICE)<<8)
#define InterfaceRequest \
((USB_DIR_IN|USB_TYPE_STANDARD|USB_RECIP_INTERFACE)<<8)
#define EndpointRequest \
((USB_DIR_IN|USB_TYPE_STANDARD|USB_RECIP_INTERFACE)<<8)
#define EndpointOutRequest \
((USB_DIR_OUT|USB_TYPE_STANDARD|USB_RECIP_INTERFACE)<<8)
#define ClearHubFeature		(0x2000 | USB_REQ_CLEAR_FEATURE)
#define ClearPortFeature	(0x2300 | USB_REQ_CLEAR_FEATURE)
#define GetHubDescriptor	(0xa000 | USB_REQ_GET_DESCRIPTOR)
#define GetHubStatus		(0xa000 | USB_REQ_GET_STATUS)
#define GetPortStatus		(0xa300 | USB_REQ_GET_STATUS)
#define SetHubFeature		(0x2000 | USB_REQ_SET_FEATURE)
#define SetPortFeature		(0x2300 | USB_REQ_SET_FEATURE)
#define SetHubDepth		(0x3000 | HUB_SET_DEPTH)
#define GetPortErrorCount	(0x8000 | HUB_GET_PORT_ERR_COUNT)
#define FRAME_TIME_USECS	1000L
#define BitTime(bytecount) (7 * 8 * bytecount / 6)
#define NS_TO_US(ns)	((ns + 500L) / 1000L)
#define BW_HOST_DELAY	1000L
#define BW_HUB_LS_SETUP	333L
#define FRAME_TIME_BITS			12000L
#define FRAME_TIME_MAX_BITS_ALLOC	(90L * FRAME_TIME_BITS / 100L)
#define FRAME_TIME_MAX_USECS_ALLOC	(90L * FRAME_TIME_USECS / 100L)
#define USB2_HOST_DELAY	5
#define HS_NSECS(bytes) (((55 * 8 * 2083) \
+ (2083UL * (3 + BitTime(bytes))))/1000 \
+ USB2_HOST_DELAY)
#define HS_NSECS_ISO(bytes) (((38 * 8 * 2083) \
+ (2083UL * (3 + BitTime(bytes))))/1000 \
+ USB2_HOST_DELAY)
#define HS_USECS(bytes)		NS_TO_US(HS_NSECS(bytes))
#define HS_USECS_ISO(bytes)	NS_TO_US(HS_NSECS_ISO(bytes))
extern long usb_calc_bus_time(int speed, int is_input,
int isoc, int bytecount);
extern void usb_set_device_state(struct usb_device *udev,
enum usb_device_state new_state);
extern struct list_head usb_bus_list;
extern struct mutex usb_bus_list_lock;
extern wait_queue_head_t usb_kill_urb_queue;
extern int usb_find_interface_driver(struct usb_device *dev,
struct usb_interface *interface);
#define usb_endpoint_out(ep_dir)	(!((ep_dir) & USB_DIR_IN))
extern void usb_root_hub_lost_power(struct usb_device *rhdev);
extern int hcd_bus_suspend(struct usb_device *rhdev, pm_message_t msg);
extern int hcd_bus_resume(struct usb_device *rhdev, pm_message_t msg);
extern void usb_hcd_resume_root_hub(struct usb_hcd *hcd);
static inline void usb_hcd_resume_root_hub(struct usb_hcd *hcd)
extern void usbfs_update_special(void);
extern int usbfs_init(void);
extern void usbfs_cleanup(void);
static inline void usbfs_update_special(void)
static inline int usbfs_init(void)
static inline void usbfs_cleanup(void)
#if defined(CONFIG_USB_MON) || defined(CONFIG_USB_MON_MODULE)
struct usb_mon_operations ;
extern struct usb_mon_operations *mon_ops;
static inline void usbmon_urb_submit(struct usb_bus *bus, struct urb *urb)
static inline void usbmon_urb_submit_error(struct usb_bus *bus, struct urb *urb,
int error)
static inline void usbmon_urb_complete(struct usb_bus *bus, struct urb *urb,
int status)
int usb_mon_register(struct usb_mon_operations *ops);
void usb_mon_deregister(void);
static inline void usbmon_urb_submit(struct usb_bus *bus, struct urb *urb)
static inline void usbmon_urb_submit_error(struct usb_bus *bus, struct urb *urb,
int error)
static inline void usbmon_urb_complete(struct usb_bus *bus, struct urb *urb,
int status)
#define	RUN_CONTEXT (in_irq() ? "in_irq" \
: (in_interrupt() ? "in_interrupt" : "can sleep"))
extern struct rw_semaphore ehci_cf_port_reset_rwsem;
#define USB_UHCI_LOADED		0
#define USB_OHCI_LOADED		1
#define USB_EHCI_LOADED		2
extern unsigned long usb_hcds_loaded;

struct vhci_device ;
struct vhci_priv ;
struct vhci_unlink ;
#define VHCI_NPORTS 8
struct vhci_hcd ;
extern struct vhci_hcd *the_controller;
extern struct attribute_group dev_attr_group;
#define hardware (&the_controller->pdev.dev)
void rh_port_connect(int rhport, enum usb_device_speed speed);
void rh_port_disconnect(int rhport);
struct urb *pickup_urb_and_free_priv(struct vhci_device *vdev, __u32 seqnum);
int vhci_rx_loop(void *data);
int vhci_tx_loop(void *data);
static inline struct vhci_device *port_to_vdev(__u32 port)
static inline struct vhci_hcd *hcd_to_vhci(struct usb_hcd *hcd)
static inline struct usb_hcd *vhci_to_hcd(struct vhci_hcd *vhci)
static inline struct device *vhci_dev(struct vhci_hcd *vhci)

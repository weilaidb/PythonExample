#define __U_ETHER_H
struct gether ;
#define	DEFAULT_FILTER	(USB_CDC_PACKET_TYPE_BROADCAST \
|USB_CDC_PACKET_TYPE_ALL_MULTICAST \
|USB_CDC_PACKET_TYPE_PROMISCUOUS \
|USB_CDC_PACKET_TYPE_DIRECTED)
int gether_setup(struct usb_gadget *g, u8 ethaddr[ETH_ALEN]);
void gether_cleanup(void);
struct net_device *gether_connect(struct gether *);
void gether_disconnect(struct gether *);
static inline bool can_support_ecm(struct usb_gadget *gadget)
int geth_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN]);
int ecm_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN]);
int ncm_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN]);
int eem_bind_config(struct usb_configuration *c);
int rndis_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN]);
static inline int
rndis_bind_config(struct usb_configuration *c, u8 ethaddr[ETH_ALEN])

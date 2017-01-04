static int qos_mtt_bits = 0;
static struct usb_device_id dongles[] = ;
MODULE_DEVICE_TABLE(usb, dongles);
static void irda_usb_init_qos(struct irda_usb_cb *self) ;
static struct irda_class_desc *irda_usb_find_class_desc(struct usb_interface *intf);
static void irda_usb_disconnect(struct usb_interface *intf);
static void irda_usb_change_speed_xbofs(struct irda_usb_cb *self);
static netdev_tx_t irda_usb_hard_xmit(struct sk_buff *skb,
struct net_device *dev);
static int irda_usb_open(struct irda_usb_cb *self);
static void irda_usb_close(struct irda_usb_cb *self);
static void speed_bulk_callback(struct urb *urb);
static void write_bulk_callback(struct urb *urb);
static void irda_usb_receive(struct urb *urb);
static void irda_usb_rx_defer_expired(unsigned long data);
static int irda_usb_net_open(struct net_device *dev);
static int irda_usb_net_close(struct net_device *dev);
static int irda_usb_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void irda_usb_net_timeout(struct net_device *dev);
static void irda_usb_build_header(struct irda_usb_cb *self,
__u8 *header,
int	force)
static __u8 get_turnaround_time(struct sk_buff *skb)
static void irda_usb_change_speed_xbofs(struct irda_usb_cb *self)
static void speed_bulk_callback(struct urb *urb)
static netdev_tx_t irda_usb_hard_xmit(struct sk_buff *skb,
struct net_device *netdev)
static void write_bulk_callback(struct urb *urb)
static void irda_usb_net_timeout(struct net_device *netdev)
static void irda_usb_submit(struct irda_usb_cb *self, struct sk_buff *skb, struct urb *urb)
static void irda_usb_receive(struct urb *urb)
static void irda_usb_rx_defer_expired(unsigned long data)
static int irda_usb_is_receiving(struct irda_usb_cb *self)
#define STIR421X_PATCH_PRODUCT_VER     "Product Version: "
#define STIR421X_PATCH_STMP_TAG        "STMP"
#define STIR421X_PATCH_CODE_OFFSET     512
#define STIR421X_PATCH_END_OF_HDR_TAG  0x1A
#define STIR421X_PATCH_BLOCK_SIZE      1023
static int stir421x_fw_upload(struct irda_usb_cb *self,
const unsigned char *patch,
const unsigned int patch_len)
static int stir421x_patch_device(struct irda_usb_cb *self)
static int irda_usb_net_open(struct net_device *netdev)
static int irda_usb_net_close(struct net_device *netdev)
static int irda_usb_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static inline void irda_usb_init_qos(struct irda_usb_cb *self)
static const struct net_device_ops irda_usb_netdev_ops = ;
static inline int irda_usb_open(struct irda_usb_cb *self)
static inline void irda_usb_close(struct irda_usb_cb *self)
static inline int irda_usb_parse_endpoints(struct irda_usb_cb *self, struct usb_host_endpoint *endpoint, int ennum)
static inline void irda_usb_dump_class_desc(struct irda_class_desc *desc)
static inline struct irda_class_desc *irda_usb_find_class_desc(struct usb_interface *intf)
static int irda_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void irda_usb_disconnect(struct usb_interface *intf)
static int irda_usb_suspend(struct usb_interface *intf, pm_message_t message)
static int irda_usb_resume(struct usb_interface *intf)
static struct usb_driver irda_driver = ;
static int __init usb_irda_init(void)
module_init(usb_irda_init);
static void __exit usb_irda_cleanup(void)
module_exit(usb_irda_cleanup);
module_param(qos_mtt_bits, int, 0);
MODULE_PARM_DESC(qos_mtt_bits, "Minimum Turn Time");
MODULE_AUTHOR("Roman Weissgaerber <weissg@vienna.at>, Dag Brattli <dag@brattli.net>, Jean Tourrilhes <jt@hpl.hp.com> and Nick Fedchik <nick@fedchik.org.ua>");
MODULE_DESCRIPTION("IrDA-USB Dongle Driver");
MODULE_LICENSE("GPL");

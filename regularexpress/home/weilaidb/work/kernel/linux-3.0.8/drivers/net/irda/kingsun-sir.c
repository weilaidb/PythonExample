#define KING_VENDOR_ID 0x07c0
#define KING_PRODUCT_ID 0x4200
static struct usb_device_id dongles[] = ;
MODULE_DEVICE_TABLE(usb, dongles);
#define KINGSUN_MTT 0x07
#define KINGSUN_FIFO_SIZE		4096
#define KINGSUN_EP_IN			0
#define KINGSUN_EP_OUT			1
struct kingsun_cb ;
static void kingsun_send_irq(struct urb *urb)
static netdev_tx_t kingsun_hard_xmit(struct sk_buff *skb,
struct net_device *netdev)
static void kingsun_rcv_irq(struct urb *urb)
static int kingsun_net_open(struct net_device *netdev)
static int kingsun_net_close(struct net_device *netdev)
static int kingsun_net_ioctl(struct net_device *netdev, struct ifreq *rq,
int cmd)
static const struct net_device_ops kingsun_ops = ;
static int kingsun_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void kingsun_disconnect(struct usb_interface *intf)
static int kingsun_suspend(struct usb_interface *intf, pm_message_t message)
static int kingsun_resume(struct usb_interface *intf)
static struct usb_driver irda_driver = ;
static int __init kingsun_init(void)
module_init(kingsun_init);
static void __exit kingsun_cleanup(void)
module_exit(kingsun_cleanup);
MODULE_AUTHOR("Alex Villacís Lasso <a_villacis@palosanto.com>");
MODULE_DESCRIPTION("IrDA-USB Dongle Driver for KingSun/DonShine");
MODULE_LICENSE("GPL");

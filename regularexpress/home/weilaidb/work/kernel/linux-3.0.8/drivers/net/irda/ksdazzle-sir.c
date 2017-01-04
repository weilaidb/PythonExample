#define KSDAZZLE_VENDOR_ID 0x07d0
#define KSDAZZLE_PRODUCT_ID 0x4100
static struct usb_device_id dongles[] = ;
MODULE_DEVICE_TABLE(usb, dongles);
#define KINGSUN_MTT 0x07
#define KINGSUN_REQ_RECV 0x01
#define KINGSUN_REQ_SEND 0x09
#define KINGSUN_SND_FIFO_SIZE    2048
#define KINGSUN_RCV_MAX 2048
struct ksdazzle_speedparams  __packed;
#define KS_DATA_5_BITS 0x00
#define KS_DATA_6_BITS 0x01
#define KS_DATA_7_BITS 0x02
#define KS_DATA_8_BITS 0x03
#define KS_STOP_BITS_1 0x00
#define KS_STOP_BITS_2 0x08
#define KS_PAR_DISABLE    0x00
#define KS_PAR_EVEN    0x10
#define KS_PAR_ODD    0x30
#define KS_RESET    0x80
#define KINGSUN_EP_IN			0
#define KINGSUN_EP_OUT			1
struct ksdazzle_cb ;
static void ksdazzle_speed_irq(struct urb *urb)
static int ksdazzle_change_speed(struct ksdazzle_cb *kingsun, unsigned speed)
static void ksdazzle_send_irq(struct urb *urb);
static int ksdazzle_submit_tx_fragment(struct ksdazzle_cb *kingsun)
static void ksdazzle_send_irq(struct urb *urb)
static netdev_tx_t ksdazzle_hard_xmit(struct sk_buff *skb,
struct net_device *netdev)
static void ksdazzle_rcv_irq(struct urb *urb)
static int ksdazzle_net_open(struct net_device *netdev)
static int ksdazzle_net_close(struct net_device *netdev)
static int ksdazzle_net_ioctl(struct net_device *netdev, struct ifreq *rq,
int cmd)
static const struct net_device_ops ksdazzle_ops = ;
static int ksdazzle_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void ksdazzle_disconnect(struct usb_interface *intf)
static int ksdazzle_suspend(struct usb_interface *intf, pm_message_t message)
static int ksdazzle_resume(struct usb_interface *intf)
static struct usb_driver irda_driver = ;
static int __init ksdazzle_init(void)
module_init(ksdazzle_init);
static void __exit ksdazzle_cleanup(void)
module_exit(ksdazzle_cleanup);
MODULE_AUTHOR("Alex Villacís Lasso <a_villacis@palosanto.com>");
MODULE_DESCRIPTION("IrDA-USB Dongle Driver for KingSun Dazzle");
MODULE_LICENSE("GPL");

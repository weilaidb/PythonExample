#define KS959_VENDOR_ID 0x07d0
#define KS959_PRODUCT_ID 0x4959
static struct usb_device_id dongles[] = ;
MODULE_DEVICE_TABLE(usb, dongles);
#define KINGSUN_MTT 0x07
#define KINGSUN_REQ_RECV 0x01
#define KINGSUN_REQ_SEND 0x09
#define KINGSUN_RCV_FIFO_SIZE    2048
#define KINGSUN_SND_FIFO_SIZE    2048
#define KINGSUN_SND_PACKET_SIZE    256
struct ks959_speedparams  __packed;
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
struct ks959_cb ;
static unsigned int obfuscate_tx_buffer(const __u8 * buf_cleartext,
unsigned int len_cleartext,
__u8 * buf_xoredtext,
unsigned int len_maxbuf)
static void ks959_speed_irq(struct urb *urb)
static int ks959_change_speed(struct ks959_cb *kingsun, unsigned speed)
static void ks959_send_irq(struct urb *urb);
static int ks959_submit_tx_fragment(struct ks959_cb *kingsun)
static void ks959_send_irq(struct urb *urb)
static netdev_tx_t ks959_hard_xmit(struct sk_buff *skb,
struct net_device *netdev)
static void ks959_rcv_irq(struct urb *urb)
static int ks959_net_open(struct net_device *netdev)
static int ks959_net_close(struct net_device *netdev)
static int ks959_net_ioctl(struct net_device *netdev, struct ifreq *rq, int cmd)
static const struct net_device_ops ks959_ops = ;
static int ks959_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void ks959_disconnect(struct usb_interface *intf)
static int ks959_suspend(struct usb_interface *intf, pm_message_t message)
static int ks959_resume(struct usb_interface *intf)
static struct usb_driver irda_driver = ;
static int __init ks959_init(void)
module_init(ks959_init);
static void __exit ks959_cleanup(void)
module_exit(ks959_cleanup);
MODULE_AUTHOR("Alex Villacís Lasso <a_villacis@palosanto.com>");
MODULE_DESCRIPTION("IrDA-USB Dongle Driver for KingSun KS-959");
MODULE_LICENSE("GPL");

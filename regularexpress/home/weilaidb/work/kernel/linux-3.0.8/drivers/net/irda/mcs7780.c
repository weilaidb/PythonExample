#define MCS_VENDOR_ID 0x9710
#define MCS_PRODUCT_ID 0x7780
static struct usb_device_id mcs_table[] = ;
MODULE_AUTHOR("Brian Pugh <bpugh@cs.pdx.edu>");
MODULE_DESCRIPTION("IrDA-USB Dongle Driver for MosChip MCS7780");
MODULE_VERSION("0.3alpha");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(usb, mcs_table);
static int qos_mtt_bits = 0x07 ;
module_param(qos_mtt_bits, int, 0);
MODULE_PARM_DESC(qos_mtt_bits, "Minimum Turn Time");
static int receive_mode = 0x1;
module_param(receive_mode, int, 0);
MODULE_PARM_DESC(receive_mode,
"Receive mode of the device (1:fast, 0:slow, default:1)");
static int sir_tweak = 1;
module_param(sir_tweak, int, 0444);
MODULE_PARM_DESC(sir_tweak,
"Default pulse width (1:1.6us, 0:3/16 bit, default:1).");
static int transceiver_type = MCS_TSC_VISHAY;
module_param(transceiver_type, int, 0444);
MODULE_PARM_DESC(transceiver_type, "IR transceiver type, see mcs7780.h.");
static struct usb_driver mcs_driver = ;
static __u16 mcs_speed_set[16] = ;
static int mcs_set_reg(struct mcs_cb *mcs, __u16 reg, __u16 val)
static int mcs_get_reg(struct mcs_cb *mcs, __u16 reg, __u16 * val)
static inline int mcs_setup_transceiver_vishay(struct mcs_cb *mcs)
static inline int mcs_setup_transceiver_agilent(struct mcs_cb *mcs)
static inline int mcs_setup_transceiver_sharp(struct mcs_cb *mcs)
static inline int mcs_setup_transceiver(struct mcs_cb *mcs)
static inline int mcs_wrap_sir_skb(struct sk_buff *skb, __u8 * buf)
static unsigned mcs_wrap_fir_skb(const struct sk_buff *skb, __u8 *buf)
static unsigned mcs_wrap_mir_skb(const struct sk_buff *skb, __u8 *buf)
static void mcs_unwrap_mir(struct mcs_cb *mcs, __u8 *buf, int len)
static void mcs_unwrap_fir(struct mcs_cb *mcs, __u8 *buf, int len)
static inline int mcs_setup_urbs(struct mcs_cb *mcs)
static inline int mcs_receive_start(struct mcs_cb *mcs)
static inline int mcs_find_endpoints(struct mcs_cb *mcs,
struct usb_host_endpoint *ep, int epnum)
static void mcs_speed_work(struct work_struct *work)
static int mcs_speed_change(struct mcs_cb *mcs)
static int mcs_net_ioctl(struct net_device *netdev, struct ifreq *rq, int cmd)
static int mcs_net_close(struct net_device *netdev)
static int mcs_net_open(struct net_device *netdev)
static void mcs_receive_irq(struct urb *urb)
static void mcs_send_irq(struct urb *urb)
static netdev_tx_t mcs_hard_xmit(struct sk_buff *skb,
struct net_device *ndev)
static const struct net_device_ops mcs_netdev_ops = ;
static int mcs_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void mcs_disconnect(struct usb_interface *intf)
static int __init mcs_init(void)
module_init(mcs_init);
static void __exit mcs_exit(void)
module_exit(mcs_exit);

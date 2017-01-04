MODULE_AUTHOR("Stephen Hemminger <shemminger@linux-foundation.org>");
MODULE_DESCRIPTION("IrDA-USB Dongle Driver for SigmaTel STIr4200");
MODULE_LICENSE("GPL");
static int qos_mtt_bits = 0x07;
module_param(qos_mtt_bits, int, 0);
MODULE_PARM_DESC(qos_mtt_bits, "Minimum Turn Time");
static int rx_sensitivity = 1;
module_param(rx_sensitivity, int, 0);
MODULE_PARM_DESC(rx_sensitivity, "Set Receiver sensitivity (0-6, 0 is most sensitive)");
static int tx_power = 0;
module_param(tx_power, int, 0);
MODULE_PARM_DESC(tx_power, "Set Transmitter power (0-3, 0 is highest power)");
#define STIR_IRDA_HEADER  	4
#define CTRL_TIMEOUT		100
#define TRANSMIT_TIMEOUT	200
#define STIR_FIFO_SIZE		4096
#define FIFO_REGS_SIZE		3
enum FirChars ;
enum StirRequests ;
enum StirRegs ;
enum StirModeMask ;
enum StirPdclkMask ;
enum StirCtrl1Mask ;
enum StirCtrl2Mask ;
enum StirFifoCtlMask ;
enum StirDiagMask ;
enum StirTestMask ;
struct stir_cb ;
static struct usb_device_id dongles[] = ;
MODULE_DEVICE_TABLE(usb, dongles);
static int write_reg(struct stir_cb *stir, __u16 reg, __u8 value)
static inline int read_reg(struct stir_cb *stir, __u16 reg,
__u8 *data, __u16 count)
static inline int isfir(u32 speed)
static inline __u8 *stuff_fir(__u8 *p, __u8 c)
static unsigned wrap_fir_skb(const struct sk_buff *skb, __u8 *buf)
static unsigned wrap_sir_skb(struct sk_buff *skb, __u8 *buf)
static void fir_eof(struct stir_cb *stir)
static void stir_fir_chars(struct stir_cb *stir,
const __u8 *bytes, int len)
static void stir_sir_chars(struct stir_cb *stir,
const __u8 *bytes, int len)
static inline void unwrap_chars(struct stir_cb *stir,
const __u8 *bytes, int length)
static const struct  stir_modes[] = ;
static int change_speed(struct stir_cb *stir, unsigned speed)
static netdev_tx_t stir_hard_xmit(struct sk_buff *skb,
struct net_device *netdev)
static int fifo_txwait(struct stir_cb *stir, int space)
static void turnaround_delay(const struct stir_cb *stir, long us)
static int receive_start(struct stir_cb *stir)
static void receive_stop(struct stir_cb *stir)
static void stir_send(struct stir_cb *stir, struct sk_buff *skb)
static int stir_transmit_thread(void *arg)
static void stir_rcv_irq(struct urb *urb)
static int stir_net_open(struct net_device *netdev)
static int stir_net_close(struct net_device *netdev)
static int stir_net_ioctl(struct net_device *netdev, struct ifreq *rq, int cmd)
static const struct net_device_ops stir_netdev_ops = ;
static int stir_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void stir_disconnect(struct usb_interface *intf)
static int stir_suspend(struct usb_interface *intf, pm_message_t message)
static int stir_resume(struct usb_interface *intf)
static struct usb_driver irda_driver = ;
static int __init stir_init(void)
module_init(stir_init);
static void __exit stir_cleanup(void)
module_exit(stir_cleanup);

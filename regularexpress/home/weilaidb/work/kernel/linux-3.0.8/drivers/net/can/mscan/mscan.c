static struct can_bittiming_const mscan_bittiming_const = ;
struct mscan_state ;
static enum can_state state_map[] = ;
static int mscan_set_mode(struct net_device *dev, u8 mode)
static int mscan_start(struct net_device *dev)
static int mscan_restart(struct net_device *dev)
static netdev_tx_t mscan_start_xmit(struct sk_buff *skb, struct net_device *dev)
static enum can_state check_set_state(struct net_device *dev, u8 canrflg)
static void mscan_get_rx_frame(struct net_device *dev, struct can_frame *frame)
static void mscan_get_err_frame(struct net_device *dev, struct can_frame *frame,
u8 canrflg)
static int mscan_rx_poll(struct napi_struct *napi, int quota)
static irqreturn_t mscan_isr(int irq, void *dev_id)
static int mscan_do_set_mode(struct net_device *dev, enum can_mode mode)
static int mscan_do_set_bittiming(struct net_device *dev)
static int mscan_open(struct net_device *dev)
static int mscan_close(struct net_device *dev)
static const struct net_device_ops mscan_netdev_ops = ;
int register_mscandev(struct net_device *dev, int mscan_clksrc)
void unregister_mscandev(struct net_device *dev)
struct net_device *alloc_mscandev(void)
MODULE_AUTHOR("Andrey Volkov <avolkov@varma-el.com>");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("CAN port driver for a MSCAN based chips");

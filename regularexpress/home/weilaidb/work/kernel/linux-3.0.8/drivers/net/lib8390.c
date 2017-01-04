#define NS8390_CORE
#define BUG_83C690
#define ei_reset_8390 (ei_local->reset_8390)
#define ei_block_output (ei_local->block_output)
#define ei_block_input (ei_local->block_input)
#define ei_get_8390_hdr (ei_local->get_8390_hdr)
int ei_debug = 1;
static void ei_tx_intr(struct net_device *dev);
static void ei_tx_err(struct net_device *dev);
void ei_tx_timeout(struct net_device *dev);
static void ei_receive(struct net_device *dev);
static void ei_rx_overrun(struct net_device *dev);
static void NS8390_trigger_send(struct net_device *dev, unsigned int length,
int start_page);
static void do_set_multicast_list(struct net_device *dev);
static void __NS8390_init(struct net_device *dev, int startp);
static int __ei_open(struct net_device *dev)
static int __ei_close(struct net_device *dev)
static void __ei_tx_timeout(struct net_device *dev)
static netdev_tx_t __ei_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static irqreturn_t __ei_interrupt(int irq, void *dev_id)
static void __ei_poll(struct net_device *dev)
static void ei_tx_err(struct net_device *dev)
static void ei_tx_intr(struct net_device *dev)
static void ei_receive(struct net_device *dev)
static void ei_rx_overrun(struct net_device *dev)
static struct net_device_stats *__ei_get_stats(struct net_device *dev)
static inline void make_mc_bits(u8 *bits, struct net_device *dev)
static void do_set_multicast_list(struct net_device *dev)
static void __ei_set_multicast_list(struct net_device *dev)
static void ethdev_setup(struct net_device *dev)
static struct net_device *____alloc_ei_netdev(int size)
static void __NS8390_init(struct net_device *dev, int startp)
static void NS8390_trigger_send(struct net_device *dev, unsigned int length,
int start_page)

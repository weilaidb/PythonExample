#define DRV_MODULE_VERSION	"0.2"
static int nds_count;
static struct net_device **nds;
static int nds_open;
static void (*set_port_admin_status)(int port, int up);
static struct ixpdev_rx_desc * const rx_desc =
(struct ixpdev_rx_desc *)(IXP2000_SRAM0_VIRT_BASE + RX_BUF_DESC_BASE);
static struct ixpdev_tx_desc * const tx_desc =
(struct ixpdev_tx_desc *)(IXP2000_SRAM0_VIRT_BASE + TX_BUF_DESC_BASE);
static int tx_pointer;
static int ixpdev_xmit(struct sk_buff *skb, struct net_device *dev)
static int ixpdev_rx(struct net_device *dev, int processed, int budget)
static int ixpdev_poll(struct napi_struct *napi, int budget)
static void ixpdev_tx_complete(void)
static irqreturn_t ixpdev_interrupt(int irq, void *dev_id)
static void ixpdev_poll_controller(struct net_device *dev)
static int ixpdev_open(struct net_device *dev)
static int ixpdev_close(struct net_device *dev)
static struct net_device_stats *ixpdev_get_stats(struct net_device *dev)
static const struct net_device_ops ixpdev_netdev_ops = ;
struct net_device *ixpdev_alloc(int channel, int sizeof_priv)
int ixpdev_init(int __nds_count, struct net_device **__nds,
void (*__set_port_admin_status)(int port, int up))
void ixpdev_deinit(void)

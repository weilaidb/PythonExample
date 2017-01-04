#define STMMAC_RESOURCE_NAME	"stmmaceth"
#define PHY_RESOURCE_NAME	"stmmacphy"
#undef STMMAC_DEBUG
#define DBG(nlevel, klevel, fmt, args...) \
((void)(netif_msg_##nlevel(priv) && \
printk(KERN_##klevel fmt, ## args)))
#define DBG(nlevel, klevel, fmt, args...) do  while (0)
#undef STMMAC_RX_DEBUG
#define RX_DBG(fmt, args...)  printk(fmt, ## args)
#define RX_DBG(fmt, args...)  do  while (0)
#undef STMMAC_XMIT_DEBUG
#define TX_DBG(fmt, args...)  printk(fmt, ## args)
#define TX_DBG(fmt, args...)  do  while (0)
#define STMMAC_ALIGN(x)	L1_CACHE_ALIGN(x)
#define JUMBO_LEN	9000
#define TX_TIMEO 5000
static int watchdog = TX_TIMEO;
module_param(watchdog, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(watchdog, "Transmit timeout in milliseconds");
static int debug = -1;
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Message Level (0: no output, 16: all)");
static int phyaddr = -1;
module_param(phyaddr, int, S_IRUGO);
MODULE_PARM_DESC(phyaddr, "Physical device address");
#define DMA_TX_SIZE 256
static int dma_txsize = DMA_TX_SIZE;
module_param(dma_txsize, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(dma_txsize, "Number of descriptors in the TX list");
#define DMA_RX_SIZE 256
static int dma_rxsize = DMA_RX_SIZE;
module_param(dma_rxsize, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(dma_rxsize, "Number of descriptors in the RX list");
static int flow_ctrl = FLOW_OFF;
module_param(flow_ctrl, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(flow_ctrl, "Flow control ability [on/off]");
static int pause = PAUSE_TIME;
module_param(pause, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(pause, "Flow Control Pause Time");
#define TC_DEFAULT 64
static int tc = TC_DEFAULT;
module_param(tc, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(tc, "DMA threshold control value");
#define DEFAULT_PERIODIC_RATE	256
static int tmrate = DEFAULT_PERIODIC_RATE;
module_param(tmrate, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(tmrate, "External timer freq. (default: 256Hz)");
#define DMA_BUFFER_SIZE	BUF_SIZE_2KiB
static int buf_sz = DMA_BUFFER_SIZE;
module_param(buf_sz, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(buf_sz, "DMA buffer size");
static const u32 default_msg_level = (NETIF_MSG_DRV | NETIF_MSG_PROBE |
NETIF_MSG_LINK | NETIF_MSG_IFUP |
NETIF_MSG_IFDOWN | NETIF_MSG_TIMER);
static irqreturn_t stmmac_interrupt(int irq, void *dev_id);
static void stmmac_verify_args(void)
#if defined(STMMAC_XMIT_DEBUG) || defined(STMMAC_RX_DEBUG)
static void print_pkt(unsigned char *buf, int len)
#define STMMAC_TX_THRESH(x)	(x->dma_tx_size/4)
static inline u32 stmmac_tx_avail(struct stmmac_priv *priv)
static inline void stmmac_hw_fix_mac_speed(struct stmmac_priv *priv)
static void stmmac_adjust_link(struct net_device *dev)
static int stmmac_init_phy(struct net_device *dev)
static inline void stmmac_enable_mac(void __iomem *ioaddr)
static inline void stmmac_disable_mac(void __iomem *ioaddr)
static void display_ring(struct dma_desc *p, int size)
static void init_dma_desc_rings(struct net_device *dev)
static void dma_free_rx_skbufs(struct stmmac_priv *priv)
static void dma_free_tx_skbufs(struct stmmac_priv *priv)
static void free_dma_desc_resources(struct stmmac_priv *priv)
static void stmmac_dma_operation_mode(struct stmmac_priv *priv)
static void stmmac_tx(struct stmmac_priv *priv)
static inline void stmmac_enable_irq(struct stmmac_priv *priv)
static inline void stmmac_disable_irq(struct stmmac_priv *priv)
static int stmmac_has_work(struct stmmac_priv *priv)
static inline void _stmmac_schedule(struct stmmac_priv *priv)
void stmmac_schedule(struct net_device *dev)
static void stmmac_no_timer_started(unsigned int x)
;
static void stmmac_no_timer_stopped(void)
;
static void stmmac_tx_err(struct stmmac_priv *priv)
static void stmmac_dma_interrupt(struct stmmac_priv *priv)
static int stmmac_open(struct net_device *dev)
static int stmmac_release(struct net_device *dev)
static unsigned int stmmac_handle_jumbo_frames(struct sk_buff *skb,
struct net_device *dev,
int csum_insertion)
static netdev_tx_t stmmac_xmit(struct sk_buff *skb, struct net_device *dev)
static inline void stmmac_rx_refill(struct stmmac_priv *priv)
static int stmmac_rx(struct stmmac_priv *priv, int limit)
static int stmmac_poll(struct napi_struct *napi, int budget)
static void stmmac_tx_timeout(struct net_device *dev)
static int stmmac_config(struct net_device *dev, struct ifmap *map)
static void stmmac_multicast_list(struct net_device *dev)
static int stmmac_change_mtu(struct net_device *dev, int new_mtu)
static u32 stmmac_fix_features(struct net_device *dev, u32 features)
static irqreturn_t stmmac_interrupt(int irq, void *dev_id)
static void stmmac_poll_controller(struct net_device *dev)
static int stmmac_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void stmmac_vlan_rx_register(struct net_device *dev,
struct vlan_group *grp)
static const struct net_device_ops stmmac_netdev_ops = ;
static int stmmac_probe(struct net_device *dev)
static int stmmac_mac_device_setup(struct net_device *dev)
static int stmmacphy_dvr_probe(struct platform_device *pdev)
static int stmmacphy_dvr_remove(struct platform_device *pdev)
static struct platform_driver stmmacphy_driver = ;
static int stmmac_associate_phy(struct device *dev, void *data)
static int stmmac_dvr_probe(struct platform_device *pdev)
static int stmmac_dvr_remove(struct platform_device *pdev)
static int stmmac_suspend(struct device *dev)
static int stmmac_resume(struct device *dev)
static int stmmac_freeze(struct device *dev)
static int stmmac_restore(struct device *dev)
static const struct dev_pm_ops stmmac_pm_ops = ;
static const struct dev_pm_ops stmmac_pm_ops;
static struct platform_driver stmmac_driver = ;
static int __init stmmac_init_module(void)
static void __exit stmmac_cleanup_module(void)
static int __init stmmac_cmdline_opt(char *str)
__setup("stmmaceth=", stmmac_cmdline_opt);
module_init(stmmac_init_module);
module_exit(stmmac_cleanup_module);
MODULE_DESCRIPTION("STMMAC 10/100/1000 Ethernet driver");
MODULE_AUTHOR("Giuseppe Cavallaro <peppe.cavallaro@st.com>");
MODULE_LICENSE("GPL");

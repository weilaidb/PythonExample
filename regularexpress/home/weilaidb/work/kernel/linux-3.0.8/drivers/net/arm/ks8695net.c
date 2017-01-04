#define MODULENAME	"ks8695_ether"
#define MODULEVERSION	"1.02"
static int watchdog = 5000;
struct rx_ring_desc ;
struct tx_ring_desc ;
struct ks8695_skbuff ;
#define MAX_TX_DESC 8
#define MAX_TX_DESC_MASK 0x7
#define MAX_RX_DESC 16
#define MAX_RX_DESC_MASK 0xf
#define NAPI_WEIGHT   64
#define MAX_RXBUF_SIZE 0x700
#define TX_RING_DMA_SIZE (sizeof(struct tx_ring_desc) * MAX_TX_DESC)
#define RX_RING_DMA_SIZE (sizeof(struct rx_ring_desc) * MAX_RX_DESC)
#define RING_DMA_SIZE (TX_RING_DMA_SIZE + RX_RING_DMA_SIZE)
enum ks8695_dtype ;
struct ks8695_priv ;
static inline u32
ks8695_readreg(struct ks8695_priv *ksp, int reg)
static inline void
ks8695_writereg(struct ks8695_priv *ksp, int reg, u32 value)
static const char *
ks8695_port_type(struct ks8695_priv *ksp)
static void
ks8695_update_mac(struct ks8695_priv *ksp)
static void
ks8695_refill_rxbuffers(struct ks8695_priv *ksp)
#define KS8695_NR_ADDRESSES	16
static void
ks8695_init_partial_multicast(struct ks8695_priv *ksp,
struct net_device *ndev)
static irqreturn_t
ks8695_tx_irq(int irq, void *dev_id)
static inline u32 ks8695_get_rx_enable_bit(struct ks8695_priv *ksp)
static irqreturn_t
ks8695_rx_irq(int irq, void *dev_id)
static int ks8695_rx(struct ks8695_priv *ksp, int budget)
static int ks8695_poll(struct napi_struct *napi, int budget)
static irqreturn_t
ks8695_link_irq(int irq, void *dev_id)
static void
ks8695_reset(struct ks8695_priv *ksp)
static void
ks8695_shutdown(struct ks8695_priv *ksp)
static int
ks8695_setup_irq(int irq, const char *irq_name,
irq_handler_t handler, struct net_device *ndev)
static int
ks8695_init_net(struct ks8695_priv *ksp)
static void
ks8695_release_device(struct ks8695_priv *ksp)
static u32
ks8695_get_msglevel(struct net_device *ndev)
static void
ks8695_set_msglevel(struct net_device *ndev, u32 value)
static int
ks8695_wan_get_settings(struct net_device *ndev, struct ethtool_cmd *cmd)
static int
ks8695_wan_set_settings(struct net_device *ndev, struct ethtool_cmd *cmd)
static int
ks8695_wan_nwayreset(struct net_device *ndev)
static void
ks8695_wan_get_pause(struct net_device *ndev, struct ethtool_pauseparam *param)
static void
ks8695_get_drvinfo(struct net_device *ndev, struct ethtool_drvinfo *info)
static const struct ethtool_ops ks8695_ethtool_ops = ;
static const struct ethtool_ops ks8695_wan_ethtool_ops = ;
static int
ks8695_set_mac(struct net_device *ndev, void *addr)
static void
ks8695_set_multicast(struct net_device *ndev)
static void
ks8695_timeout(struct net_device *ndev)
static int
ks8695_start_xmit(struct sk_buff *skb, struct net_device *ndev)
static int
ks8695_stop(struct net_device *ndev)
static int
ks8695_open(struct net_device *ndev)
static void __devinit
ks8695_init_switch(struct ks8695_priv *ksp)
static void __devinit
ks8695_init_wan_phy(struct ks8695_priv *ksp)
static const struct net_device_ops ks8695_netdev_ops = ;
static int __devinit
ks8695_probe(struct platform_device *pdev)
static int
ks8695_drv_suspend(struct platform_device *pdev, pm_message_t state)
static int
ks8695_drv_resume(struct platform_device *pdev)
static int __devexit
ks8695_drv_remove(struct platform_device *pdev)
static struct platform_driver ks8695_driver = ;
static int __init
ks8695_init(void)
static void __exit
ks8695_cleanup(void)
module_init(ks8695_init);
module_exit(ks8695_cleanup);
MODULE_AUTHOR("Simtec Electronics");
MODULE_DESCRIPTION("Micrel KS8695 (Centaur) Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" MODULENAME);
module_param(watchdog, int, 0400);
MODULE_PARM_DESC(watchdog, "transmit timeout in milliseconds");

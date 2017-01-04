#undef DEBUG
#define DRV_NAME "Gelic Network Driver"
#define DRV_VERSION "2.0"
MODULE_AUTHOR("SCE Inc.");
MODULE_DESCRIPTION("Gelic Network driver");
MODULE_LICENSE("GPL");
static inline void gelic_card_enable_rxdmac(struct gelic_card *card);
static inline void gelic_card_disable_rxdmac(struct gelic_card *card);
static inline void gelic_card_disable_txdmac(struct gelic_card *card);
static inline void gelic_card_reset_chain(struct gelic_card *card,
struct gelic_descr_chain *chain,
struct gelic_descr *start_descr);
int gelic_card_set_irq_mask(struct gelic_card *card, u64 mask)
static inline void gelic_card_rx_irq_on(struct gelic_card *card)
static inline void gelic_card_rx_irq_off(struct gelic_card *card)
static void gelic_card_get_ether_port_status(struct gelic_card *card,
int inform)
static int gelic_card_set_link_mode(struct gelic_card *card, int mode)
void gelic_card_up(struct gelic_card *card)
void gelic_card_down(struct gelic_card *card)
static enum gelic_descr_dma_status
gelic_descr_get_status(struct gelic_descr *descr)
static void gelic_descr_set_status(struct gelic_descr *descr,
enum gelic_descr_dma_status status)
static void gelic_card_free_chain(struct gelic_card *card,
struct gelic_descr *descr_in)
static int __devinit gelic_card_init_chain(struct gelic_card *card,
struct gelic_descr_chain *chain,
struct gelic_descr *start_descr,
int no)
static void gelic_card_reset_chain(struct gelic_card *card,
struct gelic_descr_chain *chain,
struct gelic_descr *start_descr)
static int gelic_descr_prepare_rx(struct gelic_card *card,
struct gelic_descr *descr)
static void gelic_card_release_rx_chain(struct gelic_card *card)
static int gelic_card_fill_rx_chain(struct gelic_card *card)
static int __devinit gelic_card_alloc_rx_skbs(struct gelic_card *card)
static void gelic_descr_release_tx(struct gelic_card *card,
struct gelic_descr *descr)
static void gelic_card_stop_queues(struct gelic_card *card)
static void gelic_card_wake_queues(struct gelic_card *card)
static void gelic_card_release_tx_chain(struct gelic_card *card, int stop)
void gelic_net_set_multi(struct net_device *netdev)
static inline void gelic_card_enable_rxdmac(struct gelic_card *card)
static inline void gelic_card_disable_rxdmac(struct gelic_card *card)
static inline void gelic_card_disable_txdmac(struct gelic_card *card)
int gelic_net_stop(struct net_device *netdev)
static struct gelic_descr *
gelic_card_get_next_tx_descr(struct gelic_card *card)
static void gelic_descr_set_tx_cmdstat(struct gelic_descr *descr,
struct sk_buff *skb)
static inline struct sk_buff *gelic_put_vlan_tag(struct sk_buff *skb,
unsigned short tag)
static int gelic_descr_prepare_tx(struct gelic_card *card,
struct gelic_descr *descr,
struct sk_buff *skb)
static int gelic_card_kick_txdma(struct gelic_card *card,
struct gelic_descr *descr)
int gelic_net_xmit(struct sk_buff *skb, struct net_device *netdev)
static void gelic_net_pass_skb_up(struct gelic_descr *descr,
struct gelic_card *card,
struct net_device *netdev)
static int gelic_card_decode_one_descr(struct gelic_card *card)
static int gelic_net_poll(struct napi_struct *napi, int budget)
int gelic_net_change_mtu(struct net_device *netdev, int new_mtu)
static irqreturn_t gelic_card_interrupt(int irq, void *ptr)
void gelic_net_poll_controller(struct net_device *netdev)
int gelic_net_open(struct net_device *netdev)
void gelic_net_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *info)
static int gelic_ether_get_settings(struct net_device *netdev,
struct ethtool_cmd *cmd)
static int gelic_ether_set_settings(struct net_device *netdev,
struct ethtool_cmd *cmd)
static void gelic_net_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int gelic_net_set_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static const struct ethtool_ops gelic_ether_ethtool_ops = ;
static void gelic_net_tx_timeout_task(struct work_struct *work)
void gelic_net_tx_timeout(struct net_device *netdev)
static const struct net_device_ops gelic_netdevice_ops = ;
static void __devinit gelic_ether_setup_netdev_ops(struct net_device *netdev,
struct napi_struct *napi)
int __devinit gelic_net_setup_netdev(struct net_device *netdev,
struct gelic_card *card)
#define GELIC_ALIGN (32)
static struct gelic_card * __devinit gelic_alloc_card_net(struct net_device **netdev)
static void __devinit gelic_card_get_vlan_info(struct gelic_card *card)
static int __devinit ps3_gelic_driver_probe(struct ps3_system_bus_device *dev)
static int ps3_gelic_driver_remove(struct ps3_system_bus_device *dev)
static struct ps3_system_bus_driver ps3_gelic_driver = ;
static int __init ps3_gelic_driver_init (void)
static void __exit ps3_gelic_driver_exit (void)
module_init(ps3_gelic_driver_init);
module_exit(ps3_gelic_driver_exit);
MODULE_ALIAS(PS3_MODULE_ALIAS_GELIC);

#define TX_TIMEOUT      (1*HZ)
#undef BRIEF_GFAR_ERRORS
#undef VERBOSE_GFAR_ERRORS
const char gfar_driver_name[] = "Gianfar Ethernet";
const char gfar_driver_version[] = "1.3";
static int gfar_enet_open(struct net_device *dev);
static int gfar_start_xmit(struct sk_buff *skb, struct net_device *dev);
static void gfar_reset_task(struct work_struct *work);
static void gfar_timeout(struct net_device *dev);
static int gfar_close(struct net_device *dev);
struct sk_buff *gfar_new_skb(struct net_device *dev);
static void gfar_new_rxbdp(struct gfar_priv_rx_q *rx_queue, struct rxbd8 *bdp,
struct sk_buff *skb);
static int gfar_set_mac_address(struct net_device *dev);
static int gfar_change_mtu(struct net_device *dev, int new_mtu);
static irqreturn_t gfar_error(int irq, void *dev_id);
static irqreturn_t gfar_transmit(int irq, void *dev_id);
static irqreturn_t gfar_interrupt(int irq, void *dev_id);
static void adjust_link(struct net_device *dev);
static void init_registers(struct net_device *dev);
static int init_phy(struct net_device *dev);
static int gfar_probe(struct platform_device *ofdev);
static int gfar_remove(struct platform_device *ofdev);
static void free_skb_resources(struct gfar_private *priv);
static void gfar_set_multi(struct net_device *dev);
static void gfar_set_hash_for_addr(struct net_device *dev, u8 *addr);
static void gfar_configure_serdes(struct net_device *dev);
static int gfar_poll(struct napi_struct *napi, int budget);
static void gfar_netpoll(struct net_device *dev);
int gfar_clean_rx_ring(struct gfar_priv_rx_q *rx_queue, int rx_work_limit);
static int gfar_clean_tx_ring(struct gfar_priv_tx_q *tx_queue);
static int gfar_process_frame(struct net_device *dev, struct sk_buff *skb,
int amount_pull);
static void gfar_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp);
void gfar_halt(struct net_device *dev);
static void gfar_halt_nodisable(struct net_device *dev);
void gfar_start(struct net_device *dev);
static void gfar_clear_exact_match(struct net_device *dev);
static void gfar_set_mac_for_addr(struct net_device *dev, int num,
const u8 *addr);
static int gfar_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
MODULE_AUTHOR("Freescale Semiconductor, Inc");
MODULE_DESCRIPTION("Gianfar Ethernet Driver");
MODULE_LICENSE("GPL");
static void gfar_init_rxbdp(struct gfar_priv_rx_q *rx_queue, struct rxbd8 *bdp,
dma_addr_t buf)
static int gfar_init_bds(struct net_device *ndev)
static int gfar_alloc_skb_resources(struct net_device *ndev)
static void gfar_init_tx_rx_base(struct gfar_private *priv)
static void gfar_init_mac(struct net_device *ndev)
static struct net_device_stats *gfar_get_stats(struct net_device *dev)
static const struct net_device_ops gfar_netdev_ops = ;
void lock_rx_qs(struct gfar_private *priv)
void lock_tx_qs(struct gfar_private *priv)
void unlock_rx_qs(struct gfar_private *priv)
void unlock_tx_qs(struct gfar_private *priv)
static inline int gfar_uses_fcb(struct gfar_private *priv)
static void free_tx_pointers(struct gfar_private *priv)
static void free_rx_pointers(struct gfar_private *priv)
static void unmap_group_regs(struct gfar_private *priv)
static void disable_napi(struct gfar_private *priv)
static void enable_napi(struct gfar_private *priv)
static int gfar_parse_group(struct device_node *np,
struct gfar_private *priv, const char *model)
static int gfar_of_init(struct platform_device *ofdev, struct net_device **pdev)
static int gfar_hwtstamp_ioctl(struct net_device *netdev,
struct ifreq *ifr, int cmd)
static int gfar_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static unsigned int reverse_bitmap(unsigned int bit_map, unsigned int max_qs)
static u32 cluster_entry_per_class(struct gfar_private *priv, u32 rqfar,
u32 class)
static void gfar_init_filer_table(struct gfar_private *priv)
static void gfar_detect_errata(struct gfar_private *priv)
static int gfar_probe(struct platform_device *ofdev)
static int gfar_remove(struct platform_device *ofdev)
static int gfar_suspend(struct device *dev)
static int gfar_resume(struct device *dev)
static int gfar_restore(struct device *dev)
static struct dev_pm_ops gfar_pm_ops = ;
#define GFAR_PM_OPS (&gfar_pm_ops)
#define GFAR_PM_OPS NULL
static phy_interface_t gfar_get_interface(struct net_device *dev)
static int init_phy(struct net_device *dev)
static void gfar_configure_serdes(struct net_device *dev)
static void init_registers(struct net_device *dev)
static int __gfar_is_rx_idle(struct gfar_private *priv)
static void gfar_halt_nodisable(struct net_device *dev)
void gfar_halt(struct net_device *dev)
static void free_grp_irqs(struct gfar_priv_grp *grp)
void stop_gfar(struct net_device *dev)
static void free_skb_tx_queue(struct gfar_priv_tx_q *tx_queue)
static void free_skb_rx_queue(struct gfar_priv_rx_q *rx_queue)
static void free_skb_resources(struct gfar_private *priv)
void gfar_start(struct net_device *dev)
void gfar_configure_coalescing(struct gfar_private *priv,
unsigned long tx_mask, unsigned long rx_mask)
static int register_grp_irqs(struct gfar_priv_grp *grp)
int startup_gfar(struct net_device *ndev)
static int gfar_enet_open(struct net_device *dev)
static inline struct txfcb *gfar_add_fcb(struct sk_buff *skb)
static inline void gfar_tx_checksum(struct sk_buff *skb, struct txfcb *fcb)
void inline gfar_tx_vlan(struct sk_buff *skb, struct txfcb *fcb)
static inline struct txbd8 *skip_txbd(struct txbd8 *bdp, int stride,
struct txbd8 *base, int ring_size)
static inline struct txbd8 *next_txbd(struct txbd8 *bdp, struct txbd8 *base,
int ring_size)
static int gfar_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int gfar_close(struct net_device *dev)
static int gfar_set_mac_address(struct net_device *dev)
void gfar_check_rx_parser_mode(struct gfar_private *priv)
static void gfar_vlan_rx_register(struct net_device *dev,
struct vlan_group *grp)
static int gfar_change_mtu(struct net_device *dev, int new_mtu)
static void gfar_reset_task(struct work_struct *work)
static void gfar_timeout(struct net_device *dev)
static void gfar_align_skb(struct sk_buff *skb)
static int gfar_clean_tx_ring(struct gfar_priv_tx_q *tx_queue)
static void gfar_schedule_cleanup(struct gfar_priv_grp *gfargrp)
static irqreturn_t gfar_transmit(int irq, void *grp_id)
static void gfar_new_rxbdp(struct gfar_priv_rx_q *rx_queue, struct rxbd8 *bdp,
struct sk_buff *skb)
static struct sk_buff * gfar_alloc_skb(struct net_device *dev)
struct sk_buff * gfar_new_skb(struct net_device *dev)
static inline void count_errors(unsigned short status, struct net_device *dev)
irqreturn_t gfar_receive(int irq, void *grp_id)
static inline void gfar_rx_checksum(struct sk_buff *skb, struct rxfcb *fcb)
static int gfar_process_frame(struct net_device *dev, struct sk_buff *skb,
int amount_pull)
int gfar_clean_rx_ring(struct gfar_priv_rx_q *rx_queue, int rx_work_limit)
static int gfar_poll(struct napi_struct *napi, int budget)
static void gfar_netpoll(struct net_device *dev)
static irqreturn_t gfar_interrupt(int irq, void *grp_id)
static void adjust_link(struct net_device *dev)
static void gfar_set_multi(struct net_device *dev)
static void gfar_clear_exact_match(struct net_device *dev)
static void gfar_set_hash_for_addr(struct net_device *dev, u8 *addr)
static void gfar_set_mac_for_addr(struct net_device *dev, int num,
const u8 *addr)
static irqreturn_t gfar_error(int irq, void *grp_id)
static struct of_device_id gfar_match[] =
;
MODULE_DEVICE_TABLE(of, gfar_match);
static struct platform_driver gfar_driver = ;
static int __init gfar_init(void)
static void __exit gfar_exit(void)
module_init(gfar_init);
module_exit(gfar_exit);

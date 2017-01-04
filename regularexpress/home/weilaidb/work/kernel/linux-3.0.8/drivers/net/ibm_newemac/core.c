#define DRV_NAME        "emac"
#define DRV_VERSION     "3.54"
#define DRV_DESC        "PPC 4xx OCP EMAC driver"
MODULE_DESCRIPTION(DRV_DESC);
MODULE_AUTHOR
("Eugene Surovegin <eugene.surovegin@zultys.com> or <ebs@ebshome.net>");
MODULE_LICENSE("GPL");
#define cacheable_memcpy(d,s,n) memcpy((d),(s),(n))
#define EMAC_TX_WAKEUP_THRESH		(NUM_TX_BUFF / 4)
#define EMAC_RX_COPY_THRESH		CONFIG_IBM_NEW_EMAC_RX_COPY_THRESHOLD
static u32 busy_phy_map;
static DEFINE_MUTEX(emac_phy_map_lock);
static DECLARE_WAIT_QUEUE_HEAD(emac_probe_wait);
#define EMAC_BOOT_LIST_SIZE	4
static struct device_node *emac_boot_list[EMAC_BOOT_LIST_SIZE];
#define EMAC_PROBE_DEP_TIMEOUT	(HZ * 5)
static inline void emac_report_timeout_error(struct emac_instance *dev,
const char *error)
static inline void emac_rx_clk_tx(struct emac_instance *dev)
static inline void emac_rx_clk_default(struct emac_instance *dev)
#define PHY_POLL_LINK_ON	HZ
#define PHY_POLL_LINK_OFF	(HZ / 5)
#define STOP_TIMEOUT_10		1230
#define STOP_TIMEOUT_100	124
#define STOP_TIMEOUT_1000	13
#define STOP_TIMEOUT_1000_JUMBO	73
static unsigned char default_mcast_addr[] = ;
static const char emac_stats_keys[EMAC_ETHTOOL_STATS_COUNT][ETH_GSTRING_LEN] = ;
static irqreturn_t emac_irq(int irq, void *dev_instance);
static void emac_clean_tx_ring(struct emac_instance *dev);
static void __emac_set_multicast_list(struct emac_instance *dev);
static inline int emac_phy_supports_gige(int phy_mode)
static inline int emac_phy_gpcs(int phy_mode)
static inline void emac_tx_enable(struct emac_instance *dev)
static void emac_tx_disable(struct emac_instance *dev)
static void emac_rx_enable(struct emac_instance *dev)
static void emac_rx_disable(struct emac_instance *dev)
static inline void emac_netif_stop(struct emac_instance *dev)
static inline void emac_netif_start(struct emac_instance *dev)
static inline void emac_rx_disable_async(struct emac_instance *dev)
static int emac_reset(struct emac_instance *dev)
static void emac_hash_mc(struct emac_instance *dev)
static inline u32 emac_iff2rmr(struct net_device *ndev)
static u32 __emac_calc_base_mr1(struct emac_instance *dev, int tx_size, int rx_size)
static u32 __emac4_calc_base_mr1(struct emac_instance *dev, int tx_size, int rx_size)
static u32 emac_calc_base_mr1(struct emac_instance *dev, int tx_size, int rx_size)
static inline u32 emac_calc_trtr(struct emac_instance *dev, unsigned int size)
static inline u32 emac_calc_rwmr(struct emac_instance *dev,
unsigned int low, unsigned int high)
static int emac_configure(struct emac_instance *dev)
static void emac_reinitialize(struct emac_instance *dev)
static void emac_full_tx_reset(struct emac_instance *dev)
static void emac_reset_work(struct work_struct *work)
static void emac_tx_timeout(struct net_device *ndev)
static inline int emac_phy_done(struct emac_instance *dev, u32 stacr)
;
static int __emac_mdio_read(struct emac_instance *dev, u8 id, u8 reg)
static void __emac_mdio_write(struct emac_instance *dev, u8 id, u8 reg,
u16 val)
static int emac_mdio_read(struct net_device *ndev, int id, int reg)
static void emac_mdio_write(struct net_device *ndev, int id, int reg, int val)
static void __emac_set_multicast_list(struct emac_instance *dev)
static void emac_set_multicast_list(struct net_device *ndev)
static int emac_resize_rx_ring(struct emac_instance *dev, int new_mtu)
static int emac_change_mtu(struct net_device *ndev, int new_mtu)
static void emac_clean_tx_ring(struct emac_instance *dev)
static void emac_clean_rx_ring(struct emac_instance *dev)
static inline int emac_alloc_rx_skb(struct emac_instance *dev, int slot,
gfp_t flags)
static void emac_print_link_status(struct emac_instance *dev)
static int emac_open(struct net_device *ndev)
static void emac_link_timer(struct work_struct *work)
static void emac_force_link_update(struct emac_instance *dev)
static int emac_close(struct net_device *ndev)
static inline u16 emac_tx_csum(struct emac_instance *dev,
struct sk_buff *skb)
static inline int emac_xmit_finish(struct emac_instance *dev, int len)
static int emac_start_xmit(struct sk_buff *skb, struct net_device *ndev)
static inline int emac_xmit_split(struct emac_instance *dev, int slot,
u32 pd, int len, int last, u16 base_ctrl)
static int emac_start_xmit_sg(struct sk_buff *skb, struct net_device *ndev)
static void emac_parse_tx_error(struct emac_instance *dev, u16 ctrl)
static void emac_poll_tx(void *param)
static inline void emac_recycle_rx_skb(struct emac_instance *dev, int slot,
int len)
static void emac_parse_rx_error(struct emac_instance *dev, u16 ctrl)
static inline void emac_rx_csum(struct emac_instance *dev,
struct sk_buff *skb, u16 ctrl)
static inline int emac_rx_sg_append(struct emac_instance *dev, int slot)
static int emac_poll_rx(void *param, int budget)
static int emac_peek_rx(void *param)
static int emac_peek_rx_sg(void *param)
static void emac_rxde(void *param)
static irqreturn_t emac_irq(int irq, void *dev_instance)
static struct net_device_stats *emac_stats(struct net_device *ndev)
static struct mal_commac_ops emac_commac_ops = ;
static struct mal_commac_ops emac_commac_sg_ops = ;
static int emac_ethtool_get_settings(struct net_device *ndev,
struct ethtool_cmd *cmd)
static int emac_ethtool_set_settings(struct net_device *ndev,
struct ethtool_cmd *cmd)
static void emac_ethtool_get_ringparam(struct net_device *ndev,
struct ethtool_ringparam *rp)
static void emac_ethtool_get_pauseparam(struct net_device *ndev,
struct ethtool_pauseparam *pp)
static int emac_get_regs_len(struct emac_instance *dev)
static int emac_ethtool_get_regs_len(struct net_device *ndev)
static void *emac_dump_regs(struct emac_instance *dev, void *buf)
static void emac_ethtool_get_regs(struct net_device *ndev,
struct ethtool_regs *regs, void *buf)
static int emac_ethtool_nway_reset(struct net_device *ndev)
static int emac_ethtool_get_sset_count(struct net_device *ndev, int stringset)
static void emac_ethtool_get_strings(struct net_device *ndev, u32 stringset,
u8 * buf)
static void emac_ethtool_get_ethtool_stats(struct net_device *ndev,
struct ethtool_stats *estats,
u64 * tmp_stats)
static void emac_ethtool_get_drvinfo(struct net_device *ndev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops emac_ethtool_ops = ;
static int emac_ioctl(struct net_device *ndev, struct ifreq *rq, int cmd)
struct emac_depentry ;
#define	EMAC_DEP_MAL_IDX	0
#define	EMAC_DEP_ZMII_IDX	1
#define	EMAC_DEP_RGMII_IDX	2
#define	EMAC_DEP_TAH_IDX	3
#define	EMAC_DEP_MDIO_IDX	4
#define	EMAC_DEP_PREV_IDX	5
#define	EMAC_DEP_COUNT		6
static int __devinit emac_check_deps(struct emac_instance *dev,
struct emac_depentry *deps)
static void emac_put_deps(struct emac_instance *dev)
static int __devinit emac_of_bus_notify(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block emac_of_bus_notifier __devinitdata = ;
static int __devinit emac_wait_deps(struct emac_instance *dev)
static int __devinit emac_read_uint_prop(struct device_node *np, const char *name,
u32 *val, int fatal)
static int __devinit emac_init_phy(struct emac_instance *dev)
static int __devinit emac_init_config(struct emac_instance *dev)
static const struct net_device_ops emac_netdev_ops = ;
static const struct net_device_ops emac_gige_netdev_ops = ;
static int __devinit emac_probe(struct platform_device *ofdev)
static int __devexit emac_remove(struct platform_device *ofdev)
static struct of_device_id emac_match[] =
;
MODULE_DEVICE_TABLE(of, emac_match);
static struct platform_driver emac_driver = ;
static void __init emac_make_bootlist(void)
static int __init emac_init(void)
static void __exit emac_exit(void)
module_init(emac_init);
module_exit(emac_exit);

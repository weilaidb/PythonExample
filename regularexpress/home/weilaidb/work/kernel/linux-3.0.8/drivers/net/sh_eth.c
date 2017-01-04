#define SH_ETH_DEF_MSG_ENABLE \
(NETIF_MSG_LINK	| \
NETIF_MSG_TIMER	| \
NETIF_MSG_RX_ERR| \
NETIF_MSG_TX_ERR)
#if defined(CONFIG_CPU_SUBTYPE_SH7724)
#define SH_ETH_RESET_DEFAULT	1
static void sh_eth_set_duplex(struct net_device *ndev)
static void sh_eth_set_rate(struct net_device *ndev)
static struct sh_eth_cpu_data sh_eth_my_cpu_data = ;
#elif defined(CONFIG_CPU_SUBTYPE_SH7757)
#define SH_ETH_HAS_BOTH_MODULES	1
#define SH_ETH_HAS_TSU	1
static void sh_eth_set_duplex(struct net_device *ndev)
static void sh_eth_set_rate(struct net_device *ndev)
static struct sh_eth_cpu_data sh_eth_my_cpu_data = ;
#define SH_GIGA_ETH_BASE	0xfee00000
#define GIGA_MALR(port)		(SH_GIGA_ETH_BASE + 0x800 * (port) + 0x05c8)
#define GIGA_MAHR(port)		(SH_GIGA_ETH_BASE + 0x800 * (port) + 0x05c0)
static void sh_eth_chip_reset_giga(struct net_device *ndev)
static int sh_eth_is_gether(struct sh_eth_private *mdp);
static void sh_eth_reset(struct net_device *ndev)
static void sh_eth_set_duplex_giga(struct net_device *ndev)
static void sh_eth_set_rate_giga(struct net_device *ndev)
static struct sh_eth_cpu_data sh_eth_my_cpu_data_giga = ;
static struct sh_eth_cpu_data *sh_eth_get_cpu_data(struct sh_eth_private *mdp)
#elif defined(CONFIG_CPU_SUBTYPE_SH7763)
#define SH_ETH_HAS_TSU	1
static void sh_eth_chip_reset(struct net_device *ndev)
static void sh_eth_reset(struct net_device *ndev)
static void sh_eth_set_duplex(struct net_device *ndev)
static void sh_eth_set_rate(struct net_device *ndev)
static struct sh_eth_cpu_data sh_eth_my_cpu_data = ;
#elif defined(CONFIG_CPU_SUBTYPE_SH7619)
#define SH_ETH_RESET_DEFAULT	1
static struct sh_eth_cpu_data sh_eth_my_cpu_data = ;
#elif defined(CONFIG_CPU_SUBTYPE_SH7710) || defined(CONFIG_CPU_SUBTYPE_SH7712)
#define SH_ETH_RESET_DEFAULT	1
#define SH_ETH_HAS_TSU	1
static struct sh_eth_cpu_data sh_eth_my_cpu_data = ;
static void sh_eth_set_default_cpu_data(struct sh_eth_cpu_data *cd)
#if defined(SH_ETH_RESET_DEFAULT)
static void sh_eth_reset(struct net_device *ndev)
#if defined(CONFIG_CPU_SH4)
static void sh_eth_set_receive_align(struct sk_buff *skb)
static void sh_eth_set_receive_align(struct sk_buff *skb)
static inline __u32 cpu_to_edmac(struct sh_eth_private *mdp, u32 x)
static inline __u32 edmac_to_cpu(struct sh_eth_private *mdp, u32 x)
static void update_mac_address(struct net_device *ndev)
static void read_mac_address(struct net_device *ndev, unsigned char *mac)
static int sh_eth_is_gether(struct sh_eth_private *mdp)
static unsigned long sh_eth_get_edtrr_trns(struct sh_eth_private *mdp)
struct bb_info ;
static void bb_set(u32 addr, u32 msk)
static void bb_clr(u32 addr, u32 msk)
static int bb_read(u32 addr, u32 msk)
static void sh_mmd_ctrl(struct mdiobb_ctrl *ctrl, int bit)
static void sh_set_mdio(struct mdiobb_ctrl *ctrl, int bit)
static int sh_get_mdio(struct mdiobb_ctrl *ctrl)
static void sh_mdc_ctrl(struct mdiobb_ctrl *ctrl, int bit)
static struct mdiobb_ops bb_ops = ;
static void sh_eth_ring_free(struct net_device *ndev)
static void sh_eth_ring_format(struct net_device *ndev)
static int sh_eth_ring_init(struct net_device *ndev)
static int sh_eth_dev_init(struct net_device *ndev)
static int sh_eth_txfree(struct net_device *ndev)
static int sh_eth_rx(struct net_device *ndev)
static void sh_eth_rcv_snd_disable(struct net_device *ndev)
static void sh_eth_rcv_snd_enable(struct net_device *ndev)
static void sh_eth_error(struct net_device *ndev, int intr_status)
static irqreturn_t sh_eth_interrupt(int irq, void *netdev)
static void sh_eth_timer(unsigned long data)
static void sh_eth_adjust_link(struct net_device *ndev)
static int sh_eth_phy_init(struct net_device *ndev)
static int sh_eth_phy_start(struct net_device *ndev)
static int sh_eth_get_settings(struct net_device *ndev,
struct ethtool_cmd *ecmd)
static int sh_eth_set_settings(struct net_device *ndev,
struct ethtool_cmd *ecmd)
static int sh_eth_nway_reset(struct net_device *ndev)
static u32 sh_eth_get_msglevel(struct net_device *ndev)
static void sh_eth_set_msglevel(struct net_device *ndev, u32 value)
static const char sh_eth_gstrings_stats[][ETH_GSTRING_LEN] = ;
#define SH_ETH_STATS_LEN  ARRAY_SIZE(sh_eth_gstrings_stats)
static int sh_eth_get_sset_count(struct net_device *netdev, int sset)
static void sh_eth_get_ethtool_stats(struct net_device *ndev,
struct ethtool_stats *stats, u64 *data)
static void sh_eth_get_strings(struct net_device *ndev, u32 stringset, u8 *data)
static struct ethtool_ops sh_eth_ethtool_ops = ;
static int sh_eth_open(struct net_device *ndev)
static void sh_eth_tx_timeout(struct net_device *ndev)
static int sh_eth_start_xmit(struct sk_buff *skb, struct net_device *ndev)
static int sh_eth_close(struct net_device *ndev)
static struct net_device_stats *sh_eth_get_stats(struct net_device *ndev)
static int sh_eth_do_ioctl(struct net_device *ndev, struct ifreq *rq,
int cmd)
#if defined(SH_ETH_HAS_TSU)
static void sh_eth_set_multicast_list(struct net_device *ndev)
static void sh_eth_tsu_init(struct sh_eth_private *mdp)
static int sh_mdio_release(struct net_device *ndev)
static int sh_mdio_init(struct net_device *ndev, int id,
struct sh_eth_plat_data *pd)
static const u16 *sh_eth_get_register_offset(int register_type)
static const struct net_device_ops sh_eth_netdev_ops = ;
static int sh_eth_drv_probe(struct platform_device *pdev)
static int sh_eth_drv_remove(struct platform_device *pdev)
static int sh_eth_runtime_nop(struct device *dev)
static struct dev_pm_ops sh_eth_dev_pm_ops = ;
static struct platform_driver sh_eth_driver = ;
static int __init sh_eth_init(void)
static void __exit sh_eth_cleanup(void)
module_init(sh_eth_init);
module_exit(sh_eth_cleanup);
MODULE_AUTHOR("Nobuhiro Iwamatsu, Yoshihiro Shimoda");
MODULE_DESCRIPTION("Renesas SuperH Ethernet driver");
MODULE_LICENSE("GPL v2");

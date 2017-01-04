#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#undef STRIP_FCS
#define DEFAULT_MSG	(NETIF_MSG_DRV		| \
NETIF_MSG_PROBE	| \
NETIF_MSG_LINK)
#define ADVERTISE_MASK	(SUPPORTED_10baseT_Half | SUPPORTED_10baseT_Full | \
SUPPORTED_100baseT_Half | SUPPORTED_100baseT_Full | \
SUPPORTED_1000baseT_Half | SUPPORTED_1000baseT_Full | \
SUPPORTED_Pause | SUPPORTED_Autoneg)
#define DRV_NAME	"sungem"
#define DRV_VERSION	"0.98"
#define DRV_RELDATE	"8/24/03"
#define DRV_AUTHOR	"David S. Miller (davem@redhat.com)"
static char version[] __devinitdata =
DRV_NAME ".c:v" DRV_VERSION " " DRV_RELDATE " " DRV_AUTHOR "\n";
MODULE_AUTHOR(DRV_AUTHOR);
MODULE_DESCRIPTION("Sun GEM Gbit ethernet driver");
MODULE_LICENSE("GPL");
#define GEM_MODULE_NAME	"gem"
static DEFINE_PCI_DEVICE_TABLE(gem_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, gem_pci_tbl);
static u16 __phy_read(struct gem *gp, int phy_addr, int reg)
static inline int _phy_read(struct net_device *dev, int mii_id, int reg)
static inline u16 phy_read(struct gem *gp, int reg)
static void __phy_write(struct gem *gp, int phy_addr, int reg, u16 val)
static inline void _phy_write(struct net_device *dev, int mii_id, int reg, int val)
static inline void phy_write(struct gem *gp, int reg, u16 val)
static inline void gem_enable_ints(struct gem *gp)
static inline void gem_disable_ints(struct gem *gp)
static void gem_get_cell(struct gem *gp)
static void gem_put_cell(struct gem *gp)
static void gem_handle_mif_event(struct gem *gp, u32 reg_val, u32 changed_bits)
static int gem_pcs_interrupt(struct net_device *dev, struct gem *gp, u32 gem_status)
static int gem_txmac_interrupt(struct net_device *dev, struct gem *gp, u32 gem_status)
static int gem_rxmac_reset(struct gem *gp)
static int gem_rxmac_interrupt(struct net_device *dev, struct gem *gp, u32 gem_status)
static int gem_mac_interrupt(struct net_device *dev, struct gem *gp, u32 gem_status)
static int gem_mif_interrupt(struct net_device *dev, struct gem *gp, u32 gem_status)
static int gem_pci_interrupt(struct net_device *dev, struct gem *gp, u32 gem_status)
static int gem_abnormal_irq(struct net_device *dev, struct gem *gp, u32 gem_status)
static __inline__ void gem_tx(struct net_device *dev, struct gem *gp, u32 gem_status)
static __inline__ void gem_post_rxds(struct gem *gp, int limit)
static int gem_rx(struct gem *gp, int work_to_do)
static int gem_poll(struct napi_struct *napi, int budget)
static irqreturn_t gem_interrupt(int irq, void *dev_id)
static void gem_poll_controller(struct net_device *dev)
static void gem_tx_timeout(struct net_device *dev)
static __inline__ int gem_intme(int entry)
static netdev_tx_t gem_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static void gem_pcs_reset(struct gem *gp)
static void gem_pcs_reinit_adv(struct gem *gp)
#define STOP_TRIES 32
static void gem_reset(struct gem *gp)
static void gem_start_dma(struct gem *gp)
static void gem_stop_dma(struct gem *gp)
static void gem_begin_auto_negotiation(struct gem *gp, struct ethtool_cmd *ep)
static int gem_set_link_modes(struct gem *gp)
static int gem_mdio_link_not_up(struct gem *gp)
static void gem_link_timer(unsigned long data)
static void gem_clean_rings(struct gem *gp)
static void gem_init_rings(struct gem *gp)
static void gem_init_phy(struct gem *gp)
static void gem_init_dma(struct gem *gp)
static u32 gem_setup_multicast(struct gem *gp)
static void gem_init_mac(struct gem *gp)
static void gem_init_pause_thresholds(struct gem *gp)
static int gem_check_invariants(struct gem *gp)
static void gem_reinit_chip(struct gem *gp)
static void gem_stop_phy(struct gem *gp, int wol)
static int gem_do_start(struct net_device *dev)
static void gem_do_stop(struct net_device *dev, int wol)
static void gem_reset_task(struct work_struct *work)
static int gem_open(struct net_device *dev)
static int gem_close(struct net_device *dev)
static int gem_suspend(struct pci_dev *pdev, pm_message_t state)
static int gem_resume(struct pci_dev *pdev)
static struct net_device_stats *gem_get_stats(struct net_device *dev)
static int gem_set_mac_address(struct net_device *dev, void *addr)
static void gem_set_multicast(struct net_device *dev)
#define GEM_MIN_MTU	68
#if 1
#define GEM_MAX_MTU	1500
#define GEM_MAX_MTU	9000
static int gem_change_mtu(struct net_device *dev, int new_mtu)
static void gem_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int gem_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int gem_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int gem_nway_reset(struct net_device *dev)
static u32 gem_get_msglevel(struct net_device *dev)
static void gem_set_msglevel(struct net_device *dev, u32 value)
#define WOL_SUPPORTED_MASK	(WAKE_MAGIC)
static void gem_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int gem_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static const struct ethtool_ops gem_ethtool_ops = ;
static int gem_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
#if (!defined(CONFIG_SPARC) && !defined(CONFIG_PPC_PMAC))
static int find_eth_addr_in_vpd(void __iomem *rom_base, int len, unsigned char *dev_addr)
static void get_gem_mac_nonobp(struct pci_dev *pdev, unsigned char *dev_addr)
static int __devinit gem_get_device_address(struct gem *gp)
static void gem_remove_one(struct pci_dev *pdev)
static const struct net_device_ops gem_netdev_ops = ;
static int __devinit gem_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_driver gem_driver = ;
static int __init gem_init(void)
static void __exit gem_cleanup(void)
module_init(gem_init);
module_exit(gem_cleanup);

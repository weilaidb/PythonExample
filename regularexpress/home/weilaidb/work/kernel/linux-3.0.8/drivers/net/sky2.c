#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME		"sky2"
#define DRV_VERSION		"1.28"
#define RX_LE_SIZE	    	1024
#define RX_LE_BYTES		(RX_LE_SIZE*sizeof(struct sky2_rx_le))
#define RX_MAX_PENDING		(RX_LE_SIZE/6 - 2)
#define RX_DEF_PENDING		RX_MAX_PENDING
#define MAX_SKB_TX_LE	(2 + (sizeof(dma_addr_t)/sizeof(u32))*(MAX_SKB_FRAGS+1))
#define TX_MIN_PENDING		(MAX_SKB_TX_LE+1)
#define TX_MAX_PENDING		1024
#define TX_DEF_PENDING		127
#define TX_WATCHDOG		(5 * HZ)
#define NAPI_WEIGHT		64
#define PHY_RETRIES		1000
#define SKY2_EEPROM_MAGIC	0x9955aabb
#define RING_NEXT(x, s)	(((x)+1) & ((s)-1))
static const u32 default_msg =
NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK
| NETIF_MSG_TIMER | NETIF_MSG_TX_ERR | NETIF_MSG_RX_ERR
| NETIF_MSG_IFUP | NETIF_MSG_IFDOWN;
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
static int copybreak __read_mostly = 128;
module_param(copybreak, int, 0);
MODULE_PARM_DESC(copybreak, "Receive copy threshold");
static int disable_msi = 0;
module_param(disable_msi, int, 0);
MODULE_PARM_DESC(disable_msi, "Disable Message Signaled Interrupt (MSI)");
static DEFINE_PCI_DEVICE_TABLE(sky2_id_table) = ;
MODULE_DEVICE_TABLE(pci, sky2_id_table);
static const unsigned txqaddr[] = ;
static const unsigned rxqaddr[] = ;
static const u32 portirq_msk[] = ;
static void sky2_set_multicast(struct net_device *dev);
static int gm_phy_write(struct sky2_hw *hw, unsigned port, u16 reg, u16 val)
static int __gm_phy_read(struct sky2_hw *hw, unsigned port, u16 reg, u16 *val)
static inline u16 gm_phy_read(struct sky2_hw *hw, unsigned port, u16 reg)
static void sky2_power_on(struct sky2_hw *hw)
static void sky2_power_aux(struct sky2_hw *hw)
static void sky2_gmac_reset(struct sky2_hw *hw, unsigned port)
static const u16 copper_fc_adv[] = ;
static const u16 fiber_fc_adv[] = ;
static const u16 gm_fc_disable[] = ;
static void sky2_phy_init(struct sky2_hw *hw, unsigned port)
static const u32 phy_power[] = ;
static const u32 coma_mode[] = ;
static void sky2_phy_power_up(struct sky2_hw *hw, unsigned port)
static void sky2_phy_power_down(struct sky2_hw *hw, unsigned port)
static void sky2_enable_rx_tx(struct sky2_port *sky2)
static void sky2_phy_reinit(struct sky2_port *sky2)
static void sky2_wol_init(struct sky2_port *sky2)
static void sky2_set_tx_stfwd(struct sky2_hw *hw, unsigned port)
static void sky2_mac_init(struct sky2_hw *hw, unsigned port)
static void sky2_ramset(struct sky2_hw *hw, u16 q, u32 start, u32 space)
static void sky2_qset(struct sky2_hw *hw, u16 q)
static void sky2_prefetch_init(struct sky2_hw *hw, u32 qaddr,
dma_addr_t addr, u32 last)
static inline struct sky2_tx_le *get_tx_le(struct sky2_port *sky2, u16 *slot)
static void tx_init(struct sky2_port *sky2)
static inline void sky2_put_idx(struct sky2_hw *hw, unsigned q, u16 idx)
static inline struct sky2_rx_le *sky2_next_rx(struct sky2_port *sky2)
static unsigned sky2_get_rx_threshold(struct sky2_port *sky2)
static unsigned sky2_get_rx_data_size(struct sky2_port *sky2)
static void sky2_rx_add(struct sky2_port *sky2, u8 op,
dma_addr_t map, unsigned len)
static void sky2_rx_submit(struct sky2_port *sky2,
const struct rx_ring_info *re)
static int sky2_rx_map_skb(struct pci_dev *pdev, struct rx_ring_info *re,
unsigned size)
static void sky2_rx_unmap_skb(struct pci_dev *pdev, struct rx_ring_info *re)
static void rx_set_checksum(struct sky2_port *sky2)
static void rx_set_rss(struct net_device *dev, u32 features)
static void sky2_rx_stop(struct sky2_port *sky2)
static void sky2_rx_clean(struct sky2_port *sky2)
static int sky2_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
#define SKY2_VLAN_OFFLOADS (NETIF_F_IP_CSUM | NETIF_F_SG | NETIF_F_TSO)
static void sky2_vlan_mode(struct net_device *dev, u32 features)
static inline unsigned sky2_rx_pad(const struct sky2_hw *hw)
static struct sk_buff *sky2_rx_alloc(struct sky2_port *sky2)
static inline void sky2_rx_update(struct sky2_port *sky2, unsigned rxq)
static int sky2_alloc_rx_skbs(struct sky2_port *sky2)
static void sky2_rx_start(struct sky2_port *sky2)
static int sky2_alloc_buffers(struct sky2_port *sky2)
static void sky2_free_buffers(struct sky2_port *sky2)
static void sky2_hw_up(struct sky2_port *sky2)
static int sky2_up(struct net_device *dev)
static inline int tx_inuse(const struct sky2_port *sky2)
static inline int tx_avail(const struct sky2_port *sky2)
static unsigned tx_le_req(const struct sk_buff *skb)
static void sky2_tx_unmap(struct pci_dev *pdev, struct tx_ring_info *re)
static netdev_tx_t sky2_xmit_frame(struct sk_buff *skb,
struct net_device *dev)
static void sky2_tx_complete(struct sky2_port *sky2, u16 done)
static void sky2_tx_reset(struct sky2_hw *hw, unsigned port)
static void sky2_hw_down(struct sky2_port *sky2)
static int sky2_down(struct net_device *dev)
static u16 sky2_phy_speed(const struct sky2_hw *hw, u16 aux)
static void sky2_link_up(struct sky2_port *sky2)
static void sky2_link_down(struct sky2_port *sky2)
static enum flow_control sky2_flow(int rx, int tx)
static int sky2_autoneg_done(struct sky2_port *sky2, u16 aux)
static void sky2_phy_intr(struct sky2_hw *hw, unsigned port)
static void sky2_qlink_intr(struct sky2_hw *hw)
static void sky2_tx_timeout(struct net_device *dev)
static int sky2_change_mtu(struct net_device *dev, int new_mtu)
static struct sk_buff *receive_copy(struct sky2_port *sky2,
const struct rx_ring_info *re,
unsigned length)
static void skb_put_frags(struct sk_buff *skb, unsigned int hdr_space,
unsigned int length)
static struct sk_buff *receive_new(struct sky2_port *sky2,
struct rx_ring_info *re,
unsigned int length)
static struct sk_buff *sky2_receive(struct net_device *dev,
u16 length, u32 status)
static inline void sky2_tx_done(struct net_device *dev, u16 last)
static inline void sky2_skb_rx(const struct sky2_port *sky2,
u32 status, struct sk_buff *skb)
static inline void sky2_rx_done(struct sky2_hw *hw, unsigned port,
unsigned packets, unsigned bytes)
static void sky2_rx_checksum(struct sky2_port *sky2, u32 status)
static void sky2_rx_hash(struct sky2_port *sky2, u32 status)
static int sky2_status_intr(struct sky2_hw *hw, int to_do, u16 idx)
static void sky2_hw_error(struct sky2_hw *hw, unsigned port, u32 status)
static void sky2_hw_intr(struct sky2_hw *hw)
static void sky2_mac_intr(struct sky2_hw *hw, unsigned port)
static void sky2_le_error(struct sky2_hw *hw, unsigned port, u16 q)
static int sky2_rx_hung(struct net_device *dev)
static void sky2_watchdog(unsigned long arg)
static void sky2_err_intr(struct sky2_hw *hw, u32 status)
static int sky2_poll(struct napi_struct *napi, int work_limit)
static irqreturn_t sky2_intr(int irq, void *dev_id)
static void sky2_netpoll(struct net_device *dev)
static u32 sky2_mhz(const struct sky2_hw *hw)
static inline u32 sky2_us2clk(const struct sky2_hw *hw, u32 us)
static inline u32 sky2_clk2us(const struct sky2_hw *hw, u32 clk)
static int __devinit sky2_init(struct sky2_hw *hw)
static void sky2_reset(struct sky2_hw *hw)
static void sky2_detach(struct net_device *dev)
static int sky2_reattach(struct net_device *dev)
static void sky2_all_down(struct sky2_hw *hw)
static void sky2_all_up(struct sky2_hw *hw)
static void sky2_restart(struct work_struct *work)
static inline u8 sky2_wol_supported(const struct sky2_hw *hw)
static void sky2_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int sky2_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static u32 sky2_supported_modes(const struct sky2_hw *hw)
static int sky2_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int sky2_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static void sky2_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct sky2_stat  sky2_stats[] = ;
static u32 sky2_get_msglevel(struct net_device *netdev)
static int sky2_nway_reset(struct net_device *dev)
static void sky2_phy_stats(struct sky2_port *sky2, u64 * data, unsigned count)
static void sky2_set_msglevel(struct net_device *netdev, u32 value)
static int sky2_get_sset_count(struct net_device *dev, int sset)
static void sky2_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 * data)
static void sky2_get_strings(struct net_device *dev, u32 stringset, u8 * data)
static int sky2_set_mac_address(struct net_device *dev, void *p)
static inline void sky2_add_filter(u8 filter[8], const u8 *addr)
static void sky2_set_multicast(struct net_device *dev)
static struct rtnl_link_stats64 *sky2_get_stats(struct net_device *dev,
struct rtnl_link_stats64 *stats)
static void sky2_led(struct sky2_port *sky2, enum led_mode mode)
static int sky2_set_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
static void sky2_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *ecmd)
static int sky2_set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *ecmd)
static int sky2_get_coalesce(struct net_device *dev,
struct ethtool_coalesce *ecmd)
static int sky2_set_coalesce(struct net_device *dev,
struct ethtool_coalesce *ecmd)
static void sky2_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static int sky2_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static int sky2_get_regs_len(struct net_device *dev)
static int sky2_reg_access_ok(struct sky2_hw *hw, unsigned int b)
static void sky2_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *p)
static int sky2_get_eeprom_len(struct net_device *dev)
static int sky2_vpd_wait(const struct sky2_hw *hw, int cap, u16 busy)
static int sky2_vpd_read(struct sky2_hw *hw, int cap, void *data,
u16 offset, size_t length)
static int sky2_vpd_write(struct sky2_hw *hw, int cap, const void *data,
u16 offset, unsigned int length)
static int sky2_get_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 *data)
static int sky2_set_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 *data)
static u32 sky2_fix_features(struct net_device *dev, u32 features)
static int sky2_set_features(struct net_device *dev, u32 features)
static const struct ethtool_ops sky2_ethtool_ops = ;
static struct dentry *sky2_debug;
#define VPD_SIZE	128
#define VPD_MAGIC	0x82
static const struct vpd_tag  vpd_tags[] = ;
static void sky2_show_vpd(struct seq_file *seq, struct sky2_hw *hw)
static int sky2_debug_show(struct seq_file *seq, void *v)
static int sky2_debug_open(struct inode *inode, struct file *file)
static const struct file_operations sky2_debug_fops = ;
static int sky2_device_event(struct notifier_block *unused,
unsigned long event, void *ptr)
static struct notifier_block sky2_notifier = ;
static __init void sky2_debug_init(void)
static __exit void sky2_debug_cleanup(void)
#define sky2_debug_init()
#define sky2_debug_cleanup()
static const struct net_device_ops sky2_netdev_ops[2] = ;
static __devinit struct net_device *sky2_init_netdev(struct sky2_hw *hw,
unsigned port,
int highmem, int wol)
static void __devinit sky2_show_addr(struct net_device *dev)
static irqreturn_t __devinit sky2_test_intr(int irq, void *dev_id)
static int __devinit sky2_test_msi(struct sky2_hw *hw)
static const char *sky2_name(u8 chipid, char *buf, int sz)
static int __devinit sky2_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit sky2_remove(struct pci_dev *pdev)
static int sky2_suspend(struct device *dev)
static int sky2_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(sky2_pm_ops, sky2_suspend, sky2_resume);
#define SKY2_PM_OPS (&sky2_pm_ops)
#define SKY2_PM_OPS NULL
static void sky2_shutdown(struct pci_dev *pdev)
static struct pci_driver sky2_driver = ;
static int __init sky2_init_module(void)
static void __exit sky2_cleanup_module(void)
module_init(sky2_init_module);
module_exit(sky2_cleanup_module);
MODULE_DESCRIPTION("Marvell Yukon 2 Gigabit Ethernet driver");
MODULE_AUTHOR("Stephen Hemminger <shemminger@linux-foundation.org>");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);

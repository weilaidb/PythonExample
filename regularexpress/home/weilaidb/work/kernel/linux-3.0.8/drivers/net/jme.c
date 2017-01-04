#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int force_pseudohp = -1;
static int no_pseudohp = -1;
static int no_extplug = -1;
module_param(force_pseudohp, int, 0);
MODULE_PARM_DESC(force_pseudohp,
"Enable pseudo hot-plug feature manually by driver instead of BIOS.");
module_param(no_pseudohp, int, 0);
MODULE_PARM_DESC(no_pseudohp, "Disable pseudo hot-plug feature.");
module_param(no_extplug, int, 0);
MODULE_PARM_DESC(no_extplug,
"Do not use external plug signal for pseudo hot-plug.");
static int
jme_mdio_read(struct net_device *netdev, int phy, int reg)
static void
jme_mdio_write(struct net_device *netdev,
int phy, int reg, int val)
static inline void
jme_reset_phy_processor(struct jme_adapter *jme)
static void
jme_setup_wakeup_frame(struct jme_adapter *jme,
const u32 *mask, u32 crc, int fnr)
static inline void
jme_mac_rxclk_off(struct jme_adapter *jme)
static inline void
jme_mac_rxclk_on(struct jme_adapter *jme)
static inline void
jme_mac_txclk_off(struct jme_adapter *jme)
static inline void
jme_mac_txclk_on(struct jme_adapter *jme)
static inline void
jme_reset_ghc_speed(struct jme_adapter *jme)
static inline void
jme_reset_250A2_workaround(struct jme_adapter *jme)
static inline void
jme_assert_ghc_reset(struct jme_adapter *jme)
static inline void
jme_clear_ghc_reset(struct jme_adapter *jme)
static inline void
jme_reset_mac_processor(struct jme_adapter *jme)
static inline void
jme_clear_pm(struct jme_adapter *jme)
static int
jme_reload_eeprom(struct jme_adapter *jme)
static void
jme_load_macaddr(struct net_device *netdev)
static inline void
jme_set_rx_pcc(struct jme_adapter *jme, int p)
static void
jme_start_irq(struct jme_adapter *jme)
static inline void
jme_stop_irq(struct jme_adapter *jme)
static u32
jme_linkstat_from_phy(struct jme_adapter *jme)
static inline void
jme_set_phyfifo_5level(struct jme_adapter *jme)
static inline void
jme_set_phyfifo_8level(struct jme_adapter *jme)
static int
jme_check_link(struct net_device *netdev, int testonly)
static int
jme_setup_tx_resources(struct jme_adapter *jme)
static void
jme_free_tx_resources(struct jme_adapter *jme)
static inline void
jme_enable_tx_engine(struct jme_adapter *jme)
static inline void
jme_restart_tx_engine(struct jme_adapter *jme)
static inline void
jme_disable_tx_engine(struct jme_adapter *jme)
static void
jme_set_clean_rxdesc(struct jme_adapter *jme, int i)
static int
jme_make_new_rx_buf(struct jme_adapter *jme, int i)
static void
jme_free_rx_buf(struct jme_adapter *jme, int i)
static void
jme_free_rx_resources(struct jme_adapter *jme)
static int
jme_setup_rx_resources(struct jme_adapter *jme)
static inline void
jme_enable_rx_engine(struct jme_adapter *jme)
static inline void
jme_restart_rx_engine(struct jme_adapter *jme)
static inline void
jme_disable_rx_engine(struct jme_adapter *jme)
static u16
jme_udpsum(struct sk_buff *skb)
static int
jme_rxsum_ok(struct jme_adapter *jme, u16 flags, struct sk_buff *skb)
static void
jme_alloc_and_feed_skb(struct jme_adapter *jme, int idx)
static int
jme_process_receive(struct jme_adapter *jme, int limit)
static void
jme_attempt_pcc(struct dynpcc_info *dpi, int atmp)
static void
jme_dynamic_pcc(struct jme_adapter *jme)
static void
jme_start_pcc_timer(struct jme_adapter *jme)
static inline void
jme_stop_pcc_timer(struct jme_adapter *jme)
static void
jme_shutdown_nic(struct jme_adapter *jme)
static void
jme_pcc_tasklet(unsigned long arg)
static inline void
jme_polling_mode(struct jme_adapter *jme)
static inline void
jme_interrupt_mode(struct jme_adapter *jme)
static inline int
jme_pseudo_hotplug_enabled(struct jme_adapter *jme)
static void
jme_start_shutdown_timer(struct jme_adapter *jme)
static void
jme_stop_shutdown_timer(struct jme_adapter *jme)
static void
jme_link_change_tasklet(unsigned long arg)
static void
jme_rx_clean_tasklet(unsigned long arg)
static int
jme_poll(JME_NAPI_HOLDER(holder), JME_NAPI_WEIGHT(budget))
static void
jme_rx_empty_tasklet(unsigned long arg)
static void
jme_wake_queue_if_stopped(struct jme_adapter *jme)
static void
jme_tx_clean_tasklet(unsigned long arg)
static void
jme_intr_msi(struct jme_adapter *jme, u32 intrstat)
static irqreturn_t
jme_intr(int irq, void *dev_id)
static irqreturn_t
jme_msi(int irq, void *dev_id)
static void
jme_reset_link(struct jme_adapter *jme)
static void
jme_restart_an(struct jme_adapter *jme)
static int
jme_request_irq(struct jme_adapter *jme)
static void
jme_free_irq(struct jme_adapter *jme)
static inline void
jme_new_phy_on(struct jme_adapter *jme)
static inline void
jme_new_phy_off(struct jme_adapter *jme)
static inline void
jme_phy_on(struct jme_adapter *jme)
static inline void
jme_phy_off(struct jme_adapter *jme)
static int
jme_open(struct net_device *netdev)
static void
jme_set_100m_half(struct jme_adapter *jme)
#define JME_WAIT_LINK_TIME 2000
static void
jme_wait_link(struct jme_adapter *jme)
static void
jme_powersave_phy(struct jme_adapter *jme)
static int
jme_close(struct net_device *netdev)
static int
jme_alloc_txdesc(struct jme_adapter *jme,
struct sk_buff *skb)
static void
jme_fill_tx_map(struct pci_dev *pdev,
struct txdesc *txdesc,
struct jme_buffer_info *txbi,
struct page *page,
u32 page_offset,
u32 len,
u8 hidma)
static void
jme_map_tx_skb(struct jme_adapter *jme, struct sk_buff *skb, int idx)
static int
jme_expand_header(struct jme_adapter *jme, struct sk_buff *skb)
static int
jme_tx_tso(struct sk_buff *skb, __le16 *mss, u8 *flags)
static void
jme_tx_csum(struct jme_adapter *jme, struct sk_buff *skb, u8 *flags)
static inline void
jme_tx_vlan(struct sk_buff *skb, __le16 *vlan, u8 *flags)
static int
jme_fill_tx_desc(struct jme_adapter *jme, struct sk_buff *skb, int idx)
static void
jme_stop_queue_if_full(struct jme_adapter *jme)
static netdev_tx_t
jme_start_xmit(struct sk_buff *skb, struct net_device *netdev)
static void
jme_set_unicastaddr(struct net_device *netdev)
static int
jme_set_macaddr(struct net_device *netdev, void *p)
static void
jme_set_multi(struct net_device *netdev)
static int
jme_change_mtu(struct net_device *netdev, int new_mtu)
static void
jme_tx_timeout(struct net_device *netdev)
static inline void jme_pause_rx(struct jme_adapter *jme)
static inline void jme_resume_rx(struct jme_adapter *jme)
static void
jme_vlan_rx_register(struct net_device *netdev, struct vlan_group *grp)
static void
jme_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *info)
static int
jme_get_regs_len(struct net_device *netdev)
static void
mmapio_memcpy(struct jme_adapter *jme, u32 *p, u32 reg, int len)
static void
mdio_memcpy(struct jme_adapter *jme, u32 *p, int reg_nr)
static void
jme_get_regs(struct net_device *netdev, struct ethtool_regs *regs, void *p)
static int
jme_get_coalesce(struct net_device *netdev, struct ethtool_coalesce *ecmd)
static int
jme_set_coalesce(struct net_device *netdev, struct ethtool_coalesce *ecmd)
static void
jme_get_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *ecmd)
static int
jme_set_pauseparam(struct net_device *netdev,
struct ethtool_pauseparam *ecmd)
static void
jme_get_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int
jme_set_wol(struct net_device *netdev,
struct ethtool_wolinfo *wol)
static int
jme_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int
jme_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static int
jme_ioctl(struct net_device *netdev, struct ifreq *rq, int cmd)
static u32
jme_get_link(struct net_device *netdev)
static u32
jme_get_msglevel(struct net_device *netdev)
static void
jme_set_msglevel(struct net_device *netdev, u32 value)
static u32
jme_fix_features(struct net_device *netdev, u32 features)
static int
jme_set_features(struct net_device *netdev, u32 features)
static int
jme_nway_reset(struct net_device *netdev)
static u8
jme_smb_read(struct jme_adapter *jme, unsigned int addr)
static void
jme_smb_write(struct jme_adapter *jme, unsigned int addr, u8 data)
static int
jme_get_eeprom_len(struct net_device *netdev)
static int
jme_get_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *data)
static int
jme_set_eeprom(struct net_device *netdev,
struct ethtool_eeprom *eeprom, u8 *data)
static const struct ethtool_ops jme_ethtool_ops = ;
static int
jme_pci_dma64(struct pci_dev *pdev)
static inline void
jme_phy_init(struct jme_adapter *jme)
static inline void
jme_check_hw_ver(struct jme_adapter *jme)
static const struct net_device_ops jme_netdev_ops = ;
static int __devinit
jme_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit
jme_remove_one(struct pci_dev *pdev)
static void
jme_shutdown(struct pci_dev *pdev)
static int jme_suspend(struct device *dev)
static int jme_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(jme_pm_ops, jme_suspend, jme_resume);
#define JME_PM_OPS (&jme_pm_ops)
#define JME_PM_OPS NULL
static DEFINE_PCI_DEVICE_TABLE(jme_pci_tbl) = ;
static struct pci_driver jme_driver = ;
static int __init
jme_init_module(void)
static void __exit
jme_cleanup_module(void)
module_init(jme_init_module);
module_exit(jme_cleanup_module);
MODULE_AUTHOR("Guo-Fu Tseng <cooldavid@cooldavid.org>");
MODULE_DESCRIPTION("JMicron JMC2x0 PCI Express Ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_DEVICE_TABLE(pci, jme_pci_tbl);

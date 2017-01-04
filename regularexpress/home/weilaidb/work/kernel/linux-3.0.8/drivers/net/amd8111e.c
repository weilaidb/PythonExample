#if defined(CONFIG_VLAN_8021Q) || defined(CONFIG_VLAN_8021Q_MODULE)
#define AMD8111E_VLAN_TAG_USED 1
#define AMD8111E_VLAN_TAG_USED 0
#define MODULE_NAME	"amd8111e"
#define MODULE_VERS	"3.0.7"
MODULE_AUTHOR("Advanced Micro Devices, Inc.");
MODULE_DESCRIPTION ("AMD8111 based 10/100 Ethernet Controller. Driver Version "MODULE_VERS);
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, amd8111e_pci_tbl);
module_param_array(speed_duplex, int, NULL, 0);
MODULE_PARM_DESC(speed_duplex, "Set device speed and duplex modes, 0: Auto Negotiate, 1: 10Mbps Half Duplex, 2: 10Mbps Full Duplex, 3: 100Mbps Half Duplex, 4: 100Mbps Full Duplex");
module_param_array(coalesce, bool, NULL, 0);
MODULE_PARM_DESC(coalesce, "Enable or Disable interrupt coalescing, 1: Enable, 0: Disable");
module_param_array(dynamic_ipg, bool, NULL, 0);
MODULE_PARM_DESC(dynamic_ipg, "Enable or Disable dynamic IPG, 1: Enable, 0: Disable");
static DEFINE_PCI_DEVICE_TABLE(amd8111e_pci_tbl) = ;
static int amd8111e_read_phy(struct amd8111e_priv* lp, int phy_id, int reg, u32* val)
static int amd8111e_write_phy(struct amd8111e_priv* lp,int phy_id, int reg, u32 val)
static int amd8111e_mdio_read(struct net_device * dev, int phy_id, int reg_num)
static void amd8111e_mdio_write(struct net_device * dev, int phy_id, int reg_num, int val)
static void amd8111e_set_ext_phy(struct net_device *dev)
static int amd8111e_free_skbs(struct net_device *dev)
static inline void amd8111e_set_rx_buff_len(struct net_device* dev)
static int amd8111e_init_ring(struct net_device *dev)
static int amd8111e_set_coalesce(struct net_device * dev, enum coal_mode cmod)
static int amd8111e_restart(struct net_device *dev)
static void amd8111e_init_hw_default( struct amd8111e_priv* lp)
static void amd8111e_disable_interrupt(struct amd8111e_priv* lp)
static void amd8111e_stop_chip(struct amd8111e_priv* lp)
static void amd8111e_free_ring(struct amd8111e_priv* lp)
#if AMD8111E_VLAN_TAG_USED
static int amd8111e_vlan_rx(struct amd8111e_priv *lp, struct sk_buff *skb, u16 vlan_tag)
static int amd8111e_tx(struct net_device *dev)
static int amd8111e_rx_poll(struct napi_struct *napi, int budget)
static int amd8111e_link_change(struct net_device* dev)
static int amd8111e_read_mib(void __iomem *mmio, u8 MIB_COUNTER)
static struct net_device_stats *amd8111e_get_stats(struct net_device *dev)
static int amd8111e_calc_coalesce(struct net_device *dev)
static irqreturn_t amd8111e_interrupt(int irq, void *dev_id)
static void amd8111e_poll(struct net_device *dev)
static int amd8111e_close(struct net_device * dev)
static int amd8111e_open(struct net_device * dev )
static int amd8111e_tx_queue_avail(struct amd8111e_priv* lp )
static netdev_tx_t amd8111e_start_xmit(struct sk_buff *skb,
struct net_device * dev)
static void amd8111e_read_regs(struct amd8111e_priv *lp, u32 *buf)
static void amd8111e_set_multicast_list(struct net_device *dev)
static void amd8111e_get_drvinfo(struct net_device* dev, struct ethtool_drvinfo *info)
static int amd8111e_get_regs_len(struct net_device *dev)
static void amd8111e_get_regs(struct net_device *dev, struct ethtool_regs *regs, void *buf)
static int amd8111e_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int amd8111e_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int amd8111e_nway_reset(struct net_device *dev)
static u32 amd8111e_get_link(struct net_device *dev)
static void amd8111e_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol_info)
static int amd8111e_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol_info)
static const struct ethtool_ops ops = ;
static int amd8111e_ioctl(struct net_device * dev , struct ifreq *ifr, int cmd)
static int amd8111e_set_mac_address(struct net_device *dev, void *p)
static int amd8111e_change_mtu(struct net_device *dev, int new_mtu)
#if AMD8111E_VLAN_TAG_USED
static void amd8111e_vlan_rx_register(struct net_device *dev, struct vlan_group *grp)
static int amd8111e_enable_magicpkt(struct amd8111e_priv* lp)
static int amd8111e_enable_link_change(struct amd8111e_priv* lp)
static void amd8111e_tx_timeout(struct net_device *dev)
static int amd8111e_suspend(struct pci_dev *pci_dev, pm_message_t state)
static int amd8111e_resume(struct pci_dev *pci_dev)
static void __devexit amd8111e_remove_one(struct pci_dev *pdev)
static void amd8111e_config_ipg(struct net_device* dev)
static void __devinit amd8111e_probe_ext_phy(struct net_device* dev)
static const struct net_device_ops amd8111e_netdev_ops = ;
static int __devinit amd8111e_probe_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_driver amd8111e_driver = ;
static int __init amd8111e_init(void)
static void __exit amd8111e_cleanup(void)
module_init(amd8111e_init);
module_exit(amd8111e_cleanup);

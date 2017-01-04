#define DRV_NAME		"smsc9420"
#define PFX			DRV_NAME ": "
#define DRV_MDIONAME		"smsc9420-mdio"
#define DRV_DESCRIPTION		"SMSC LAN9420 driver"
#define DRV_VERSION		"1.01"
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
struct smsc9420_dma_desc ;
struct smsc9420_ring_info ;
struct smsc9420_pdata ;
static DEFINE_PCI_DEVICE_TABLE(smsc9420_id_table) = ;
MODULE_DEVICE_TABLE(pci, smsc9420_id_table);
#define SMSC_MSG_DEFAULT (NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK)
static uint smsc_debug;
static uint debug = -1;
module_param(debug, uint, 0);
MODULE_PARM_DESC(debug, "debug level");
#define smsc_dbg(TYPE, f, a...) \
do  while (0)
#define smsc_info(TYPE, f, a...) \
do  while (0)
#define smsc_warn(TYPE, f, a...) \
do  while (0)
static inline u32 smsc9420_reg_read(struct smsc9420_pdata *pd, u32 offset)
static inline void
smsc9420_reg_write(struct smsc9420_pdata *pd, u32 offset, u32 value)
static inline void smsc9420_pci_flush_write(struct smsc9420_pdata *pd)
static int smsc9420_mii_read(struct mii_bus *bus, int phyaddr, int regidx)
static int smsc9420_mii_write(struct mii_bus *bus, int phyaddr, int regidx,
u16 val)
static u32 smsc9420_hash(u8 addr[ETH_ALEN])
static int smsc9420_eeprom_reload(struct smsc9420_pdata *pd)
static int smsc9420_do_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int smsc9420_ethtool_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static int smsc9420_ethtool_set_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static void smsc9420_ethtool_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static u32 smsc9420_ethtool_get_msglevel(struct net_device *netdev)
static void smsc9420_ethtool_set_msglevel(struct net_device *netdev, u32 data)
static int smsc9420_ethtool_nway_reset(struct net_device *netdev)
static int smsc9420_ethtool_getregslen(struct net_device *dev)
static void
smsc9420_ethtool_getregs(struct net_device *dev, struct ethtool_regs *regs,
void *buf)
static void smsc9420_eeprom_enable_access(struct smsc9420_pdata *pd)
static int smsc9420_eeprom_send_cmd(struct smsc9420_pdata *pd, u32 op)
static int smsc9420_eeprom_read_location(struct smsc9420_pdata *pd,
u8 address, u8 *data)
static int smsc9420_eeprom_write_location(struct smsc9420_pdata *pd,
u8 address, u8 data)
static int smsc9420_ethtool_get_eeprom_len(struct net_device *dev)
static int smsc9420_ethtool_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static int smsc9420_ethtool_set_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static const struct ethtool_ops smsc9420_ethtool_ops = ;
static void smsc9420_set_mac_address(struct net_device *dev)
static void smsc9420_check_mac_address(struct net_device *dev)
static void smsc9420_stop_tx(struct smsc9420_pdata *pd)
static void smsc9420_free_tx_ring(struct smsc9420_pdata *pd)
static void smsc9420_free_rx_ring(struct smsc9420_pdata *pd)
static void smsc9420_stop_rx(struct smsc9420_pdata *pd)
static irqreturn_t smsc9420_isr(int irq, void *dev_id)
static void smsc9420_poll_controller(struct net_device *dev)
static void smsc9420_dmac_soft_reset(struct smsc9420_pdata *pd)
static int smsc9420_stop(struct net_device *dev)
static void smsc9420_rx_count_stats(struct net_device *dev, u32 desc_status)
static void smsc9420_rx_handoff(struct smsc9420_pdata *pd, const int index,
const u32 status)
static int smsc9420_alloc_rx_buffer(struct smsc9420_pdata *pd, int index)
static void smsc9420_alloc_new_rx_buffers(struct smsc9420_pdata *pd)
static int smsc9420_rx_poll(struct napi_struct *napi, int budget)
static void
smsc9420_tx_update_stats(struct net_device *dev, u32 status, u32 length)
static void smsc9420_complete_tx(struct net_device *dev)
static netdev_tx_t smsc9420_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static struct net_device_stats *smsc9420_get_stats(struct net_device *dev)
static void smsc9420_set_multicast_list(struct net_device *dev)
static void smsc9420_phy_update_flowcontrol(struct smsc9420_pdata *pd)
static void smsc9420_phy_adjust_link(struct net_device *dev)
static int smsc9420_mii_probe(struct net_device *dev)
static int smsc9420_mii_init(struct net_device *dev)
static int smsc9420_alloc_tx_ring(struct smsc9420_pdata *pd)
static int smsc9420_alloc_rx_ring(struct smsc9420_pdata *pd)
static int smsc9420_open(struct net_device *dev)
static int smsc9420_suspend(struct pci_dev *pdev, pm_message_t state)
static int smsc9420_resume(struct pci_dev *pdev)
static const struct net_device_ops smsc9420_netdev_ops = ;
static int __devinit
smsc9420_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit smsc9420_remove(struct pci_dev *pdev)
static struct pci_driver smsc9420_driver = ;
static int __init smsc9420_init_module(void)
static void __exit smsc9420_exit_module(void)
module_init(smsc9420_init_module);
module_exit(smsc9420_exit_module);

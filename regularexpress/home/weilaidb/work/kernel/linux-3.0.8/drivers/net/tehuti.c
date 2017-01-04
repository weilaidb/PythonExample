#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static DEFINE_PCI_DEVICE_TABLE(bdx_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, bdx_pci_tbl);
static void bdx_rx_alloc_skbs(struct bdx_priv *priv, struct rxf_fifo *f);
static void bdx_tx_cleanup(struct bdx_priv *priv);
static int bdx_rx_receive(struct bdx_priv *priv, struct rxd_fifo *f, int budget);
static void bdx_tx_push_desc_safe(struct bdx_priv *priv, void *data, int size);
static int bdx_tx_init(struct bdx_priv *priv);
static int bdx_rx_init(struct bdx_priv *priv);
static void bdx_rx_free(struct bdx_priv *priv);
static void bdx_tx_free(struct bdx_priv *priv);
static void bdx_set_ethtool_ops(struct net_device *netdev);
static void print_hw_id(struct pci_dev *pdev)
static void print_fw_id(struct pci_nic *nic)
static void print_eth_id(struct net_device *ndev)
#define bdx_enable_interrupts(priv)	\
do  while (0)
#define bdx_disable_interrupts(priv)	\
do  while (0)
static int
bdx_fifo_init(struct bdx_priv *priv, struct fifo *f, int fsz_type,
u16 reg_CFG0, u16 reg_CFG1, u16 reg_RPTR, u16 reg_WPTR)
static void bdx_fifo_free(struct bdx_priv *priv, struct fifo *f)
static void bdx_link_changed(struct bdx_priv *priv)
static void bdx_isr_extra(struct bdx_priv *priv, u32 isr)
static irqreturn_t bdx_isr_napi(int irq, void *dev)
static int bdx_poll(struct napi_struct *napi, int budget)
static int bdx_fw_load(struct bdx_priv *priv)
static void bdx_restore_mac(struct net_device *ndev, struct bdx_priv *priv)
static int bdx_hw_start(struct bdx_priv *priv)
static void bdx_hw_stop(struct bdx_priv *priv)
static int bdx_hw_reset_direct(void __iomem *regs)
static int bdx_hw_reset(struct bdx_priv *priv)
static int bdx_sw_reset(struct bdx_priv *priv)
static int bdx_reset(struct bdx_priv *priv)
static int bdx_close(struct net_device *ndev)
static int bdx_open(struct net_device *ndev)
static int bdx_range_check(struct bdx_priv *priv, u32 offset)
static int bdx_ioctl_priv(struct net_device *ndev, struct ifreq *ifr, int cmd)
static int bdx_ioctl(struct net_device *ndev, struct ifreq *ifr, int cmd)
static void __bdx_vlan_rx_vid(struct net_device *ndev, uint16_t vid, int enable)
static void bdx_vlan_rx_add_vid(struct net_device *ndev, uint16_t vid)
static void bdx_vlan_rx_kill_vid(struct net_device *ndev, unsigned short vid)
static void
bdx_vlan_rx_register(struct net_device *ndev, struct vlan_group *grp)
static int bdx_change_mtu(struct net_device *ndev, int new_mtu)
static void bdx_setmulti(struct net_device *ndev)
static int bdx_set_mac(struct net_device *ndev, void *p)
static int bdx_read_mac(struct bdx_priv *priv)
static u64 bdx_read_l2stat(struct bdx_priv *priv, int reg)
static void bdx_update_stats(struct bdx_priv *priv)
static void print_rxdd(struct rxd_desc *rxdd, u32 rxd_val1, u16 len,
u16 rxd_vlan);
static void print_rxfd(struct rxf_desc *rxfd);
static void bdx_rxdb_destroy(struct rxdb *db)
static struct rxdb *bdx_rxdb_create(int nelem)
static inline int bdx_rxdb_alloc_elem(struct rxdb *db)
static inline void *bdx_rxdb_addr_elem(struct rxdb *db, int n)
static inline int bdx_rxdb_available(struct rxdb *db)
static inline void bdx_rxdb_free_elem(struct rxdb *db, int n)
static int bdx_rx_init(struct bdx_priv *priv)
static void bdx_rx_free_skbs(struct bdx_priv *priv, struct rxf_fifo *f)
static void bdx_rx_free(struct bdx_priv *priv)
static void bdx_rx_alloc_skbs(struct bdx_priv *priv, struct rxf_fifo *f)
static inline void
NETIF_RX_MUX(struct bdx_priv *priv, u32 rxd_val1, u16 rxd_vlan,
struct sk_buff *skb)
static void bdx_recycle_skb(struct bdx_priv *priv, struct rxd_desc *rxdd)
static int bdx_rx_receive(struct bdx_priv *priv, struct rxd_fifo *f, int budget)
static void print_rxdd(struct rxd_desc *rxdd, u32 rxd_val1, u16 len,
u16 rxd_vlan)
static void print_rxfd(struct rxf_desc *rxfd)
static inline int bdx_tx_db_size(struct txdb *db)
static inline void __bdx_tx_db_ptr_next(struct txdb *db, struct tx_map **pptr)
static inline void bdx_tx_db_inc_rptr(struct txdb *db)
static inline void bdx_tx_db_inc_wptr(struct txdb *db)
static int bdx_tx_db_init(struct txdb *d, int sz_type)
static void bdx_tx_db_close(struct txdb *d)
static struct  txd_sizes[MAX_SKB_FRAGS + 1];
static inline void
bdx_tx_map_skb(struct bdx_priv *priv, struct sk_buff *skb,
struct txd_desc *txdd)
static void __init init_txd_sizes(void)
static int bdx_tx_init(struct bdx_priv *priv)
static inline int bdx_tx_space(struct bdx_priv *priv)
static netdev_tx_t bdx_tx_transmit(struct sk_buff *skb,
struct net_device *ndev)
static void bdx_tx_cleanup(struct bdx_priv *priv)
static void bdx_tx_free_skbs(struct bdx_priv *priv)
static void bdx_tx_free(struct bdx_priv *priv)
static void bdx_tx_push_desc(struct bdx_priv *priv, void *data, int size)
static void bdx_tx_push_desc_safe(struct bdx_priv *priv, void *data, int size)
static const struct net_device_ops bdx_netdev_ops = ;
static int __devinit
bdx_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static const char
bdx_stat_names[][ETH_GSTRING_LEN] = ;
static int bdx_get_settings(struct net_device *netdev, struct ethtool_cmd *ecmd)
static void
bdx_get_drvinfo(struct net_device *netdev, struct ethtool_drvinfo *drvinfo)
static int
bdx_get_coalesce(struct net_device *netdev, struct ethtool_coalesce *ecoal)
static int
bdx_set_coalesce(struct net_device *netdev, struct ethtool_coalesce *ecoal)
static inline int bdx_rx_fifo_size_to_packets(int rx_size)
static inline int bdx_tx_fifo_size_to_packets(int tx_size)
static void
bdx_get_ringparam(struct net_device *netdev, struct ethtool_ringparam *ring)
static int
bdx_set_ringparam(struct net_device *netdev, struct ethtool_ringparam *ring)
static void bdx_get_strings(struct net_device *netdev, u32 stringset, u8 *data)
static int bdx_get_sset_count(struct net_device *netdev, int stringset)
static void bdx_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static void bdx_set_ethtool_ops(struct net_device *netdev)
static void __devexit bdx_remove(struct pci_dev *pdev)
static struct pci_driver bdx_pci_driver = ;
static void __init print_driver_id(void)
static int __init bdx_module_init(void)
module_init(bdx_module_init);
static void __exit bdx_module_exit(void)
module_exit(bdx_module_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(BDX_DRV_DESC);
MODULE_FIRMWARE("tehuti/bdx.bin");

#define ATL1C_DRV_VERSION "1.0.1.0-NAPI"
char atl1c_driver_name[] = "atl1c";
char atl1c_driver_version[] = ATL1C_DRV_VERSION;
#define PCI_DEVICE_ID_ATTANSIC_L2C      0x1062
#define PCI_DEVICE_ID_ATTANSIC_L1C      0x1063
#define PCI_DEVICE_ID_ATHEROS_L2C_B	0x2060
#define PCI_DEVICE_ID_ATHEROS_L2C_B2	0x2062
#define PCI_DEVICE_ID_ATHEROS_L1D	0x1073
#define PCI_DEVICE_ID_ATHEROS_L1D_2_0	0x1083
#define L2CB_V10			0xc0
#define L2CB_V11			0xc1
static DEFINE_PCI_DEVICE_TABLE(atl1c_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, atl1c_pci_tbl);
MODULE_AUTHOR("Jie Yang <jie.yang@atheros.com>");
MODULE_DESCRIPTION("Atheros 1000M Ethernet Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(ATL1C_DRV_VERSION);
static int atl1c_stop_mac(struct atl1c_hw *hw);
static void atl1c_enable_rx_ctrl(struct atl1c_hw *hw);
static void atl1c_enable_tx_ctrl(struct atl1c_hw *hw);
static void atl1c_disable_l0s_l1(struct atl1c_hw *hw);
static void atl1c_set_aspm(struct atl1c_hw *hw, bool linkup);
static void atl1c_setup_mac_ctrl(struct atl1c_adapter *adapter);
static void atl1c_clean_rx_irq(struct atl1c_adapter *adapter, u8 que,
int *work_done, int work_to_do);
static int atl1c_up(struct atl1c_adapter *adapter);
static void atl1c_down(struct atl1c_adapter *adapter);
static const u16 atl1c_pay_load_size[] = ;
static const u16 atl1c_rfd_prod_idx_regs[AT_MAX_RECEIVE_QUEUE] =
;
static const u16 atl1c_rfd_addr_lo_regs[AT_MAX_RECEIVE_QUEUE] =
;
static const u16 atl1c_rrd_addr_lo_regs[AT_MAX_RECEIVE_QUEUE] =
;
static const u32 atl1c_default_msg = NETIF_MSG_DRV | NETIF_MSG_PROBE |
NETIF_MSG_LINK | NETIF_MSG_TIMER | NETIF_MSG_IFDOWN | NETIF_MSG_IFUP;
static void atl1c_pcie_patch(struct atl1c_hw *hw)
static void atl1c_reset_pcie(struct atl1c_hw *hw, u32 flag)
static inline void atl1c_irq_enable(struct atl1c_adapter *adapter)
static inline void atl1c_irq_disable(struct atl1c_adapter *adapter)
static inline void atl1c_irq_reset(struct atl1c_adapter *adapter)
static u32 atl1c_wait_until_idle(struct atl1c_hw *hw)
static void atl1c_phy_config(unsigned long data)
void atl1c_reinit_locked(struct atl1c_adapter *adapter)
static void atl1c_check_link_status(struct atl1c_adapter *adapter)
static void atl1c_link_chg_event(struct atl1c_adapter *adapter)
static void atl1c_common_task(struct work_struct *work)
static void atl1c_del_timer(struct atl1c_adapter *adapter)
static void atl1c_tx_timeout(struct net_device *netdev)
static void atl1c_set_multi(struct net_device *netdev)
static void atl1c_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp)
static void atl1c_restore_vlan(struct atl1c_adapter *adapter)
static int atl1c_set_mac_addr(struct net_device *netdev, void *p)
static void atl1c_set_rxbufsize(struct atl1c_adapter *adapter,
struct net_device *dev)
static u32 atl1c_fix_features(struct net_device *netdev, u32 features)
static int atl1c_change_mtu(struct net_device *netdev, int new_mtu)
static int atl1c_mdio_read(struct net_device *netdev, int phy_id, int reg_num)
static void atl1c_mdio_write(struct net_device *netdev, int phy_id,
int reg_num, int val)
static int atl1c_mii_ioctl(struct net_device *netdev,
struct ifreq *ifr, int cmd)
static int atl1c_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int __devinit atl1c_alloc_queues(struct atl1c_adapter *adapter)
static void atl1c_set_mac_type(struct atl1c_hw *hw)
static int atl1c_setup_mac_funcs(struct atl1c_hw *hw)
static int __devinit atl1c_sw_init(struct atl1c_adapter *adapter)
static inline void atl1c_clean_buffer(struct pci_dev *pdev,
struct atl1c_buffer *buffer_info, int in_irq)
static void atl1c_clean_tx_ring(struct atl1c_adapter *adapter,
enum atl1c_trans_queue type)
static void atl1c_clean_rx_ring(struct atl1c_adapter *adapter)
static void atl1c_init_ring_ptrs(struct atl1c_adapter *adapter)
static void atl1c_free_ring_resources(struct atl1c_adapter *adapter)
static int atl1c_setup_ring_resources(struct atl1c_adapter *adapter)
static void atl1c_configure_des_ring(struct atl1c_adapter *adapter)
static void atl1c_configure_tx(struct atl1c_adapter *adapter)
static void atl1c_configure_rx(struct atl1c_adapter *adapter)
static void atl1c_configure_rss(struct atl1c_adapter *adapter)
static void atl1c_configure_dma(struct atl1c_adapter *adapter)
static int atl1c_stop_mac(struct atl1c_hw *hw)
static void atl1c_enable_rx_ctrl(struct atl1c_hw *hw)
static void atl1c_enable_tx_ctrl(struct atl1c_hw *hw)
static int atl1c_reset_mac(struct atl1c_hw *hw)
static void atl1c_disable_l0s_l1(struct atl1c_hw *hw)
static void atl1c_set_aspm(struct atl1c_hw *hw, bool linkup)
static void atl1c_setup_mac_ctrl(struct atl1c_adapter *adapter)
static int atl1c_configure(struct atl1c_adapter *adapter)
static void atl1c_update_hw_stats(struct atl1c_adapter *adapter)
static struct net_device_stats *atl1c_get_stats(struct net_device *netdev)
static inline void atl1c_clear_phy_int(struct atl1c_adapter *adapter)
static bool atl1c_clean_tx_irq(struct atl1c_adapter *adapter,
enum atl1c_trans_queue type)
static irqreturn_t atl1c_intr(int irq, void *data)
static inline void atl1c_rx_checksum(struct atl1c_adapter *adapter,
struct sk_buff *skb, struct atl1c_recv_ret_status *prrs)
static int atl1c_alloc_rx_buffer(struct atl1c_adapter *adapter, const int ringid)
static void atl1c_clean_rrd(struct atl1c_rrd_ring *rrd_ring,
struct	atl1c_recv_ret_status *rrs, u16 num)
static void atl1c_clean_rfd(struct atl1c_rfd_ring *rfd_ring,
struct atl1c_recv_ret_status *rrs, u16 num)
static void atl1c_clean_rx_irq(struct atl1c_adapter *adapter, u8 que,
int *work_done, int work_to_do)
static int atl1c_clean(struct napi_struct *napi, int budget)
static void atl1c_netpoll(struct net_device *netdev)
static inline u16 atl1c_tpd_avail(struct atl1c_adapter *adapter, enum atl1c_trans_queue type)
static struct atl1c_tpd_desc *atl1c_get_tpd(struct atl1c_adapter *adapter,
enum atl1c_trans_queue type)
static struct atl1c_buffer *
atl1c_get_tx_buffer(struct atl1c_adapter *adapter, struct atl1c_tpd_desc *tpd)
static u16 atl1c_cal_tpd_req(const struct sk_buff *skb)
static int atl1c_tso_csum(struct atl1c_adapter *adapter,
struct sk_buff *skb,
struct atl1c_tpd_desc **tpd,
enum atl1c_trans_queue type)
static void atl1c_tx_map(struct atl1c_adapter *adapter,
struct sk_buff *skb, struct atl1c_tpd_desc *tpd,
enum atl1c_trans_queue type)
static void atl1c_tx_queue(struct atl1c_adapter *adapter, struct sk_buff *skb,
struct atl1c_tpd_desc *tpd, enum atl1c_trans_queue type)
static netdev_tx_t atl1c_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static void atl1c_free_irq(struct atl1c_adapter *adapter)
static int atl1c_request_irq(struct atl1c_adapter *adapter)
static int atl1c_up(struct atl1c_adapter *adapter)
static void atl1c_down(struct atl1c_adapter *adapter)
static int atl1c_open(struct net_device *netdev)
static int atl1c_close(struct net_device *netdev)
static int atl1c_suspend(struct device *dev)
static int atl1c_resume(struct device *dev)
static void atl1c_shutdown(struct pci_dev *pdev)
static const struct net_device_ops atl1c_netdev_ops = ;
static int atl1c_init_netdev(struct net_device *netdev, struct pci_dev *pdev)
static int __devinit atl1c_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit atl1c_remove(struct pci_dev *pdev)
static pci_ers_result_t atl1c_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t atl1c_io_slot_reset(struct pci_dev *pdev)
static void atl1c_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers atl1c_err_handler = ;
static SIMPLE_DEV_PM_OPS(atl1c_pm_ops, atl1c_suspend, atl1c_resume);
static struct pci_driver atl1c_driver = ;
static int __init atl1c_init_module(void)
static void __exit atl1c_exit_module(void)
module_init(atl1c_init_module);
module_exit(atl1c_exit_module);

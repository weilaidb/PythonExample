#define DRV_VERSION "1.0.0.7-NAPI"
char atl1e_driver_name[] = "ATL1E";
char atl1e_driver_version[] = DRV_VERSION;
#define PCI_DEVICE_ID_ATTANSIC_L1E      0x1026
static DEFINE_PCI_DEVICE_TABLE(atl1e_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, atl1e_pci_tbl);
MODULE_AUTHOR("Atheros Corporation, <xiong.huang@atheros.com>, Jie Yang <jie.yang@atheros.com>");
MODULE_DESCRIPTION("Atheros 1000M Ethernet Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
static void atl1e_setup_mac_ctrl(struct atl1e_adapter *adapter);
static const u16
atl1e_rx_page_vld_regs[AT_MAX_RECEIVE_QUEUE][AT_PAGE_NUM_PER_QUEUE] =
;
static const u16 atl1e_rx_page_hi_addr_regs[AT_MAX_RECEIVE_QUEUE] =
;
static const u16
atl1e_rx_page_lo_addr_regs[AT_MAX_RECEIVE_QUEUE][AT_PAGE_NUM_PER_QUEUE] =
;
static const u16
atl1e_rx_page_write_offset_regs[AT_MAX_RECEIVE_QUEUE][AT_PAGE_NUM_PER_QUEUE] =
;
static const u16 atl1e_pay_load_size[] = ;
static inline void atl1e_irq_enable(struct atl1e_adapter *adapter)
static inline void atl1e_irq_disable(struct atl1e_adapter *adapter)
static inline void atl1e_irq_reset(struct atl1e_adapter *adapter)
static void atl1e_phy_config(unsigned long data)
void atl1e_reinit_locked(struct atl1e_adapter *adapter)
static void atl1e_reset_task(struct work_struct *work)
static int atl1e_check_link(struct atl1e_adapter *adapter)
static void atl1e_link_chg_task(struct work_struct *work)
static void atl1e_link_chg_event(struct atl1e_adapter *adapter)
static void atl1e_del_timer(struct atl1e_adapter *adapter)
static void atl1e_cancel_work(struct atl1e_adapter *adapter)
static void atl1e_tx_timeout(struct net_device *netdev)
static void atl1e_set_multi(struct net_device *netdev)
static void atl1e_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp)
static void atl1e_restore_vlan(struct atl1e_adapter *adapter)
static int atl1e_set_mac_addr(struct net_device *netdev, void *p)
static int atl1e_change_mtu(struct net_device *netdev, int new_mtu)
static int atl1e_mdio_read(struct net_device *netdev, int phy_id, int reg_num)
static void atl1e_mdio_write(struct net_device *netdev, int phy_id,
int reg_num, int val)
static int atl1e_mii_ioctl(struct net_device *netdev,
struct ifreq *ifr, int cmd)
static int atl1e_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static void atl1e_setup_pcicmd(struct pci_dev *pdev)
static int __devinit atl1e_alloc_queues(struct atl1e_adapter *adapter)
static int __devinit atl1e_sw_init(struct atl1e_adapter *adapter)
static void atl1e_clean_tx_ring(struct atl1e_adapter *adapter)
static void atl1e_clean_rx_ring(struct atl1e_adapter *adapter)
static void atl1e_cal_ring_size(struct atl1e_adapter *adapter, u32 *ring_size)
static void atl1e_init_ring_resources(struct atl1e_adapter *adapter)
static void atl1e_init_ring_ptrs(struct atl1e_adapter *adapter)
static void atl1e_free_ring_resources(struct atl1e_adapter *adapter)
static int atl1e_setup_ring_resources(struct atl1e_adapter *adapter)
static inline void atl1e_configure_des_ring(const struct atl1e_adapter *adapter)
static inline void atl1e_configure_tx(struct atl1e_adapter *adapter)
static inline void atl1e_configure_rx(struct atl1e_adapter *adapter)
static inline void atl1e_configure_dma(struct atl1e_adapter *adapter)
static void atl1e_setup_mac_ctrl(struct atl1e_adapter *adapter)
static int atl1e_configure(struct atl1e_adapter *adapter)
static struct net_device_stats *atl1e_get_stats(struct net_device *netdev)
static void atl1e_update_hw_stats(struct atl1e_adapter *adapter)
static inline void atl1e_clear_phy_int(struct atl1e_adapter *adapter)
static bool atl1e_clean_tx_irq(struct atl1e_adapter *adapter)
static irqreturn_t atl1e_intr(int irq, void *data)
static inline void atl1e_rx_checksum(struct atl1e_adapter *adapter,
struct sk_buff *skb, struct atl1e_recv_ret_status *prrs)
static struct atl1e_rx_page *atl1e_get_rx_page(struct atl1e_adapter *adapter,
u8 que)
static void atl1e_clean_rx_irq(struct atl1e_adapter *adapter, u8 que,
int *work_done, int work_to_do)
static int atl1e_clean(struct napi_struct *napi, int budget)
static void atl1e_netpoll(struct net_device *netdev)
static inline u16 atl1e_tpd_avail(struct atl1e_adapter *adapter)
static struct atl1e_tpd_desc *atl1e_get_tpd(struct atl1e_adapter *adapter)
static struct atl1e_tx_buffer *
atl1e_get_tx_buffer(struct atl1e_adapter *adapter, struct atl1e_tpd_desc *tpd)
static u16 atl1e_cal_tdp_req(const struct sk_buff *skb)
static int atl1e_tso_csum(struct atl1e_adapter *adapter,
struct sk_buff *skb, struct atl1e_tpd_desc *tpd)
static void atl1e_tx_map(struct atl1e_adapter *adapter,
struct sk_buff *skb, struct atl1e_tpd_desc *tpd)
static void atl1e_tx_queue(struct atl1e_adapter *adapter, u16 count,
struct atl1e_tpd_desc *tpd)
static netdev_tx_t atl1e_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static void atl1e_free_irq(struct atl1e_adapter *adapter)
static int atl1e_request_irq(struct atl1e_adapter *adapter)
int atl1e_up(struct atl1e_adapter *adapter)
void atl1e_down(struct atl1e_adapter *adapter)
static int atl1e_open(struct net_device *netdev)
static int atl1e_close(struct net_device *netdev)
static int atl1e_suspend(struct pci_dev *pdev, pm_message_t state)
static int atl1e_resume(struct pci_dev *pdev)
static void atl1e_shutdown(struct pci_dev *pdev)
static const struct net_device_ops atl1e_netdev_ops = ;
static int atl1e_init_netdev(struct net_device *netdev, struct pci_dev *pdev)
static int __devinit atl1e_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit atl1e_remove(struct pci_dev *pdev)
static pci_ers_result_t
atl1e_io_error_detected(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t atl1e_io_slot_reset(struct pci_dev *pdev)
static void atl1e_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers atl1e_err_handler = ;
static struct pci_driver atl1e_driver = ;
static int __init atl1e_init_module(void)
static void __exit atl1e_exit_module(void)
module_init(atl1e_init_module);
module_exit(atl1e_exit_module);

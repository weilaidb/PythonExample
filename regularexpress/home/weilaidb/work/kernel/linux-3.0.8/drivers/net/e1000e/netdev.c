#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_EXTRAVERSION "-k2"
#define DRV_VERSION "1.3.10" DRV_EXTRAVERSION
char e1000e_driver_name[] = "e1000e";
const char e1000e_driver_version[] = DRV_VERSION;
static void e1000e_disable_aspm(struct pci_dev *pdev, u16 state);
static const struct e1000_info *e1000_info_tbl[] = ;
struct e1000_reg_info ;
#define E1000_RDFH	0x02410
#define E1000_RDFT	0x02418
#define E1000_RDFHS	0x02420
#define E1000_RDFTS	0x02428
#define E1000_RDFPC	0x02430
#define E1000_TDFH	0x03410
#define E1000_TDFT	0x03418
#define E1000_TDFHS	0x03420
#define E1000_TDFTS	0x03428
#define E1000_TDFPC	0x03430
static const struct e1000_reg_info e1000_reg_info_tbl[] = ;
static void e1000_regdump(struct e1000_hw *hw, struct e1000_reg_info *reginfo)
static void e1000e_dump(struct e1000_adapter *adapter)
static int e1000_desc_unused(struct e1000_ring *ring)
static void e1000_receive_skb(struct e1000_adapter *adapter,
struct net_device *netdev, struct sk_buff *skb,
u8 status, __le16 vlan)
static void e1000_rx_checksum(struct e1000_adapter *adapter, u32 status_err,
u32 csum, struct sk_buff *skb)
static void e1000_alloc_rx_buffers(struct e1000_adapter *adapter,
int cleaned_count)
static void e1000_alloc_rx_buffers_ps(struct e1000_adapter *adapter,
int cleaned_count)
static void e1000_alloc_jumbo_rx_buffers(struct e1000_adapter *adapter,
int cleaned_count)
static bool e1000_clean_rx_irq(struct e1000_adapter *adapter,
int *work_done, int work_to_do)
static void e1000_put_txbuf(struct e1000_adapter *adapter,
struct e1000_buffer *buffer_info)
static void e1000_print_hw_hang(struct work_struct *work)
static bool e1000_clean_tx_irq(struct e1000_adapter *adapter)
static bool e1000_clean_rx_irq_ps(struct e1000_adapter *adapter,
int *work_done, int work_to_do)
static void e1000_consume_page(struct e1000_buffer *bi, struct sk_buff *skb,
u16 length)
static bool e1000_clean_jumbo_rx_irq(struct e1000_adapter *adapter,
int *work_done, int work_to_do)
static void e1000_clean_rx_ring(struct e1000_adapter *adapter)
static void e1000e_downshift_workaround(struct work_struct *work)
static irqreturn_t e1000_intr_msi(int irq, void *data)
static irqreturn_t e1000_intr(int irq, void *data)
static irqreturn_t e1000_msix_other(int irq, void *data)
static irqreturn_t e1000_intr_msix_tx(int irq, void *data)
static irqreturn_t e1000_intr_msix_rx(int irq, void *data)
static void e1000_configure_msix(struct e1000_adapter *adapter)
void e1000e_reset_interrupt_capability(struct e1000_adapter *adapter)
void e1000e_set_interrupt_capability(struct e1000_adapter *adapter)
static int e1000_request_msix(struct e1000_adapter *adapter)
static int e1000_request_irq(struct e1000_adapter *adapter)
static void e1000_free_irq(struct e1000_adapter *adapter)
static void e1000_irq_disable(struct e1000_adapter *adapter)
static void e1000_irq_enable(struct e1000_adapter *adapter)
void e1000e_get_hw_control(struct e1000_adapter *adapter)
void e1000e_release_hw_control(struct e1000_adapter *adapter)
static int e1000_alloc_ring_dma(struct e1000_adapter *adapter,
struct e1000_ring *ring)
int e1000e_setup_tx_resources(struct e1000_adapter *adapter)
int e1000e_setup_rx_resources(struct e1000_adapter *adapter)
static void e1000_clean_tx_ring(struct e1000_adapter *adapter)
void e1000e_free_tx_resources(struct e1000_adapter *adapter)
void e1000e_free_rx_resources(struct e1000_adapter *adapter)
static unsigned int e1000_update_itr(struct e1000_adapter *adapter,
u16 itr_setting, int packets,
int bytes)
static void e1000_set_itr(struct e1000_adapter *adapter)
static int __devinit e1000_alloc_queues(struct e1000_adapter *adapter)
static int e1000_clean(struct napi_struct *napi, int budget)
static void e1000_vlan_rx_add_vid(struct net_device *netdev, u16 vid)
static void e1000_vlan_rx_kill_vid(struct net_device *netdev, u16 vid)
static void e1000e_vlan_filter_disable(struct e1000_adapter *adapter)
static void e1000e_vlan_filter_enable(struct e1000_adapter *adapter)
static void e1000e_vlan_strip_disable(struct e1000_adapter *adapter)
static void e1000e_vlan_strip_enable(struct e1000_adapter *adapter)
static void e1000_update_mng_vlan(struct e1000_adapter *adapter)
static void e1000_restore_vlan(struct e1000_adapter *adapter)
static void e1000_init_manageability_pt(struct e1000_adapter *adapter)
static void e1000_configure_tx(struct e1000_adapter *adapter)
#define PAGE_USE_COUNT(S) (((S) >> PAGE_SHIFT) + \
(((S) & (PAGE_SIZE - 1)) ? 1 : 0))
static void e1000_setup_rctl(struct e1000_adapter *adapter)
static void e1000_configure_rx(struct e1000_adapter *adapter)
static void e1000_update_mc_addr_list(struct e1000_hw *hw, u8 *mc_addr_list,
u32 mc_addr_count)
static void e1000_set_multi(struct net_device *netdev)
static void e1000_configure(struct e1000_adapter *adapter)
void e1000e_power_up_phy(struct e1000_adapter *adapter)
static void e1000_power_down_phy(struct e1000_adapter *adapter)
void e1000e_reset(struct e1000_adapter *adapter)
int e1000e_up(struct e1000_adapter *adapter)
static void e1000e_flush_descriptors(struct e1000_adapter *adapter)
static void e1000e_update_stats(struct e1000_adapter *adapter);
void e1000e_down(struct e1000_adapter *adapter)
void e1000e_reinit_locked(struct e1000_adapter *adapter)
static int __devinit e1000_sw_init(struct e1000_adapter *adapter)
static irqreturn_t e1000_intr_msi_test(int irq, void *data)
static int e1000_test_msi_interrupt(struct e1000_adapter *adapter)
static int e1000_test_msi(struct e1000_adapter *adapter)
static int e1000_open(struct net_device *netdev)
static int e1000_close(struct net_device *netdev)
static int e1000_set_mac(struct net_device *netdev, void *p)
static void e1000e_update_phy_task(struct work_struct *work)
static void e1000_update_phy_info(unsigned long data)
static void e1000e_update_phy_stats(struct e1000_adapter *adapter)
static void e1000e_update_stats(struct e1000_adapter *adapter)
static void e1000_phy_read_status(struct e1000_adapter *adapter)
static void e1000_print_link_info(struct e1000_adapter *adapter)
static bool e1000e_has_link(struct e1000_adapter *adapter)
static void e1000e_enable_receives(struct e1000_adapter *adapter)
static void e1000e_check_82574_phy_workaround(struct e1000_adapter *adapter)
static void e1000_watchdog(unsigned long data)
static void e1000_watchdog_task(struct work_struct *work)
#define E1000_TX_FLAGS_CSUM		0x00000001
#define E1000_TX_FLAGS_VLAN		0x00000002
#define E1000_TX_FLAGS_TSO		0x00000004
#define E1000_TX_FLAGS_IPV4		0x00000008
#define E1000_TX_FLAGS_VLAN_MASK	0xffff0000
#define E1000_TX_FLAGS_VLAN_SHIFT	16
static int e1000_tso(struct e1000_adapter *adapter,
struct sk_buff *skb)
static bool e1000_tx_csum(struct e1000_adapter *adapter, struct sk_buff *skb)
#define E1000_MAX_PER_TXD	8192
#define E1000_MAX_TXD_PWR	12
static int e1000_tx_map(struct e1000_adapter *adapter,
struct sk_buff *skb, unsigned int first,
unsigned int max_per_txd, unsigned int nr_frags,
unsigned int mss)
static void e1000_tx_queue(struct e1000_adapter *adapter,
int tx_flags, int count)
#define MINIMUM_DHCP_PACKET_SIZE 282
static int e1000_transfer_dhcp_info(struct e1000_adapter *adapter,
struct sk_buff *skb)
static int __e1000_maybe_stop_tx(struct net_device *netdev, int size)
static int e1000_maybe_stop_tx(struct net_device *netdev, int size)
#define TXD_USE_COUNT(S, X) (((S) >> (X)) + 1 )
static netdev_tx_t e1000_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static void e1000_tx_timeout(struct net_device *netdev)
static void e1000_reset_task(struct work_struct *work)
struct rtnl_link_stats64 *e1000e_get_stats64(struct net_device *netdev,
struct rtnl_link_stats64 *stats)
static int e1000_change_mtu(struct net_device *netdev, int new_mtu)
static int e1000_mii_ioctl(struct net_device *netdev, struct ifreq *ifr,
int cmd)
static int e1000_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int e1000_init_phy_wakeup(struct e1000_adapter *adapter, u32 wufc)
static int __e1000_shutdown(struct pci_dev *pdev, bool *enable_wake,
bool runtime)
static void e1000_power_off(struct pci_dev *pdev, bool sleep, bool wake)
static void e1000_complete_shutdown(struct pci_dev *pdev, bool sleep,
bool wake)
static void __e1000e_disable_aspm(struct pci_dev *pdev, u16 state)
static void __e1000e_disable_aspm(struct pci_dev *pdev, u16 state)
static void e1000e_disable_aspm(struct pci_dev *pdev, u16 state)
static bool e1000e_pm_ready(struct e1000_adapter *adapter)
static int __e1000_resume(struct pci_dev *pdev)
static int e1000_suspend(struct device *dev)
static int e1000_resume(struct device *dev)
static int e1000_runtime_suspend(struct device *dev)
static int e1000_idle(struct device *dev)
static int e1000_runtime_resume(struct device *dev)
static void e1000_shutdown(struct pci_dev *pdev)
static irqreturn_t e1000_intr_msix(int irq, void *data)
static void e1000_netpoll(struct net_device *netdev)
static pci_ers_result_t e1000_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t e1000_io_slot_reset(struct pci_dev *pdev)
static void e1000_io_resume(struct pci_dev *pdev)
static void e1000_print_device_info(struct e1000_adapter *adapter)
static void e1000_eeprom_checks(struct e1000_adapter *adapter)
static const struct net_device_ops e1000e_netdev_ops = ;
static int __devinit e1000_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit e1000_remove(struct pci_dev *pdev)
static struct pci_error_handlers e1000_err_handler = ;
static DEFINE_PCI_DEVICE_TABLE(e1000_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, e1000_pci_tbl);
static const struct dev_pm_ops e1000_pm_ops = ;
static struct pci_driver e1000_driver = ;
static int __init e1000_init_module(void)
module_init(e1000_init_module);
static void __exit e1000_exit_module(void)
module_exit(e1000_exit_module);
MODULE_AUTHOR("Intel Corporation, <linux.nics@intel.com>");
MODULE_DESCRIPTION("Intel(R) PRO/1000 Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);

static unsigned long ce4100_gbe_mdio_base_phy;
void __iomem *ce4100_gbe_mdio_base_virt;
char e1000_driver_name[] = "e1000";
static char e1000_driver_string[] = "Intel(R) PRO/1000 Network Driver";
#define DRV_VERSION "7.3.21-k8-NAPI"
const char e1000_driver_version[] = DRV_VERSION;
static const char e1000_copyright[] = "Copyright (c) 1999-2006 Intel Corporation.";
static DEFINE_PCI_DEVICE_TABLE(e1000_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, e1000_pci_tbl);
int e1000_up(struct e1000_adapter *adapter);
void e1000_down(struct e1000_adapter *adapter);
void e1000_reinit_locked(struct e1000_adapter *adapter);
void e1000_reset(struct e1000_adapter *adapter);
int e1000_setup_all_tx_resources(struct e1000_adapter *adapter);
int e1000_setup_all_rx_resources(struct e1000_adapter *adapter);
void e1000_free_all_tx_resources(struct e1000_adapter *adapter);
void e1000_free_all_rx_resources(struct e1000_adapter *adapter);
static int e1000_setup_tx_resources(struct e1000_adapter *adapter,
struct e1000_tx_ring *txdr);
static int e1000_setup_rx_resources(struct e1000_adapter *adapter,
struct e1000_rx_ring *rxdr);
static void e1000_free_tx_resources(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring);
static void e1000_free_rx_resources(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring);
void e1000_update_stats(struct e1000_adapter *adapter);
static int e1000_init_module(void);
static void e1000_exit_module(void);
static int e1000_probe(struct pci_dev *pdev, const struct pci_device_id *ent);
static void __devexit e1000_remove(struct pci_dev *pdev);
static int e1000_alloc_queues(struct e1000_adapter *adapter);
static int e1000_sw_init(struct e1000_adapter *adapter);
static int e1000_open(struct net_device *netdev);
static int e1000_close(struct net_device *netdev);
static void e1000_configure_tx(struct e1000_adapter *adapter);
static void e1000_configure_rx(struct e1000_adapter *adapter);
static void e1000_setup_rctl(struct e1000_adapter *adapter);
static void e1000_clean_all_tx_rings(struct e1000_adapter *adapter);
static void e1000_clean_all_rx_rings(struct e1000_adapter *adapter);
static void e1000_clean_tx_ring(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring);
static void e1000_clean_rx_ring(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring);
static void e1000_set_rx_mode(struct net_device *netdev);
static void e1000_update_phy_info(unsigned long data);
static void e1000_update_phy_info_task(struct work_struct *work);
static void e1000_watchdog(unsigned long data);
static void e1000_82547_tx_fifo_stall(unsigned long data);
static void e1000_82547_tx_fifo_stall_task(struct work_struct *work);
static netdev_tx_t e1000_xmit_frame(struct sk_buff *skb,
struct net_device *netdev);
static struct net_device_stats * e1000_get_stats(struct net_device *netdev);
static int e1000_change_mtu(struct net_device *netdev, int new_mtu);
static int e1000_set_mac(struct net_device *netdev, void *p);
static irqreturn_t e1000_intr(int irq, void *data);
static bool e1000_clean_tx_irq(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring);
static int e1000_clean(struct napi_struct *napi, int budget);
static bool e1000_clean_rx_irq(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring,
int *work_done, int work_to_do);
static bool e1000_clean_jumbo_rx_irq(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring,
int *work_done, int work_to_do);
static void e1000_alloc_rx_buffers(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring,
int cleaned_count);
static void e1000_alloc_jumbo_rx_buffers(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring,
int cleaned_count);
static int e1000_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd);
static int e1000_mii_ioctl(struct net_device *netdev, struct ifreq *ifr,
int cmd);
static void e1000_enter_82542_rst(struct e1000_adapter *adapter);
static void e1000_leave_82542_rst(struct e1000_adapter *adapter);
static void e1000_tx_timeout(struct net_device *dev);
static void e1000_reset_task(struct work_struct *work);
static void e1000_smartspeed(struct e1000_adapter *adapter);
static int e1000_82547_fifo_workaround(struct e1000_adapter *adapter,
struct sk_buff *skb);
static void e1000_vlan_rx_register(struct net_device *netdev, struct vlan_group *grp);
static void e1000_vlan_rx_add_vid(struct net_device *netdev, u16 vid);
static void e1000_vlan_rx_kill_vid(struct net_device *netdev, u16 vid);
static void e1000_restore_vlan(struct e1000_adapter *adapter);
static int e1000_suspend(struct pci_dev *pdev, pm_message_t state);
static int e1000_resume(struct pci_dev *pdev);
static void e1000_shutdown(struct pci_dev *pdev);
static void e1000_netpoll (struct net_device *netdev);
#define COPYBREAK_DEFAULT 256
static unsigned int copybreak __read_mostly = COPYBREAK_DEFAULT;
module_param(copybreak, uint, 0644);
MODULE_PARM_DESC(copybreak,
"Maximum size of packet that is copied to a new buffer on receive");
static pci_ers_result_t e1000_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state);
static pci_ers_result_t e1000_io_slot_reset(struct pci_dev *pdev);
static void e1000_io_resume(struct pci_dev *pdev);
static struct pci_error_handlers e1000_err_handler = ;
static struct pci_driver e1000_driver = ;
MODULE_AUTHOR("Intel Corporation, <linux.nics@intel.com>");
MODULE_DESCRIPTION("Intel(R) PRO/1000 Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
static int debug = NETIF_MSG_DRV | NETIF_MSG_PROBE;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0=none,...,16=all)");
struct net_device *e1000_get_hw_dev(struct e1000_hw *hw)
static int __init e1000_init_module(void)
module_init(e1000_init_module);
static void __exit e1000_exit_module(void)
module_exit(e1000_exit_module);
static int e1000_request_irq(struct e1000_adapter *adapter)
static void e1000_free_irq(struct e1000_adapter *adapter)
static void e1000_irq_disable(struct e1000_adapter *adapter)
static void e1000_irq_enable(struct e1000_adapter *adapter)
static void e1000_update_mng_vlan(struct e1000_adapter *adapter)
static void e1000_init_manageability(struct e1000_adapter *adapter)
static void e1000_release_manageability(struct e1000_adapter *adapter)
static void e1000_configure(struct e1000_adapter *adapter)
int e1000_up(struct e1000_adapter *adapter)
void e1000_power_up_phy(struct e1000_adapter *adapter)
static void e1000_power_down_phy(struct e1000_adapter *adapter)
void e1000_down(struct e1000_adapter *adapter)
static void e1000_reinit_safe(struct e1000_adapter *adapter)
void e1000_reinit_locked(struct e1000_adapter *adapter)
void e1000_reset(struct e1000_adapter *adapter)
static void e1000_dump_eeprom(struct e1000_adapter *adapter)
static int e1000_is_need_ioport(struct pci_dev *pdev)
static const struct net_device_ops e1000_netdev_ops = ;
static int e1000_init_hw_struct(struct e1000_adapter *adapter,
struct e1000_hw *hw)
static int __devinit e1000_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit e1000_remove(struct pci_dev *pdev)
static int __devinit e1000_sw_init(struct e1000_adapter *adapter)
static int __devinit e1000_alloc_queues(struct e1000_adapter *adapter)
static int e1000_open(struct net_device *netdev)
static int e1000_close(struct net_device *netdev)
static bool e1000_check_64k_bound(struct e1000_adapter *adapter, void *start,
unsigned long len)
static int e1000_setup_tx_resources(struct e1000_adapter *adapter,
struct e1000_tx_ring *txdr)
int e1000_setup_all_tx_resources(struct e1000_adapter *adapter)
static void e1000_configure_tx(struct e1000_adapter *adapter)
static int e1000_setup_rx_resources(struct e1000_adapter *adapter,
struct e1000_rx_ring *rxdr)
int e1000_setup_all_rx_resources(struct e1000_adapter *adapter)
static void e1000_setup_rctl(struct e1000_adapter *adapter)
static void e1000_configure_rx(struct e1000_adapter *adapter)
static void e1000_free_tx_resources(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring)
void e1000_free_all_tx_resources(struct e1000_adapter *adapter)
static void e1000_unmap_and_free_tx_resource(struct e1000_adapter *adapter,
struct e1000_buffer *buffer_info)
static void e1000_clean_tx_ring(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring)
static void e1000_clean_all_tx_rings(struct e1000_adapter *adapter)
static void e1000_free_rx_resources(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring)
void e1000_free_all_rx_resources(struct e1000_adapter *adapter)
static void e1000_clean_rx_ring(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring)
static void e1000_clean_all_rx_rings(struct e1000_adapter *adapter)
static void e1000_enter_82542_rst(struct e1000_adapter *adapter)
static void e1000_leave_82542_rst(struct e1000_adapter *adapter)
static int e1000_set_mac(struct net_device *netdev, void *p)
static void e1000_set_rx_mode(struct net_device *netdev)
static void e1000_update_phy_info(unsigned long data)
static void e1000_update_phy_info_task(struct work_struct *work)
static void e1000_82547_tx_fifo_stall(unsigned long data)
static void e1000_82547_tx_fifo_stall_task(struct work_struct *work)
bool e1000_has_link(struct e1000_adapter *adapter)
static void e1000_watchdog(unsigned long data)
enum latency_range ;
static unsigned int e1000_update_itr(struct e1000_adapter *adapter,
u16 itr_setting, int packets, int bytes)
static void e1000_set_itr(struct e1000_adapter *adapter)
#define E1000_TX_FLAGS_CSUM		0x00000001
#define E1000_TX_FLAGS_VLAN		0x00000002
#define E1000_TX_FLAGS_TSO		0x00000004
#define E1000_TX_FLAGS_IPV4		0x00000008
#define E1000_TX_FLAGS_VLAN_MASK	0xffff0000
#define E1000_TX_FLAGS_VLAN_SHIFT	16
static int e1000_tso(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring, struct sk_buff *skb)
static bool e1000_tx_csum(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring, struct sk_buff *skb)
#define E1000_MAX_TXD_PWR	12
#define E1000_MAX_DATA_PER_TXD	(1<<E1000_MAX_TXD_PWR)
static int e1000_tx_map(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring,
struct sk_buff *skb, unsigned int first,
unsigned int max_per_txd, unsigned int nr_frags,
unsigned int mss)
static void e1000_tx_queue(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring, int tx_flags,
int count)
#define E1000_FIFO_HDR			0x10
#define E1000_82547_PAD_LEN		0x3E0
static int e1000_82547_fifo_workaround(struct e1000_adapter *adapter,
struct sk_buff *skb)
static int __e1000_maybe_stop_tx(struct net_device *netdev, int size)
static int e1000_maybe_stop_tx(struct net_device *netdev,
struct e1000_tx_ring *tx_ring, int size)
#define TXD_USE_COUNT(S, X) (((S) >> (X)) + 1 )
static netdev_tx_t e1000_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static void e1000_tx_timeout(struct net_device *netdev)
static void e1000_reset_task(struct work_struct *work)
static struct net_device_stats *e1000_get_stats(struct net_device *netdev)
static int e1000_change_mtu(struct net_device *netdev, int new_mtu)
void e1000_update_stats(struct e1000_adapter *adapter)
static irqreturn_t e1000_intr(int irq, void *data)
static int e1000_clean(struct napi_struct *napi, int budget)
static bool e1000_clean_tx_irq(struct e1000_adapter *adapter,
struct e1000_tx_ring *tx_ring)
static void e1000_rx_checksum(struct e1000_adapter *adapter, u32 status_err,
u32 csum, struct sk_buff *skb)
static void e1000_consume_page(struct e1000_buffer *bi, struct sk_buff *skb,
u16 length)
static void e1000_receive_skb(struct e1000_adapter *adapter, u8 status,
__le16 vlan, struct sk_buff *skb)
static bool e1000_clean_jumbo_rx_irq(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring,
int *work_done, int work_to_do)
static void e1000_check_copybreak(struct net_device *netdev,
struct e1000_buffer *buffer_info,
u32 length, struct sk_buff **skb)
static bool e1000_clean_rx_irq(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring,
int *work_done, int work_to_do)
static void
e1000_alloc_jumbo_rx_buffers(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring, int cleaned_count)
static void e1000_alloc_rx_buffers(struct e1000_adapter *adapter,
struct e1000_rx_ring *rx_ring,
int cleaned_count)
static void e1000_smartspeed(struct e1000_adapter *adapter)
static int e1000_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int e1000_mii_ioctl(struct net_device *netdev, struct ifreq *ifr,
int cmd)
void e1000_pci_set_mwi(struct e1000_hw *hw)
void e1000_pci_clear_mwi(struct e1000_hw *hw)
int e1000_pcix_get_mmrbc(struct e1000_hw *hw)
void e1000_pcix_set_mmrbc(struct e1000_hw *hw, int mmrbc)
void e1000_io_write(struct e1000_hw *hw, unsigned long port, u32 value)
static void e1000_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp)
static void e1000_vlan_rx_add_vid(struct net_device *netdev, u16 vid)
static void e1000_vlan_rx_kill_vid(struct net_device *netdev, u16 vid)
static void e1000_restore_vlan(struct e1000_adapter *adapter)
int e1000_set_spd_dplx(struct e1000_adapter *adapter, u32 spd, u8 dplx)
static int __e1000_shutdown(struct pci_dev *pdev, bool *enable_wake)
static int e1000_suspend(struct pci_dev *pdev, pm_message_t state)
static int e1000_resume(struct pci_dev *pdev)
static void e1000_shutdown(struct pci_dev *pdev)
static void e1000_netpoll(struct net_device *netdev)
static pci_ers_result_t e1000_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t e1000_io_slot_reset(struct pci_dev *pdev)
static void e1000_io_resume(struct pci_dev *pdev)

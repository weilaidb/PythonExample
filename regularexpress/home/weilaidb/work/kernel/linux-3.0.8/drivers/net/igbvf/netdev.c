#define DRV_VERSION "1.0.8-k0"
char igbvf_driver_name[] = "igbvf";
const char igbvf_driver_version[] = DRV_VERSION;
static const char igbvf_driver_string[] =
"Intel(R) Virtual Function Network Driver";
static const char igbvf_copyright[] =
"Copyright (c) 2009 - 2010 Intel Corporation.";
static int igbvf_poll(struct napi_struct *napi, int budget);
static void igbvf_reset(struct igbvf_adapter *);
static void igbvf_set_interrupt_capability(struct igbvf_adapter *);
static void igbvf_reset_interrupt_capability(struct igbvf_adapter *);
static struct igbvf_info igbvf_vf_info = ;
static struct igbvf_info igbvf_i350_vf_info = ;
static const struct igbvf_info *igbvf_info_tbl[] = ;
static int igbvf_desc_unused(struct igbvf_ring *ring)
static void igbvf_receive_skb(struct igbvf_adapter *adapter,
struct net_device *netdev,
struct sk_buff *skb,
u32 status, u16 vlan)
static inline void igbvf_rx_checksum_adv(struct igbvf_adapter *adapter,
u32 status_err, struct sk_buff *skb)
static void igbvf_alloc_rx_buffers(struct igbvf_ring *rx_ring,
int cleaned_count)
static bool igbvf_clean_rx_irq(struct igbvf_adapter *adapter,
int *work_done, int work_to_do)
static void igbvf_put_txbuf(struct igbvf_adapter *adapter,
struct igbvf_buffer *buffer_info)
int igbvf_setup_tx_resources(struct igbvf_adapter *adapter,
struct igbvf_ring *tx_ring)
int igbvf_setup_rx_resources(struct igbvf_adapter *adapter,
struct igbvf_ring *rx_ring)
static void igbvf_clean_tx_ring(struct igbvf_ring *tx_ring)
void igbvf_free_tx_resources(struct igbvf_ring *tx_ring)
static void igbvf_clean_rx_ring(struct igbvf_ring *rx_ring)
void igbvf_free_rx_resources(struct igbvf_ring *rx_ring)
static unsigned int igbvf_update_itr(struct igbvf_adapter *adapter,
u16 itr_setting, int packets,
int bytes)
static void igbvf_set_itr(struct igbvf_adapter *adapter)
static bool igbvf_clean_tx_irq(struct igbvf_ring *tx_ring)
static irqreturn_t igbvf_msix_other(int irq, void *data)
static irqreturn_t igbvf_intr_msix_tx(int irq, void *data)
static irqreturn_t igbvf_intr_msix_rx(int irq, void *data)
#define IGBVF_NO_QUEUE -1
static void igbvf_assign_vector(struct igbvf_adapter *adapter, int rx_queue,
int tx_queue, int msix_vector)
static void igbvf_configure_msix(struct igbvf_adapter *adapter)
static void igbvf_reset_interrupt_capability(struct igbvf_adapter *adapter)
static void igbvf_set_interrupt_capability(struct igbvf_adapter *adapter)
static int igbvf_request_msix(struct igbvf_adapter *adapter)
static int __devinit igbvf_alloc_queues(struct igbvf_adapter *adapter)
static int igbvf_request_irq(struct igbvf_adapter *adapter)
static void igbvf_free_irq(struct igbvf_adapter *adapter)
static void igbvf_irq_disable(struct igbvf_adapter *adapter)
static void igbvf_irq_enable(struct igbvf_adapter *adapter)
static int igbvf_poll(struct napi_struct *napi, int budget)
static void igbvf_set_rlpml(struct igbvf_adapter *adapter)
static void igbvf_vlan_rx_add_vid(struct net_device *netdev, u16 vid)
static void igbvf_vlan_rx_kill_vid(struct net_device *netdev, u16 vid)
static void igbvf_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp)
static void igbvf_restore_vlan(struct igbvf_adapter *adapter)
static void igbvf_configure_tx(struct igbvf_adapter *adapter)
static void igbvf_setup_srrctl(struct igbvf_adapter *adapter)
static void igbvf_configure_rx(struct igbvf_adapter *adapter)
static void igbvf_set_multi(struct net_device *netdev)
static void igbvf_configure(struct igbvf_adapter *adapter)
static void igbvf_reset(struct igbvf_adapter *adapter)
int igbvf_up(struct igbvf_adapter *adapter)
void igbvf_down(struct igbvf_adapter *adapter)
void igbvf_reinit_locked(struct igbvf_adapter *adapter)
static int __devinit igbvf_sw_init(struct igbvf_adapter *adapter)
static void igbvf_initialize_last_counter_stats(struct igbvf_adapter *adapter)
static int igbvf_open(struct net_device *netdev)
static int igbvf_close(struct net_device *netdev)
static int igbvf_set_mac(struct net_device *netdev, void *p)
#define UPDATE_VF_COUNTER(reg, name)                                    \
void igbvf_update_stats(struct igbvf_adapter *adapter)
static void igbvf_print_link_info(struct igbvf_adapter *adapter)
static bool igbvf_has_link(struct igbvf_adapter *adapter)
static void igbvf_watchdog(unsigned long data)
static void igbvf_watchdog_task(struct work_struct *work)
#define IGBVF_TX_FLAGS_CSUM             0x00000001
#define IGBVF_TX_FLAGS_VLAN             0x00000002
#define IGBVF_TX_FLAGS_TSO              0x00000004
#define IGBVF_TX_FLAGS_IPV4             0x00000008
#define IGBVF_TX_FLAGS_VLAN_MASK        0xffff0000
#define IGBVF_TX_FLAGS_VLAN_SHIFT       16
static int igbvf_tso(struct igbvf_adapter *adapter,
struct igbvf_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags, u8 *hdr_len)
static inline bool igbvf_tx_csum(struct igbvf_adapter *adapter,
struct igbvf_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags)
static int igbvf_maybe_stop_tx(struct net_device *netdev, int size)
#define IGBVF_MAX_TXD_PWR       16
#define IGBVF_MAX_DATA_PER_TXD  (1 << IGBVF_MAX_TXD_PWR)
static inline int igbvf_tx_map_adv(struct igbvf_adapter *adapter,
struct igbvf_ring *tx_ring,
struct sk_buff *skb,
unsigned int first)
static inline void igbvf_tx_queue_adv(struct igbvf_adapter *adapter,
struct igbvf_ring *tx_ring,
int tx_flags, int count, u32 paylen,
u8 hdr_len)
static netdev_tx_t igbvf_xmit_frame_ring_adv(struct sk_buff *skb,
struct net_device *netdev,
struct igbvf_ring *tx_ring)
static netdev_tx_t igbvf_xmit_frame(struct sk_buff *skb,
struct net_device *netdev)
static void igbvf_tx_timeout(struct net_device *netdev)
static void igbvf_reset_task(struct work_struct *work)
static struct net_device_stats *igbvf_get_stats(struct net_device *netdev)
static int igbvf_change_mtu(struct net_device *netdev, int new_mtu)
static int igbvf_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int igbvf_suspend(struct pci_dev *pdev, pm_message_t state)
static int igbvf_resume(struct pci_dev *pdev)
static void igbvf_shutdown(struct pci_dev *pdev)
static void igbvf_netpoll(struct net_device *netdev)
static pci_ers_result_t igbvf_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t igbvf_io_slot_reset(struct pci_dev *pdev)
static void igbvf_io_resume(struct pci_dev *pdev)
static void igbvf_print_device_info(struct igbvf_adapter *adapter)
static const struct net_device_ops igbvf_netdev_ops = ;
static int __devinit igbvf_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit igbvf_remove(struct pci_dev *pdev)
static struct pci_error_handlers igbvf_err_handler = ;
static DEFINE_PCI_DEVICE_TABLE(igbvf_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, igbvf_pci_tbl);
static struct pci_driver igbvf_driver = ;
static int __init igbvf_init_module(void)
module_init(igbvf_init_module);
static void __exit igbvf_exit_module(void)
module_exit(igbvf_exit_module);
MODULE_AUTHOR("Intel Corporation, <e1000-devel@lists.sourceforge.net>");
MODULE_DESCRIPTION("Intel(R) 82576 Virtual Function Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);

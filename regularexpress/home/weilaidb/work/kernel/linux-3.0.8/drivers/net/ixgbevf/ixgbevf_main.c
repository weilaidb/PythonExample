char ixgbevf_driver_name[] = "ixgbevf";
static const char ixgbevf_driver_string[] =
"Intel(R) 10 Gigabit PCI Express Virtual Function Network Driver";
#define DRV_VERSION "2.0.0-k2"
const char ixgbevf_driver_version[] = DRV_VERSION;
static char ixgbevf_copyright[] =
"Copyright (c) 2009 - 2010 Intel Corporation.";
static const struct ixgbevf_info *ixgbevf_info_tbl[] = ;
static struct pci_device_id ixgbevf_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, ixgbevf_pci_tbl);
MODULE_AUTHOR("Intel Corporation, <linux.nics@intel.com>");
MODULE_DESCRIPTION("Intel(R) 82599 Virtual Function Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
#define DEFAULT_DEBUG_LEVEL_SHIFT 3
static void ixgbevf_set_itr_msix(struct ixgbevf_q_vector *q_vector);
static void ixgbevf_write_eitr(struct ixgbevf_adapter *adapter, int v_idx,
u32 itr_reg);
static inline void ixgbevf_release_rx_desc(struct ixgbe_hw *hw,
struct ixgbevf_ring *rx_ring,
u32 val)
static void ixgbevf_set_ivar(struct ixgbevf_adapter *adapter, s8 direction,
u8 queue, u8 msix_vector)
static void ixgbevf_unmap_and_free_tx_resource(struct ixgbevf_adapter *adapter,
struct ixgbevf_tx_buffer
*tx_buffer_info)
#define IXGBE_MAX_TXD_PWR	14
#define IXGBE_MAX_DATA_PER_TXD	(1 << IXGBE_MAX_TXD_PWR)
#define TXD_USE_COUNT(S) (((S) >> IXGBE_MAX_TXD_PWR) + \
(((S) & (IXGBE_MAX_DATA_PER_TXD - 1)) ? 1 : 0))
#define DESC_NEEDED (TXD_USE_COUNT(IXGBE_MAX_DATA_PER_TXD) + \
MAX_SKB_FRAGS * TXD_USE_COUNT(PAGE_SIZE) + 1)
#define DESC_NEEDED TXD_USE_COUNT(IXGBE_MAX_DATA_PER_TXD)
static void ixgbevf_tx_timeout(struct net_device *netdev);
static bool ixgbevf_clean_tx_irq(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *tx_ring)
static void ixgbevf_receive_skb(struct ixgbevf_q_vector *q_vector,
struct sk_buff *skb, u8 status,
struct ixgbevf_ring *ring,
union ixgbe_adv_rx_desc *rx_desc)
static inline void ixgbevf_rx_checksum(struct ixgbevf_adapter *adapter,
u32 status_err, struct sk_buff *skb)
static void ixgbevf_alloc_rx_buffers(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *rx_ring,
int cleaned_count)
static inline void ixgbevf_irq_enable_queues(struct ixgbevf_adapter *adapter,
u64 qmask)
static inline u16 ixgbevf_get_hdr_info(union ixgbe_adv_rx_desc *rx_desc)
static inline u16 ixgbevf_get_pkt_info(union ixgbe_adv_rx_desc *rx_desc)
static bool ixgbevf_clean_rx_irq(struct ixgbevf_q_vector *q_vector,
struct ixgbevf_ring *rx_ring,
int *work_done, int work_to_do)
static int ixgbevf_clean_rxonly(struct napi_struct *napi, int budget)
static int ixgbevf_clean_rxonly_many(struct napi_struct *napi, int budget)
static void ixgbevf_configure_msix(struct ixgbevf_adapter *adapter)
enum latency_range ;
static u8 ixgbevf_update_itr(struct ixgbevf_adapter *adapter,
u32 eitr, u8 itr_setting,
int packets, int bytes)
static void ixgbevf_write_eitr(struct ixgbevf_adapter *adapter, int v_idx,
u32 itr_reg)
static void ixgbevf_set_itr_msix(struct ixgbevf_q_vector *q_vector)
static irqreturn_t ixgbevf_msix_mbx(int irq, void *data)
static irqreturn_t ixgbevf_msix_clean_tx(int irq, void *data)
static irqreturn_t ixgbevf_msix_clean_rx(int irq, void *data)
static irqreturn_t ixgbevf_msix_clean_many(int irq, void *data)
static inline void map_vector_to_rxq(struct ixgbevf_adapter *a, int v_idx,
int r_idx)
static inline void map_vector_to_txq(struct ixgbevf_adapter *a, int v_idx,
int t_idx)
static int ixgbevf_map_rings_to_vectors(struct ixgbevf_adapter *adapter)
static int ixgbevf_request_msix_irqs(struct ixgbevf_adapter *adapter)
static inline void ixgbevf_reset_q_vectors(struct ixgbevf_adapter *adapter)
static int ixgbevf_request_irq(struct ixgbevf_adapter *adapter)
static void ixgbevf_free_irq(struct ixgbevf_adapter *adapter)
static inline void ixgbevf_irq_disable(struct ixgbevf_adapter *adapter)
static inline void ixgbevf_irq_enable(struct ixgbevf_adapter *adapter,
bool queues, bool flush)
static void ixgbevf_configure_tx(struct ixgbevf_adapter *adapter)
#define IXGBE_SRRCTL_BSIZEHDRSIZE_SHIFT	2
static void ixgbevf_configure_srrctl(struct ixgbevf_adapter *adapter, int index)
static void ixgbevf_configure_rx(struct ixgbevf_adapter *adapter)
static void ixgbevf_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp)
static void ixgbevf_vlan_rx_add_vid(struct net_device *netdev, u16 vid)
static void ixgbevf_vlan_rx_kill_vid(struct net_device *netdev, u16 vid)
static void ixgbevf_restore_vlan(struct ixgbevf_adapter *adapter)
static int ixgbevf_write_uc_addr_list(struct net_device *netdev)
static void ixgbevf_set_rx_mode(struct net_device *netdev)
static void ixgbevf_napi_enable_all(struct ixgbevf_adapter *adapter)
static void ixgbevf_napi_disable_all(struct ixgbevf_adapter *adapter)
static void ixgbevf_configure(struct ixgbevf_adapter *adapter)
#define IXGBE_MAX_RX_DESC_POLL 10
static inline void ixgbevf_rx_desc_queue_enable(struct ixgbevf_adapter *adapter,
int rxr)
static void ixgbevf_save_reset_stats(struct ixgbevf_adapter *adapter)
static void ixgbevf_init_last_counter_stats(struct ixgbevf_adapter *adapter)
static int ixgbevf_up_complete(struct ixgbevf_adapter *adapter)
int ixgbevf_up(struct ixgbevf_adapter *adapter)
static void ixgbevf_clean_rx_ring(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *rx_ring)
static void ixgbevf_clean_tx_ring(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *tx_ring)
static void ixgbevf_clean_all_rx_rings(struct ixgbevf_adapter *adapter)
static void ixgbevf_clean_all_tx_rings(struct ixgbevf_adapter *adapter)
void ixgbevf_down(struct ixgbevf_adapter *adapter)
void ixgbevf_reinit_locked(struct ixgbevf_adapter *adapter)
void ixgbevf_reset(struct ixgbevf_adapter *adapter)
static void ixgbevf_acquire_msix_vectors(struct ixgbevf_adapter *adapter,
int vectors)
static void ixgbevf_set_num_queues(struct ixgbevf_adapter *adapter)
static int ixgbevf_alloc_queues(struct ixgbevf_adapter *adapter)
static int ixgbevf_set_interrupt_capability(struct ixgbevf_adapter *adapter)
static int ixgbevf_alloc_q_vectors(struct ixgbevf_adapter *adapter)
static void ixgbevf_free_q_vectors(struct ixgbevf_adapter *adapter)
static void ixgbevf_reset_interrupt_capability(struct ixgbevf_adapter *adapter)
static int ixgbevf_init_interrupt_scheme(struct ixgbevf_adapter *adapter)
static int __devinit ixgbevf_sw_init(struct ixgbevf_adapter *adapter)
#define UPDATE_VF_COUNTER_32bit(reg, last_counter, counter)	\
#define UPDATE_VF_COUNTER_36bit(reg_lsb, reg_msb, last_counter, counter) \
void ixgbevf_update_stats(struct ixgbevf_adapter *adapter)
static void ixgbevf_watchdog(unsigned long data)
static void ixgbevf_tx_timeout(struct net_device *netdev)
static void ixgbevf_reset_task(struct work_struct *work)
static void ixgbevf_watchdog_task(struct work_struct *work)
void ixgbevf_free_tx_resources(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *tx_ring)
static void ixgbevf_free_all_tx_resources(struct ixgbevf_adapter *adapter)
int ixgbevf_setup_tx_resources(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *tx_ring)
static int ixgbevf_setup_all_tx_resources(struct ixgbevf_adapter *adapter)
int ixgbevf_setup_rx_resources(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *rx_ring)
static int ixgbevf_setup_all_rx_resources(struct ixgbevf_adapter *adapter)
void ixgbevf_free_rx_resources(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *rx_ring)
static void ixgbevf_free_all_rx_resources(struct ixgbevf_adapter *adapter)
static int ixgbevf_open(struct net_device *netdev)
static int ixgbevf_close(struct net_device *netdev)
static int ixgbevf_tso(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags, u8 *hdr_len)
static bool ixgbevf_tx_csum(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags)
static int ixgbevf_tx_map(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags,
unsigned int first)
static void ixgbevf_tx_queue(struct ixgbevf_adapter *adapter,
struct ixgbevf_ring *tx_ring, int tx_flags,
int count, u32 paylen, u8 hdr_len)
static int __ixgbevf_maybe_stop_tx(struct net_device *netdev,
struct ixgbevf_ring *tx_ring, int size)
static int ixgbevf_maybe_stop_tx(struct net_device *netdev,
struct ixgbevf_ring *tx_ring, int size)
static int ixgbevf_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static int ixgbevf_set_mac(struct net_device *netdev, void *p)
static int ixgbevf_change_mtu(struct net_device *netdev, int new_mtu)
static void ixgbevf_shutdown(struct pci_dev *pdev)
static const struct net_device_ops ixgbe_netdev_ops = ;
static void ixgbevf_assign_netdev_ops(struct net_device *dev)
static int __devinit ixgbevf_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit ixgbevf_remove(struct pci_dev *pdev)
static struct pci_driver ixgbevf_driver = ;
static int __init ixgbevf_init_module(void)
module_init(ixgbevf_init_module);
static void __exit ixgbevf_exit_module(void)
char *ixgbevf_get_hw_dev_name(struct ixgbe_hw *hw)
module_exit(ixgbevf_exit_module);

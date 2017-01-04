char ixgbe_driver_name[] = "ixgbe";
static const char ixgbe_driver_string[] =
"Intel(R) 10 Gigabit PCI Express Network Driver";
#define MAJ 3
#define MIN 3
#define BUILD 8
#define KFIX 2
#define DRV_VERSION __stringify(MAJ) "." __stringify(MIN) "." \
__stringify(BUILD) "-k" __stringify(KFIX)
const char ixgbe_driver_version[] = DRV_VERSION;
static const char ixgbe_copyright[] =
"Copyright (c) 1999-2011 Intel Corporation.";
static const struct ixgbe_info *ixgbe_info_tbl[] = ;
static DEFINE_PCI_DEVICE_TABLE(ixgbe_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, ixgbe_pci_tbl);
static int ixgbe_notify_dca(struct notifier_block *, unsigned long event,
void *p);
static struct notifier_block dca_notifier = ;
static unsigned int max_vfs;
module_param(max_vfs, uint, 0);
MODULE_PARM_DESC(max_vfs,
"Maximum number of virtual functions to allocate per physical function");
MODULE_AUTHOR("Intel Corporation, <linux.nics@intel.com>");
MODULE_DESCRIPTION("Intel(R) 10 Gigabit PCI Express Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
#define DEFAULT_DEBUG_LEVEL_SHIFT 3
static inline void ixgbe_disable_sriov(struct ixgbe_adapter *adapter)
static void ixgbe_service_event_schedule(struct ixgbe_adapter *adapter)
static void ixgbe_service_event_complete(struct ixgbe_adapter *adapter)
struct ixgbe_reg_info ;
static const struct ixgbe_reg_info ixgbe_reg_info_tbl[] = ;
static void ixgbe_regdump(struct ixgbe_hw *hw, struct ixgbe_reg_info *reginfo)
static void ixgbe_dump(struct ixgbe_adapter *adapter)
static void ixgbe_release_hw_control(struct ixgbe_adapter *adapter)
static void ixgbe_get_hw_control(struct ixgbe_adapter *adapter)
static void ixgbe_set_ivar(struct ixgbe_adapter *adapter, s8 direction,
u8 queue, u8 msix_vector)
static inline void ixgbe_irq_rearm_queues(struct ixgbe_adapter *adapter,
u64 qmask)
void ixgbe_unmap_and_free_tx_resource(struct ixgbe_ring *tx_ring,
struct ixgbe_tx_buffer *tx_buffer_info)
static u8 ixgbe_dcb_txq_to_tc(struct ixgbe_adapter *adapter, u8 reg_idx)
static void ixgbe_update_xoff_received(struct ixgbe_adapter *adapter)
static u64 ixgbe_get_tx_completed(struct ixgbe_ring *ring)
static u64 ixgbe_get_tx_pending(struct ixgbe_ring *ring)
static inline bool ixgbe_check_tx_hang(struct ixgbe_ring *tx_ring)
#define IXGBE_MAX_TXD_PWR       14
#define IXGBE_MAX_DATA_PER_TXD  (1 << IXGBE_MAX_TXD_PWR)
#define TXD_USE_COUNT(S) (((S) >> IXGBE_MAX_TXD_PWR) + \
(((S) & (IXGBE_MAX_DATA_PER_TXD - 1)) ? 1 : 0))
#define DESC_NEEDED (TXD_USE_COUNT(IXGBE_MAX_DATA_PER_TXD) + \
MAX_SKB_FRAGS * TXD_USE_COUNT(PAGE_SIZE) + 1)
static void ixgbe_tx_timeout_reset(struct ixgbe_adapter *adapter)
static bool ixgbe_clean_tx_irq(struct ixgbe_q_vector *q_vector,
struct ixgbe_ring *tx_ring)
static void ixgbe_update_rx_dca(struct ixgbe_adapter *adapter,
struct ixgbe_ring *rx_ring,
int cpu)
static void ixgbe_update_tx_dca(struct ixgbe_adapter *adapter,
struct ixgbe_ring *tx_ring,
int cpu)
static void ixgbe_update_dca(struct ixgbe_q_vector *q_vector)
static void ixgbe_setup_dca(struct ixgbe_adapter *adapter)
static int __ixgbe_notify_dca(struct device *dev, void *data)
static inline void ixgbe_rx_hash(union ixgbe_adv_rx_desc *rx_desc,
struct sk_buff *skb)
static void ixgbe_receive_skb(struct ixgbe_q_vector *q_vector,
struct sk_buff *skb, u8 status,
struct ixgbe_ring *ring,
union ixgbe_adv_rx_desc *rx_desc)
static inline void ixgbe_rx_checksum(struct ixgbe_adapter *adapter,
union ixgbe_adv_rx_desc *rx_desc,
struct sk_buff *skb)
static inline void ixgbe_release_rx_desc(struct ixgbe_ring *rx_ring, u32 val)
void ixgbe_alloc_rx_buffers(struct ixgbe_ring *rx_ring, u16 cleaned_count)
static inline u16 ixgbe_get_hlen(union ixgbe_adv_rx_desc *rx_desc)
static inline struct sk_buff *ixgbe_transform_rsc_queue(struct sk_buff *skb)
static inline bool ixgbe_get_rsc_state(union ixgbe_adv_rx_desc *rx_desc)
static void ixgbe_clean_rx_irq(struct ixgbe_q_vector *q_vector,
struct ixgbe_ring *rx_ring,
int *work_done, int work_to_do)
static int ixgbe_clean_rxonly(struct napi_struct *, int);
static void ixgbe_configure_msix(struct ixgbe_adapter *adapter)
enum latency_range ;
static u8 ixgbe_update_itr(struct ixgbe_adapter *adapter,
u32 eitr, u8 itr_setting,
int packets, int bytes)
void ixgbe_write_eitr(struct ixgbe_q_vector *q_vector)
static void ixgbe_set_itr_msix(struct ixgbe_q_vector *q_vector)
static void ixgbe_check_overtemp_subtask(struct ixgbe_adapter *adapter)
static void ixgbe_check_fan_failure(struct ixgbe_adapter *adapter, u32 eicr)
static void ixgbe_check_sfp_event(struct ixgbe_adapter *adapter, u32 eicr)
static void ixgbe_check_lsc(struct ixgbe_adapter *adapter)
static irqreturn_t ixgbe_msix_lsc(int irq, void *data)
static inline void ixgbe_irq_enable_queues(struct ixgbe_adapter *adapter,
u64 qmask)
static inline void ixgbe_irq_disable_queues(struct ixgbe_adapter *adapter,
u64 qmask)
static irqreturn_t ixgbe_msix_clean_tx(int irq, void *data)
static irqreturn_t ixgbe_msix_clean_rx(int irq, void *data)
static irqreturn_t ixgbe_msix_clean_many(int irq, void *data)
static int ixgbe_clean_rxonly(struct napi_struct *napi, int budget)
static int ixgbe_clean_rxtx_many(struct napi_struct *napi, int budget)
static int ixgbe_clean_txonly(struct napi_struct *napi, int budget)
static inline void map_vector_to_rxq(struct ixgbe_adapter *a, int v_idx,
int r_idx)
static inline void map_vector_to_txq(struct ixgbe_adapter *a, int v_idx,
int t_idx)
static int ixgbe_map_rings_to_vectors(struct ixgbe_adapter *adapter)
static int ixgbe_request_msix_irqs(struct ixgbe_adapter *adapter)
static void ixgbe_set_itr(struct ixgbe_adapter *adapter)
static inline void ixgbe_irq_enable(struct ixgbe_adapter *adapter, bool queues,
bool flush)
static irqreturn_t ixgbe_intr(int irq, void *data)
static inline void ixgbe_reset_q_vectors(struct ixgbe_adapter *adapter)
static int ixgbe_request_irq(struct ixgbe_adapter *adapter)
static void ixgbe_free_irq(struct ixgbe_adapter *adapter)
static inline void ixgbe_irq_disable(struct ixgbe_adapter *adapter)
static void ixgbe_configure_msi_and_legacy(struct ixgbe_adapter *adapter)
void ixgbe_configure_tx_ring(struct ixgbe_adapter *adapter,
struct ixgbe_ring *ring)
static void ixgbe_setup_mtqc(struct ixgbe_adapter *adapter)
static void ixgbe_configure_tx(struct ixgbe_adapter *adapter)
#define IXGBE_SRRCTL_BSIZEHDRSIZE_SHIFT 2
static void ixgbe_configure_srrctl(struct ixgbe_adapter *adapter,
struct ixgbe_ring *rx_ring)
static void ixgbe_setup_mrqc(struct ixgbe_adapter *adapter)
void ixgbe_clear_rscctl(struct ixgbe_adapter *adapter,
struct ixgbe_ring *ring)
void ixgbe_configure_rscctl(struct ixgbe_adapter *adapter,
struct ixgbe_ring *ring)
static void ixgbe_set_uta(struct ixgbe_adapter *adapter)
#define IXGBE_MAX_RX_DESC_POLL 10
static void ixgbe_rx_desc_queue_enable(struct ixgbe_adapter *adapter,
struct ixgbe_ring *ring)
void ixgbe_disable_rx_queue(struct ixgbe_adapter *adapter,
struct ixgbe_ring *ring)
void ixgbe_configure_rx_ring(struct ixgbe_adapter *adapter,
struct ixgbe_ring *ring)
static void ixgbe_setup_psrtype(struct ixgbe_adapter *adapter)
static void ixgbe_configure_virtualization(struct ixgbe_adapter *adapter)
static void ixgbe_set_rx_buffer_len(struct ixgbe_adapter *adapter)
static void ixgbe_setup_rdrxctl(struct ixgbe_adapter *adapter)
static void ixgbe_configure_rx(struct ixgbe_adapter *adapter)
static void ixgbe_vlan_rx_add_vid(struct net_device *netdev, u16 vid)
static void ixgbe_vlan_rx_kill_vid(struct net_device *netdev, u16 vid)
static void ixgbe_vlan_filter_disable(struct ixgbe_adapter *adapter)
static void ixgbe_vlan_filter_enable(struct ixgbe_adapter *adapter)
static void ixgbe_vlan_strip_disable(struct ixgbe_adapter *adapter)
static void ixgbe_vlan_strip_enable(struct ixgbe_adapter *adapter)
static void ixgbe_restore_vlan(struct ixgbe_adapter *adapter)
static int ixgbe_write_uc_addr_list(struct net_device *netdev)
void ixgbe_set_rx_mode(struct net_device *netdev)
static void ixgbe_napi_enable_all(struct ixgbe_adapter *adapter)
static void ixgbe_napi_disable_all(struct ixgbe_adapter *adapter)
static void ixgbe_configure_dcb(struct ixgbe_adapter *adapter)
static void ixgbe_configure(struct ixgbe_adapter *adapter)
static inline bool ixgbe_is_sfp(struct ixgbe_hw *hw)
static void ixgbe_sfp_link_config(struct ixgbe_adapter *adapter)
static int ixgbe_non_sfp_link_config(struct ixgbe_hw *hw)
static void ixgbe_setup_gpie(struct ixgbe_adapter *adapter)
static int ixgbe_up_complete(struct ixgbe_adapter *adapter)
void ixgbe_reinit_locked(struct ixgbe_adapter *adapter)
int ixgbe_up(struct ixgbe_adapter *adapter)
void ixgbe_reset(struct ixgbe_adapter *adapter)
static void ixgbe_clean_rx_ring(struct ixgbe_ring *rx_ring)
static void ixgbe_clean_tx_ring(struct ixgbe_ring *tx_ring)
static void ixgbe_clean_all_rx_rings(struct ixgbe_adapter *adapter)
static void ixgbe_clean_all_tx_rings(struct ixgbe_adapter *adapter)
void ixgbe_down(struct ixgbe_adapter *adapter)
static int ixgbe_poll(struct napi_struct *napi, int budget)
static void ixgbe_tx_timeout(struct net_device *netdev)
static inline bool ixgbe_set_rss_queues(struct ixgbe_adapter *adapter)
static inline bool ixgbe_set_fdir_queues(struct ixgbe_adapter *adapter)
static inline bool ixgbe_set_fcoe_queues(struct ixgbe_adapter *adapter)
static inline bool ixgbe_set_dcb_queues(struct ixgbe_adapter *adapter)
static inline bool ixgbe_set_sriov_queues(struct ixgbe_adapter *adapter)
static int ixgbe_set_num_queues(struct ixgbe_adapter *adapter)
static void ixgbe_acquire_msix_vectors(struct ixgbe_adapter *adapter,
int vectors)
static inline bool ixgbe_cache_ring_rss(struct ixgbe_adapter *adapter)
static void ixgbe_get_first_reg_idx(struct ixgbe_adapter *adapter, u8 tc,
unsigned int *tx, unsigned int *rx)
#define IXGBE_MAX_Q_PER_TC	(IXGBE_MAX_DCB_INDICES / MAX_TRAFFIC_CLASS)
int ixgbe_setup_tc(struct net_device *dev, u8 tc)
static inline bool ixgbe_cache_ring_dcb(struct ixgbe_adapter *adapter)
static inline bool ixgbe_cache_ring_fdir(struct ixgbe_adapter *adapter)
static inline bool ixgbe_cache_ring_fcoe(struct ixgbe_adapter *adapter)
static inline bool ixgbe_cache_ring_sriov(struct ixgbe_adapter *adapter)
static void ixgbe_cache_ring_register(struct ixgbe_adapter *adapter)
static int ixgbe_alloc_queues(struct ixgbe_adapter *adapter)
static int ixgbe_set_interrupt_capability(struct ixgbe_adapter *adapter)
static int ixgbe_alloc_q_vectors(struct ixgbe_adapter *adapter)
static void ixgbe_free_q_vectors(struct ixgbe_adapter *adapter)
static void ixgbe_reset_interrupt_capability(struct ixgbe_adapter *adapter)
int ixgbe_init_interrupt_scheme(struct ixgbe_adapter *adapter)
void ixgbe_clear_interrupt_scheme(struct ixgbe_adapter *adapter)
static int __devinit ixgbe_sw_init(struct ixgbe_adapter *adapter)
int ixgbe_setup_tx_resources(struct ixgbe_ring *tx_ring)
static int ixgbe_setup_all_tx_resources(struct ixgbe_adapter *adapter)
int ixgbe_setup_rx_resources(struct ixgbe_ring *rx_ring)
static int ixgbe_setup_all_rx_resources(struct ixgbe_adapter *adapter)
void ixgbe_free_tx_resources(struct ixgbe_ring *tx_ring)
static void ixgbe_free_all_tx_resources(struct ixgbe_adapter *adapter)
void ixgbe_free_rx_resources(struct ixgbe_ring *rx_ring)
static void ixgbe_free_all_rx_resources(struct ixgbe_adapter *adapter)
static int ixgbe_change_mtu(struct net_device *netdev, int new_mtu)
static int ixgbe_open(struct net_device *netdev)
static int ixgbe_close(struct net_device *netdev)
static int ixgbe_resume(struct pci_dev *pdev)
static int __ixgbe_shutdown(struct pci_dev *pdev, bool *enable_wake)
static int ixgbe_suspend(struct pci_dev *pdev, pm_message_t state)
static void ixgbe_shutdown(struct pci_dev *pdev)
void ixgbe_update_stats(struct ixgbe_adapter *adapter)
static void ixgbe_fdir_reinit_subtask(struct ixgbe_adapter *adapter)
static void ixgbe_check_hang_subtask(struct ixgbe_adapter *adapter)
static void ixgbe_watchdog_update_link(struct ixgbe_adapter *adapter)
static void ixgbe_watchdog_link_is_up(struct ixgbe_adapter *adapter)
static void ixgbe_watchdog_link_is_down(struct ixgbe_adapter* adapter)
static void ixgbe_watchdog_flush_tx(struct ixgbe_adapter *adapter)
static void ixgbe_spoof_check(struct ixgbe_adapter *adapter)
static void ixgbe_watchdog_subtask(struct ixgbe_adapter *adapter)
static void ixgbe_sfp_detection_subtask(struct ixgbe_adapter *adapter)
static void ixgbe_sfp_link_config_subtask(struct ixgbe_adapter *adapter)
static void ixgbe_service_timer(unsigned long data)
static void ixgbe_reset_subtask(struct ixgbe_adapter *adapter)
static void ixgbe_service_task(struct work_struct *work)
static int ixgbe_tso(struct ixgbe_adapter *adapter,
struct ixgbe_ring *tx_ring, struct sk_buff *skb,
u32 tx_flags, u8 *hdr_len, __be16 protocol)
static u32 ixgbe_psum(struct ixgbe_adapter *adapter, struct sk_buff *skb,
__be16 protocol)
static bool ixgbe_tx_csum(struct ixgbe_adapter *adapter,
struct ixgbe_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags,
__be16 protocol)
static int ixgbe_tx_map(struct ixgbe_adapter *adapter,
struct ixgbe_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags,
unsigned int first, const u8 hdr_len)
static void ixgbe_tx_queue(struct ixgbe_ring *tx_ring,
int tx_flags, int count, u32 paylen, u8 hdr_len)
static void ixgbe_atr(struct ixgbe_ring *ring, struct sk_buff *skb,
u32 tx_flags, __be16 protocol)
static int __ixgbe_maybe_stop_tx(struct ixgbe_ring *tx_ring, int size)
static int ixgbe_maybe_stop_tx(struct ixgbe_ring *tx_ring, int size)
static u16 ixgbe_select_queue(struct net_device *dev, struct sk_buff *skb)
netdev_tx_t ixgbe_xmit_frame_ring(struct sk_buff *skb,
struct ixgbe_adapter *adapter,
struct ixgbe_ring *tx_ring)
static netdev_tx_t ixgbe_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static int ixgbe_set_mac(struct net_device *netdev, void *p)
static int
ixgbe_mdio_read(struct net_device *netdev, int prtad, int devad, u16 addr)
static int ixgbe_mdio_write(struct net_device *netdev, int prtad, int devad,
u16 addr, u16 value)
static int ixgbe_ioctl(struct net_device *netdev, struct ifreq *req, int cmd)
static int ixgbe_add_sanmac_netdev(struct net_device *dev)
static int ixgbe_del_sanmac_netdev(struct net_device *dev)
static void ixgbe_netpoll(struct net_device *netdev)
static struct rtnl_link_stats64 *ixgbe_get_stats64(struct net_device *netdev,
struct rtnl_link_stats64 *stats)
static const struct net_device_ops ixgbe_netdev_ops = ;
static void __devinit ixgbe_probe_vf(struct ixgbe_adapter *adapter,
const struct ixgbe_info *ii)
static int __devinit ixgbe_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit ixgbe_remove(struct pci_dev *pdev)
static pci_ers_result_t ixgbe_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t ixgbe_io_slot_reset(struct pci_dev *pdev)
static void ixgbe_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers ixgbe_err_handler = ;
static struct pci_driver ixgbe_driver = ;
static int __init ixgbe_init_module(void)
module_init(ixgbe_init_module);
static void __exit ixgbe_exit_module(void)
static int ixgbe_notify_dca(struct notifier_block *nb, unsigned long event,
void *p)
module_exit(ixgbe_exit_module);

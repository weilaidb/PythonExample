#define MAJ 3
#define MIN 0
#define BUILD 6
#define KFIX 2
#define DRV_VERSION __stringify(MAJ) "." __stringify(MIN) "." \
__stringify(BUILD) "-k" __stringify(KFIX)
char igb_driver_name[] = "igb";
char igb_driver_version[] = DRV_VERSION;
static const char igb_driver_string[] =
"Intel(R) Gigabit Ethernet Network Driver";
static const char igb_copyright[] = "Copyright (c) 2007-2011 Intel Corporation.";
static const struct e1000_info *igb_info_tbl[] = ;
static DEFINE_PCI_DEVICE_TABLE(igb_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, igb_pci_tbl);
void igb_reset(struct igb_adapter *);
static int igb_setup_all_tx_resources(struct igb_adapter *);
static int igb_setup_all_rx_resources(struct igb_adapter *);
static void igb_free_all_tx_resources(struct igb_adapter *);
static void igb_free_all_rx_resources(struct igb_adapter *);
static void igb_setup_mrqc(struct igb_adapter *);
static int igb_probe(struct pci_dev *, const struct pci_device_id *);
static void __devexit igb_remove(struct pci_dev *pdev);
static void igb_init_hw_timer(struct igb_adapter *adapter);
static int igb_sw_init(struct igb_adapter *);
static int igb_open(struct net_device *);
static int igb_close(struct net_device *);
static void igb_configure_tx(struct igb_adapter *);
static void igb_configure_rx(struct igb_adapter *);
static void igb_clean_all_tx_rings(struct igb_adapter *);
static void igb_clean_all_rx_rings(struct igb_adapter *);
static void igb_clean_tx_ring(struct igb_ring *);
static void igb_clean_rx_ring(struct igb_ring *);
static void igb_set_rx_mode(struct net_device *);
static void igb_update_phy_info(unsigned long);
static void igb_watchdog(unsigned long);
static void igb_watchdog_task(struct work_struct *);
static netdev_tx_t igb_xmit_frame_adv(struct sk_buff *skb, struct net_device *);
static struct rtnl_link_stats64 *igb_get_stats64(struct net_device *dev,
struct rtnl_link_stats64 *stats);
static int igb_change_mtu(struct net_device *, int);
static int igb_set_mac(struct net_device *, void *);
static void igb_set_uta(struct igb_adapter *adapter);
static irqreturn_t igb_intr(int irq, void *);
static irqreturn_t igb_intr_msi(int irq, void *);
static irqreturn_t igb_msix_other(int irq, void *);
static irqreturn_t igb_msix_ring(int irq, void *);
static void igb_update_dca(struct igb_q_vector *);
static void igb_setup_dca(struct igb_adapter *);
static bool igb_clean_tx_irq(struct igb_q_vector *);
static int igb_poll(struct napi_struct *, int);
static bool igb_clean_rx_irq_adv(struct igb_q_vector *, int *, int);
static int igb_ioctl(struct net_device *, struct ifreq *, int cmd);
static void igb_tx_timeout(struct net_device *);
static void igb_reset_task(struct work_struct *);
static void igb_vlan_rx_register(struct net_device *, struct vlan_group *);
static void igb_vlan_rx_add_vid(struct net_device *, u16);
static void igb_vlan_rx_kill_vid(struct net_device *, u16);
static void igb_restore_vlan(struct igb_adapter *);
static void igb_rar_set_qsel(struct igb_adapter *, u8 *, u32 , u8);
static void igb_ping_all_vfs(struct igb_adapter *);
static void igb_msg_task(struct igb_adapter *);
static void igb_vmm_control(struct igb_adapter *);
static int igb_set_vf_mac(struct igb_adapter *, int, unsigned char *);
static void igb_restore_vf_multicasts(struct igb_adapter *adapter);
static int igb_ndo_set_vf_mac(struct net_device *netdev, int vf, u8 *mac);
static int igb_ndo_set_vf_vlan(struct net_device *netdev,
int vf, u16 vlan, u8 qos);
static int igb_ndo_set_vf_bw(struct net_device *netdev, int vf, int tx_rate);
static int igb_ndo_get_vf_config(struct net_device *netdev, int vf,
struct ifla_vf_info *ivi);
static void igb_check_vf_rate_limit(struct igb_adapter *);
static int igb_suspend(struct pci_dev *, pm_message_t);
static int igb_resume(struct pci_dev *);
static void igb_shutdown(struct pci_dev *);
static int igb_notify_dca(struct notifier_block *, unsigned long, void *);
static struct notifier_block dca_notifier = ;
static void igb_netpoll(struct net_device *);
static unsigned int max_vfs = 0;
module_param(max_vfs, uint, 0);
MODULE_PARM_DESC(max_vfs, "Maximum number of virtual functions to allocate "
"per physical function");
static pci_ers_result_t igb_io_error_detected(struct pci_dev *,
pci_channel_state_t);
static pci_ers_result_t igb_io_slot_reset(struct pci_dev *);
static void igb_io_resume(struct pci_dev *);
static struct pci_error_handlers igb_err_handler = ;
static struct pci_driver igb_driver = ;
MODULE_AUTHOR("Intel Corporation, <e1000-devel@lists.sourceforge.net>");
MODULE_DESCRIPTION("Intel(R) Gigabit Ethernet Network Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
struct igb_reg_info ;
static const struct igb_reg_info igb_reg_info_tbl[] = ;
static void igb_regdump(struct e1000_hw *hw, struct igb_reg_info *reginfo)
static void igb_dump(struct igb_adapter *adapter)
static cycle_t igb_read_clock(const struct cyclecounter *tc)
struct net_device *igb_get_hw_dev(struct e1000_hw *hw)
static int __init igb_init_module(void)
module_init(igb_init_module);
static void __exit igb_exit_module(void)
module_exit(igb_exit_module);
#define Q_IDX_82576(i) (((i & 0x1) << 3) + (i >> 1))
static void igb_cache_ring_register(struct igb_adapter *adapter)
static void igb_free_queues(struct igb_adapter *adapter)
static int igb_alloc_queues(struct igb_adapter *adapter)
#define IGB_N0_QUEUE -1
static void igb_assign_vector(struct igb_q_vector *q_vector, int msix_vector)
static void igb_configure_msix(struct igb_adapter *adapter)
static int igb_request_msix(struct igb_adapter *adapter)
static void igb_reset_interrupt_capability(struct igb_adapter *adapter)
static void igb_free_q_vectors(struct igb_adapter *adapter)
static void igb_clear_interrupt_scheme(struct igb_adapter *adapter)
static int igb_set_interrupt_capability(struct igb_adapter *adapter)
static int igb_alloc_q_vectors(struct igb_adapter *adapter)
static void igb_map_rx_ring_to_vector(struct igb_adapter *adapter,
int ring_idx, int v_idx)
static void igb_map_tx_ring_to_vector(struct igb_adapter *adapter,
int ring_idx, int v_idx)
static int igb_map_ring_to_vector(struct igb_adapter *adapter)
static int igb_init_interrupt_scheme(struct igb_adapter *adapter)
static int igb_request_irq(struct igb_adapter *adapter)
static void igb_free_irq(struct igb_adapter *adapter)
static void igb_irq_disable(struct igb_adapter *adapter)
static void igb_irq_enable(struct igb_adapter *adapter)
static void igb_update_mng_vlan(struct igb_adapter *adapter)
static void igb_release_hw_control(struct igb_adapter *adapter)
static void igb_get_hw_control(struct igb_adapter *adapter)
static void igb_configure(struct igb_adapter *adapter)
void igb_power_up_link(struct igb_adapter *adapter)
static void igb_power_down_link(struct igb_adapter *adapter)
int igb_up(struct igb_adapter *adapter)
void igb_down(struct igb_adapter *adapter)
void igb_reinit_locked(struct igb_adapter *adapter)
void igb_reset(struct igb_adapter *adapter)
static const struct net_device_ops igb_netdev_ops = ;
static int __devinit igb_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit igb_remove(struct pci_dev *pdev)
static void __devinit igb_probe_vfs(struct igb_adapter * adapter)
static void igb_init_hw_timer(struct igb_adapter *adapter)
static int __devinit igb_sw_init(struct igb_adapter *adapter)
static int igb_open(struct net_device *netdev)
static int igb_close(struct net_device *netdev)
int igb_setup_tx_resources(struct igb_ring *tx_ring)
static int igb_setup_all_tx_resources(struct igb_adapter *adapter)
void igb_setup_tctl(struct igb_adapter *adapter)
void igb_configure_tx_ring(struct igb_adapter *adapter,
struct igb_ring *ring)
static void igb_configure_tx(struct igb_adapter *adapter)
int igb_setup_rx_resources(struct igb_ring *rx_ring)
static int igb_setup_all_rx_resources(struct igb_adapter *adapter)
static void igb_setup_mrqc(struct igb_adapter *adapter)
void igb_setup_rctl(struct igb_adapter *adapter)
static inline int igb_set_vf_rlpml(struct igb_adapter *adapter, int size,
int vfn)
static void igb_rlpml_set(struct igb_adapter *adapter)
static inline void igb_set_vmolr(struct igb_adapter *adapter,
int vfn, bool aupe)
void igb_configure_rx_ring(struct igb_adapter *adapter,
struct igb_ring *ring)
static void igb_configure_rx(struct igb_adapter *adapter)
void igb_free_tx_resources(struct igb_ring *tx_ring)
static void igb_free_all_tx_resources(struct igb_adapter *adapter)
void igb_unmap_and_free_tx_resource(struct igb_ring *tx_ring,
struct igb_buffer *buffer_info)
static void igb_clean_tx_ring(struct igb_ring *tx_ring)
static void igb_clean_all_tx_rings(struct igb_adapter *adapter)
void igb_free_rx_resources(struct igb_ring *rx_ring)
static void igb_free_all_rx_resources(struct igb_adapter *adapter)
static void igb_clean_rx_ring(struct igb_ring *rx_ring)
static void igb_clean_all_rx_rings(struct igb_adapter *adapter)
static int igb_set_mac(struct net_device *netdev, void *p)
static int igb_write_mc_addr_list(struct net_device *netdev)
static int igb_write_uc_addr_list(struct net_device *netdev)
static void igb_set_rx_mode(struct net_device *netdev)
static void igb_check_wvbr(struct igb_adapter *adapter)
#define IGB_STAGGERED_QUEUE_OFFSET 8
static void igb_spoof_check(struct igb_adapter *adapter)
static void igb_update_phy_info(unsigned long data)
bool igb_has_link(struct igb_adapter *adapter)
static bool igb_thermal_sensor_event(struct e1000_hw *hw, u32 event)
static void igb_watchdog(unsigned long data)
static void igb_watchdog_task(struct work_struct *work)
enum latency_range ;
static void igb_update_ring_itr(struct igb_q_vector *q_vector)
static unsigned int igb_update_itr(struct igb_adapter *adapter, u16 itr_setting,
int packets, int bytes)
static void igb_set_itr(struct igb_adapter *adapter)
#define IGB_TX_FLAGS_CSUM		0x00000001
#define IGB_TX_FLAGS_VLAN		0x00000002
#define IGB_TX_FLAGS_TSO		0x00000004
#define IGB_TX_FLAGS_IPV4		0x00000008
#define IGB_TX_FLAGS_TSTAMP		0x00000010
#define IGB_TX_FLAGS_VLAN_MASK		0xffff0000
#define IGB_TX_FLAGS_VLAN_SHIFT		        16
static inline int igb_tso_adv(struct igb_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags, u8 *hdr_len)
static inline bool igb_tx_csum_adv(struct igb_ring *tx_ring,
struct sk_buff *skb, u32 tx_flags)
#define IGB_MAX_TXD_PWR	16
#define IGB_MAX_DATA_PER_TXD	(1<<IGB_MAX_TXD_PWR)
static inline int igb_tx_map_adv(struct igb_ring *tx_ring, struct sk_buff *skb,
unsigned int first)
static inline void igb_tx_queue_adv(struct igb_ring *tx_ring,
u32 tx_flags, int count, u32 paylen,
u8 hdr_len)
static int __igb_maybe_stop_tx(struct igb_ring *tx_ring, int size)
static inline int igb_maybe_stop_tx(struct igb_ring *tx_ring, int size)
netdev_tx_t igb_xmit_frame_ring_adv(struct sk_buff *skb,
struct igb_ring *tx_ring)
static netdev_tx_t igb_xmit_frame_adv(struct sk_buff *skb,
struct net_device *netdev)
static void igb_tx_timeout(struct net_device *netdev)
static void igb_reset_task(struct work_struct *work)
static struct rtnl_link_stats64 *igb_get_stats64(struct net_device *netdev,
struct rtnl_link_stats64 *stats)
static int igb_change_mtu(struct net_device *netdev, int new_mtu)
void igb_update_stats(struct igb_adapter *adapter,
struct rtnl_link_stats64 *net_stats)
static irqreturn_t igb_msix_other(int irq, void *data)
static void igb_write_itr(struct igb_q_vector *q_vector)
static irqreturn_t igb_msix_ring(int irq, void *data)
static void igb_update_dca(struct igb_q_vector *q_vector)
static void igb_setup_dca(struct igb_adapter *adapter)
static int __igb_notify_dca(struct device *dev, void *data)
static int igb_notify_dca(struct notifier_block *nb, unsigned long event,
void *p)
static void igb_ping_all_vfs(struct igb_adapter *adapter)
static int igb_set_vf_promisc(struct igb_adapter *adapter, u32 *msgbuf, u32 vf)
static int igb_set_vf_multicasts(struct igb_adapter *adapter,
u32 *msgbuf, u32 vf)
static void igb_restore_vf_multicasts(struct igb_adapter *adapter)
static void igb_clear_vf_vfta(struct igb_adapter *adapter, u32 vf)
static s32 igb_vlvf_set(struct igb_adapter *adapter, u32 vid, bool add, u32 vf)
static void igb_set_vmvir(struct igb_adapter *adapter, u32 vid, u32 vf)
static int igb_ndo_set_vf_vlan(struct net_device *netdev,
int vf, u16 vlan, u8 qos)
static int igb_set_vf_vlan(struct igb_adapter *adapter, u32 *msgbuf, u32 vf)
static inline void igb_vf_reset(struct igb_adapter *adapter, u32 vf)
static void igb_vf_reset_event(struct igb_adapter *adapter, u32 vf)
static void igb_vf_reset_msg(struct igb_adapter *adapter, u32 vf)
static int igb_set_vf_mac_addr(struct igb_adapter *adapter, u32 *msg, int vf)
static void igb_rcv_ack_from_vf(struct igb_adapter *adapter, u32 vf)
static void igb_rcv_msg_from_vf(struct igb_adapter *adapter, u32 vf)
static void igb_msg_task(struct igb_adapter *adapter)
static void igb_set_uta(struct igb_adapter *adapter)
static irqreturn_t igb_intr_msi(int irq, void *data)
static irqreturn_t igb_intr(int irq, void *data)
static inline void igb_ring_irq_enable(struct igb_q_vector *q_vector)
static int igb_poll(struct napi_struct *napi, int budget)
static void igb_systim_to_hwtstamp(struct igb_adapter *adapter,
struct skb_shared_hwtstamps *shhwtstamps,
u64 regval)
static void igb_tx_hwtstamp(struct igb_q_vector *q_vector, struct igb_buffer *buffer_info)
static bool igb_clean_tx_irq(struct igb_q_vector *q_vector)
static void igb_receive_skb(struct igb_q_vector *q_vector,
struct sk_buff *skb,
u16 vlan_tag)
static inline void igb_rx_checksum_adv(struct igb_ring *ring,
u32 status_err, struct sk_buff *skb)
static void igb_rx_hwtstamp(struct igb_q_vector *q_vector, u32 staterr,
struct sk_buff *skb)
static inline u16 igb_get_hlen(struct igb_ring *rx_ring,
union e1000_adv_rx_desc *rx_desc)
static bool igb_clean_rx_irq_adv(struct igb_q_vector *q_vector,
int *work_done, int budget)
void igb_alloc_rx_buffers_adv(struct igb_ring *rx_ring, int cleaned_count)
static int igb_mii_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static int igb_hwtstamp_ioctl(struct net_device *netdev,
struct ifreq *ifr, int cmd)
static int igb_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
s32 igb_read_pcie_cap_reg(struct e1000_hw *hw, u32 reg, u16 *value)
s32 igb_write_pcie_cap_reg(struct e1000_hw *hw, u32 reg, u16 *value)
static void igb_vlan_rx_register(struct net_device *netdev,
struct vlan_group *grp)
static void igb_vlan_rx_add_vid(struct net_device *netdev, u16 vid)
static void igb_vlan_rx_kill_vid(struct net_device *netdev, u16 vid)
static void igb_restore_vlan(struct igb_adapter *adapter)
int igb_set_spd_dplx(struct igb_adapter *adapter, u32 spd, u8 dplx)
static int __igb_shutdown(struct pci_dev *pdev, bool *enable_wake)
static int igb_suspend(struct pci_dev *pdev, pm_message_t state)
static int igb_resume(struct pci_dev *pdev)
static void igb_shutdown(struct pci_dev *pdev)
static void igb_netpoll(struct net_device *netdev)
static pci_ers_result_t igb_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t igb_io_slot_reset(struct pci_dev *pdev)
static void igb_io_resume(struct pci_dev *pdev)
static void igb_rar_set_qsel(struct igb_adapter *adapter, u8 *addr, u32 index,
u8 qsel)
static int igb_set_vf_mac(struct igb_adapter *adapter,
int vf, unsigned char *mac_addr)
static int igb_ndo_set_vf_mac(struct net_device *netdev, int vf, u8 *mac)
static int igb_link_mbps(int internal_link_speed)
static void igb_set_vf_rate_limit(struct e1000_hw *hw, int vf, int tx_rate,
int link_speed)
static void igb_check_vf_rate_limit(struct igb_adapter *adapter)
static int igb_ndo_set_vf_bw(struct net_device *netdev, int vf, int tx_rate)
static int igb_ndo_get_vf_config(struct net_device *netdev,
int vf, struct ifla_vf_info *ivi)
static void igb_vmm_control(struct igb_adapter *adapter)

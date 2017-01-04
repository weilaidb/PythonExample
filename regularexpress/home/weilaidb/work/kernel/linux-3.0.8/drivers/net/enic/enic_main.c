#define ENIC_NOTIFY_TIMER_PERIOD	(2 * HZ)
#define WQ_ENET_MAX_DESC_LEN		(1 << WQ_ENET_LEN_BITS)
#define MAX_TSO				(1 << 16)
#define ENIC_DESC_MAX_SPLITS		(MAX_TSO / WQ_ENET_MAX_DESC_LEN + 1)
#define PCI_DEVICE_ID_CISCO_VIC_ENET         0x0043
#define PCI_DEVICE_ID_CISCO_VIC_ENET_DYN     0x0044
static DEFINE_PCI_DEVICE_TABLE(enic_id_table) = ;
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR("Scott Feldman <scofeldm@cisco.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_DEVICE_TABLE(pci, enic_id_table);
struct enic_stat ;
#define ENIC_TX_STAT(stat)	\
#define ENIC_RX_STAT(stat)	\
static const struct enic_stat enic_tx_stats[] = ;
static const struct enic_stat enic_rx_stats[] = ;
static const unsigned int enic_n_tx_stats = ARRAY_SIZE(enic_tx_stats);
static const unsigned int enic_n_rx_stats = ARRAY_SIZE(enic_rx_stats);
static int enic_is_dynamic(struct enic *enic)
static inline unsigned int enic_cq_rq(struct enic *enic, unsigned int rq)
static inline unsigned int enic_cq_wq(struct enic *enic, unsigned int wq)
static inline unsigned int enic_legacy_io_intr(void)
static inline unsigned int enic_legacy_err_intr(void)
static inline unsigned int enic_legacy_notify_intr(void)
static inline unsigned int enic_msix_rq_intr(struct enic *enic, unsigned int rq)
static inline unsigned int enic_msix_wq_intr(struct enic *enic, unsigned int wq)
static inline unsigned int enic_msix_err_intr(struct enic *enic)
static inline unsigned int enic_msix_notify_intr(struct enic *enic)
static int enic_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
static void enic_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *drvinfo)
static void enic_get_strings(struct net_device *netdev, u32 stringset, u8 *data)
static int enic_get_sset_count(struct net_device *netdev, int sset)
static void enic_get_ethtool_stats(struct net_device *netdev,
struct ethtool_stats *stats, u64 *data)
static u32 enic_get_msglevel(struct net_device *netdev)
static void enic_set_msglevel(struct net_device *netdev, u32 value)
static int enic_get_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ecmd)
static int enic_set_coalesce(struct net_device *netdev,
struct ethtool_coalesce *ecmd)
static const struct ethtool_ops enic_ethtool_ops = ;
static void enic_free_wq_buf(struct vnic_wq *wq, struct vnic_wq_buf *buf)
static void enic_wq_free_buf(struct vnic_wq *wq,
struct cq_desc *cq_desc, struct vnic_wq_buf *buf, void *opaque)
static int enic_wq_service(struct vnic_dev *vdev, struct cq_desc *cq_desc,
u8 type, u16 q_number, u16 completed_index, void *opaque)
static void enic_log_q_error(struct enic *enic)
static void enic_msglvl_check(struct enic *enic)
static void enic_mtu_check(struct enic *enic)
static void enic_link_check(struct enic *enic)
static void enic_notify_check(struct enic *enic)
#define ENIC_TEST_INTR(pba, i) (pba & (1 << i))
static irqreturn_t enic_isr_legacy(int irq, void *data)
static irqreturn_t enic_isr_msi(int irq, void *data)
static irqreturn_t enic_isr_msix_rq(int irq, void *data)
static irqreturn_t enic_isr_msix_wq(int irq, void *data)
static irqreturn_t enic_isr_msix_err(int irq, void *data)
static irqreturn_t enic_isr_msix_notify(int irq, void *data)
static inline void enic_queue_wq_skb_cont(struct enic *enic,
struct vnic_wq *wq, struct sk_buff *skb,
unsigned int len_left, int loopback)
static inline void enic_queue_wq_skb_vlan(struct enic *enic,
struct vnic_wq *wq, struct sk_buff *skb,
int vlan_tag_insert, unsigned int vlan_tag, int loopback)
static inline void enic_queue_wq_skb_csum_l4(struct enic *enic,
struct vnic_wq *wq, struct sk_buff *skb,
int vlan_tag_insert, unsigned int vlan_tag, int loopback)
static inline void enic_queue_wq_skb_tso(struct enic *enic,
struct vnic_wq *wq, struct sk_buff *skb, unsigned int mss,
int vlan_tag_insert, unsigned int vlan_tag, int loopback)
static inline void enic_queue_wq_skb(struct enic *enic,
struct vnic_wq *wq, struct sk_buff *skb)
static netdev_tx_t enic_hard_start_xmit(struct sk_buff *skb,
struct net_device *netdev)
static struct net_device_stats *enic_get_stats(struct net_device *netdev)
void enic_reset_addr_lists(struct enic *enic)
static int enic_set_mac_addr(struct net_device *netdev, char *addr)
static int enic_set_mac_address_dynamic(struct net_device *netdev, void *p)
static int enic_set_mac_address(struct net_device *netdev, void *p)
static void enic_update_multicast_addr_list(struct enic *enic)
static void enic_update_unicast_addr_list(struct enic *enic)
static void enic_set_rx_mode(struct net_device *netdev)
static void enic_vlan_rx_register(struct net_device *netdev,
struct vlan_group *vlan_group)
static void enic_tx_timeout(struct net_device *netdev)
static int enic_set_vf_mac(struct net_device *netdev, int vf, u8 *mac)
static int enic_set_vf_port(struct net_device *netdev, int vf,
struct nlattr *port[])
static int enic_get_vf_port(struct net_device *netdev, int vf,
struct sk_buff *skb)
static void enic_free_rq_buf(struct vnic_rq *rq, struct vnic_rq_buf *buf)
static int enic_rq_alloc_buf(struct vnic_rq *rq)
static void enic_rq_indicate_buf(struct vnic_rq *rq,
struct cq_desc *cq_desc, struct vnic_rq_buf *buf,
int skipped, void *opaque)
static int enic_rq_service(struct vnic_dev *vdev, struct cq_desc *cq_desc,
u8 type, u16 q_number, u16 completed_index, void *opaque)
static int enic_poll(struct napi_struct *napi, int budget)
static int enic_poll_msix(struct napi_struct *napi, int budget)
static void enic_notify_timer(unsigned long data)
static void enic_free_intr(struct enic *enic)
static int enic_request_intr(struct enic *enic)
static void enic_synchronize_irqs(struct enic *enic)
static int enic_dev_notify_set(struct enic *enic)
static void enic_notify_timer_start(struct enic *enic)
static int enic_open(struct net_device *netdev)
static int enic_stop(struct net_device *netdev)
static int enic_change_mtu(struct net_device *netdev, int new_mtu)
static void enic_poll_controller(struct net_device *netdev)
static int enic_dev_wait(struct vnic_dev *vdev,
int (*start)(struct vnic_dev *, int),
int (*finished)(struct vnic_dev *, int *),
int arg)
static int enic_dev_open(struct enic *enic)
static int enic_dev_hang_reset(struct enic *enic)
static int enic_set_rsskey(struct enic *enic)
static int enic_set_rsscpu(struct enic *enic, u8 rss_hash_bits)
static int enic_set_niccfg(struct enic *enic, u8 rss_default_cpu,
u8 rss_hash_type, u8 rss_hash_bits, u8 rss_base_cpu, u8 rss_enable)
static int enic_set_rss_nic_cfg(struct enic *enic)
static void enic_reset(struct work_struct *work)
static int enic_set_intr_mode(struct enic *enic)
static void enic_clear_intr_mode(struct enic *enic)
static const struct net_device_ops enic_netdev_dynamic_ops = ;
static const struct net_device_ops enic_netdev_ops = ;
static void enic_dev_deinit(struct enic *enic)
static int enic_dev_init(struct enic *enic)
static void enic_iounmap(struct enic *enic)
static int __devinit enic_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit enic_remove(struct pci_dev *pdev)
static struct pci_driver enic_driver = ;
static int __init enic_init_module(void)
static void __exit enic_cleanup_module(void)
module_init(enic_init_module);
module_exit(enic_cleanup_module);

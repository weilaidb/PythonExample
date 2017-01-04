#define DRV_VERSION "1.0.0"
#define DRV_DESC "Chelsio T4 Virtual Function (VF) Network Driver"
#define DFLT_MSG_ENABLE (NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK | \
NETIF_MSG_TIMER | NETIF_MSG_IFDOWN | NETIF_MSG_IFUP |\
NETIF_MSG_RX_ERR | NETIF_MSG_TX_ERR)
static int dflt_msg_enable = DFLT_MSG_ENABLE;
module_param(dflt_msg_enable, int, 0644);
MODULE_PARM_DESC(dflt_msg_enable,
"default adapter ethtool message level bitmap");
#define MSI_MSIX	2
#define MSI_MSI		1
#define MSI_DEFAULT	MSI_MSIX
static int msi = MSI_DEFAULT;
module_param(msi, int, 0644);
MODULE_PARM_DESC(msi, "whether to use MSI-X or MSI");
enum ;
static struct dentry *cxgb4vf_debugfs_root;
void t4vf_os_link_changed(struct adapter *adapter, int pidx, int link_ok)
static void cxgb4vf_vlan_rx_register(struct net_device *dev,
struct vlan_group *grp)
static int link_start(struct net_device *dev)
static void name_msix_vecs(struct adapter *adapter)
static int request_msix_queue_irqs(struct adapter *adapter)
static void free_msix_queue_irqs(struct adapter *adapter)
static void qenable(struct sge_rspq *rspq)
static void enable_rx(struct adapter *adapter)
static void quiesce_rx(struct adapter *adapter)
static int fwevtq_handler(struct sge_rspq *rspq, const __be64 *rsp,
const struct pkt_gl *gl)
static int setup_sge_queues(struct adapter *adapter)
static int setup_rss(struct adapter *adapter)
static int adapter_up(struct adapter *adapter)
static void adapter_down(struct adapter *adapter)
static int cxgb4vf_open(struct net_device *dev)
static int cxgb4vf_stop(struct net_device *dev)
static struct net_device_stats *cxgb4vf_get_stats(struct net_device *dev)
static inline unsigned int collect_netdev_uc_list_addrs(const struct net_device *dev,
const u8 **addr,
unsigned int offset,
unsigned int maxaddrs)
static inline unsigned int collect_netdev_mc_list_addrs(const struct net_device *dev,
const u8 **addr,
unsigned int offset,
unsigned int maxaddrs)
static int set_addr_filters(const struct net_device *dev, bool sleep)
static int set_rxmode(struct net_device *dev, int mtu, bool sleep_ok)
static void cxgb4vf_set_rxmode(struct net_device *dev)
static int closest_timer(const struct sge *s, int us)
static int closest_thres(const struct sge *s, int thres)
static unsigned int qtimer_val(const struct adapter *adapter,
const struct sge_rspq *rspq)
static int set_rxq_intr_params(struct adapter *adapter, struct sge_rspq *rspq,
unsigned int us, unsigned int cnt)
static inline unsigned int mk_adap_vers(const struct adapter *adapter)
static int cxgb4vf_do_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int cxgb4vf_change_mtu(struct net_device *dev, int new_mtu)
static int cxgb4vf_set_mac_addr(struct net_device *dev, void *_addr)
static void cxgb4vf_poll_controller(struct net_device *dev)
static int cxgb4vf_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static void cxgb4vf_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *drvinfo)
static u32 cxgb4vf_get_msglevel(struct net_device *dev)
static void cxgb4vf_set_msglevel(struct net_device *dev, u32 msglevel)
static void cxgb4vf_get_ringparam(struct net_device *dev,
struct ethtool_ringparam *rp)
static int cxgb4vf_set_ringparam(struct net_device *dev,
struct ethtool_ringparam *rp)
static int cxgb4vf_get_coalesce(struct net_device *dev,
struct ethtool_coalesce *coalesce)
static int cxgb4vf_set_coalesce(struct net_device *dev,
struct ethtool_coalesce *coalesce)
static void cxgb4vf_get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *pauseparam)
static int cxgb4vf_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
struct queue_port_stats ;
static const char stats_strings[][ETH_GSTRING_LEN] = ;
static int cxgb4vf_get_sset_count(struct net_device *dev, int sset)
static void cxgb4vf_get_strings(struct net_device *dev,
u32 sset,
u8 *data)
static void collect_sge_port_stats(const struct adapter *adapter,
const struct port_info *pi,
struct queue_port_stats *stats)
static void cxgb4vf_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats,
u64 *data)
static int cxgb4vf_get_regs_len(struct net_device *dev)
static void reg_block_dump(struct adapter *adapter, void *regbuf,
unsigned int start, unsigned int end)
static void cxgb4vf_get_regs(struct net_device *dev,
struct ethtool_regs *regs,
void *regbuf)
static void cxgb4vf_get_wol(struct net_device *dev,
struct ethtool_wolinfo *wol)
#define TSO_FLAGS (NETIF_F_TSO | NETIF_F_TSO6 | NETIF_F_TSO_ECN)
static struct ethtool_ops cxgb4vf_ethtool_ops = ;
#define QPL	4
static int sge_qinfo_show(struct seq_file *seq, void *v)
static int sge_queue_entries(const struct adapter *adapter)
static void *sge_queue_start(struct seq_file *seq, loff_t *pos)
static void sge_queue_stop(struct seq_file *seq, void *v)
static void *sge_queue_next(struct seq_file *seq, void *v, loff_t *pos)
static const struct seq_operations sge_qinfo_seq_ops = ;
static int sge_qinfo_open(struct inode *inode, struct file *file)
static const struct file_operations sge_qinfo_debugfs_fops = ;
#define QPL	4
static int sge_qstats_show(struct seq_file *seq, void *v)
static int sge_qstats_entries(const struct adapter *adapter)
static void *sge_qstats_start(struct seq_file *seq, loff_t *pos)
static void sge_qstats_stop(struct seq_file *seq, void *v)
static void *sge_qstats_next(struct seq_file *seq, void *v, loff_t *pos)
static const struct seq_operations sge_qstats_seq_ops = ;
static int sge_qstats_open(struct inode *inode, struct file *file)
static const struct file_operations sge_qstats_proc_fops = ;
static int resources_show(struct seq_file *seq, void *v)
static int resources_open(struct inode *inode, struct file *file)
static const struct file_operations resources_proc_fops = ;
static int interfaces_show(struct seq_file *seq, void *v)
static inline void *interfaces_get_idx(struct adapter *adapter, loff_t pos)
static void *interfaces_start(struct seq_file *seq, loff_t *pos)
static void *interfaces_next(struct seq_file *seq, void *v, loff_t *pos)
static void interfaces_stop(struct seq_file *seq, void *v)
static const struct seq_operations interfaces_seq_ops = ;
static int interfaces_open(struct inode *inode, struct file *file)
static const struct file_operations interfaces_proc_fops = ;
struct cxgb4vf_debugfs_entry ;
static struct cxgb4vf_debugfs_entry debugfs_files[] = ;
static int __devinit setup_debugfs(struct adapter *adapter)
static void cleanup_debugfs(struct adapter *adapter)
static int __devinit adap_init0(struct adapter *adapter)
static inline void init_rspq(struct sge_rspq *rspq, u8 timer_idx,
u8 pkt_cnt_idx, unsigned int size,
unsigned int iqe_size)
static void __devinit cfg_queues(struct adapter *adapter)
static void __devinit reduce_ethqs(struct adapter *adapter, int n)
static int __devinit enable_msix(struct adapter *adapter)
static const struct net_device_ops cxgb4vf_netdev_ops	= ;
static int __devinit cxgb4vf_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit cxgb4vf_pci_remove(struct pci_dev *pdev)
static void __devexit cxgb4vf_pci_shutdown(struct pci_dev *pdev)
#define CH_DEVICE(devid, idx) \
static struct pci_device_id cxgb4vf_pci_tbl[] = ;
MODULE_DESCRIPTION(DRV_DESC);
MODULE_AUTHOR("Chelsio Communications");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_DEVICE_TABLE(pci, cxgb4vf_pci_tbl);
static struct pci_driver cxgb4vf_driver = ;
static int __init cxgb4vf_module_init(void)
static void __exit cxgb4vf_module_exit(void)
module_init(cxgb4vf_module_init);
module_exit(cxgb4vf_module_exit);

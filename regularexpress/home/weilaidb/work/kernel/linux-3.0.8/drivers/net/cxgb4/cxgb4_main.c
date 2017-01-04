#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_VERSION "1.3.0-ko"
#define DRV_DESC "Chelsio T4 Network Driver"
#define MAX_SGE_TIMERVAL 200U
enum ;
static unsigned int pfvfres_pmask(struct adapter *adapter,
unsigned int pf, unsigned int vf)
enum ;
enum ;
#define DFLT_MSG_ENABLE (NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK | \
NETIF_MSG_TIMER | NETIF_MSG_IFDOWN | NETIF_MSG_IFUP |\
NETIF_MSG_RX_ERR | NETIF_MSG_TX_ERR)
#define CH_DEVICE(devid, data)
static DEFINE_PCI_DEVICE_TABLE(cxgb4_pci_tbl) = ;
#define FW_FNAME "cxgb4/t4fw.bin"
MODULE_DESCRIPTION(DRV_DESC);
MODULE_AUTHOR("Chelsio Communications");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_DEVICE_TABLE(pci, cxgb4_pci_tbl);
MODULE_FIRMWARE(FW_FNAME);
static int dflt_msg_enable = DFLT_MSG_ENABLE;
module_param(dflt_msg_enable, int, 0644);
MODULE_PARM_DESC(dflt_msg_enable, "Chelsio T4 default message enable bitmap");
static int msi = 2;
module_param(msi, int, 0644);
MODULE_PARM_DESC(msi, "whether to use INTx (0), MSI (1) or MSI-X (2)");
static unsigned int intr_holdoff[SGE_NTIMERS - 1] = ;
module_param_array(intr_holdoff, uint, NULL, 0644);
MODULE_PARM_DESC(intr_holdoff, "values for queue interrupt hold-off timers "
"0..4 in microseconds");
static unsigned int intr_cnt[SGE_NCOUNTERS - 1] = ;
module_param_array(intr_cnt, uint, NULL, 0644);
MODULE_PARM_DESC(intr_cnt,
"thresholds 1..3 for queue interrupt packet counters");
static int vf_acls;
module_param(vf_acls, bool, 0644);
MODULE_PARM_DESC(vf_acls, "if set enable virtualization L2 ACL enforcement");
static unsigned int num_vf[4];
module_param_array(num_vf, uint, NULL, 0644);
MODULE_PARM_DESC(num_vf, "number of VFs for each of PFs 0-3");
static struct dentry *cxgb4_debugfs_root;
static LIST_HEAD(adapter_list);
static DEFINE_MUTEX(uld_mutex);
static struct cxgb4_uld_info ulds[CXGB4_ULD_MAX];
static const char *uld_str[] = ;
static void link_report(struct net_device *dev)
void t4_os_link_changed(struct adapter *adapter, int port_id, int link_stat)
void t4_os_portmod_changed(const struct adapter *adap, int port_id)
static int set_addr_filters(const struct net_device *dev, bool sleep)
static int set_rxmode(struct net_device *dev, int mtu, bool sleep_ok)
static int link_start(struct net_device *dev)
static int fwevtq_handler(struct sge_rspq *q, const __be64 *rsp,
const struct pkt_gl *gl)
static int uldrx_handler(struct sge_rspq *q, const __be64 *rsp,
const struct pkt_gl *gl)
static void disable_msi(struct adapter *adapter)
static irqreturn_t t4_nondata_intr(int irq, void *cookie)
static void name_msix_vecs(struct adapter *adap)
static int request_msix_queue_irqs(struct adapter *adap)
static void free_msix_queue_irqs(struct adapter *adap)
static int write_rss(const struct port_info *pi, const u16 *queues)
static int setup_rss(struct adapter *adap)
static unsigned int rxq_to_chan(const struct sge *p, unsigned int qid)
static void quiesce_rx(struct adapter *adap)
static void enable_rx(struct adapter *adap)
static int setup_sge_queues(struct adapter *adap)
static int upgrade_fw(struct adapter *adap)
void *t4_alloc_mem(size_t size)
static void t4_free_mem(void *addr)
static inline int is_offload(const struct adapter *adap)
static u32 get_msglevel(struct net_device *dev)
static void set_msglevel(struct net_device *dev, u32 val)
static char stats_strings[][ETH_GSTRING_LEN] = ;
static int get_sset_count(struct net_device *dev, int sset)
#define T4_REGMAP_SIZE (160 * 1024)
static int get_regs_len(struct net_device *dev)
static int get_eeprom_len(struct net_device *dev)
static void get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static void get_strings(struct net_device *dev, u32 stringset, u8 *data)
struct queue_port_stats ;
static void collect_sge_port_stats(const struct adapter *adap,
const struct port_info *p, struct queue_port_stats *s)
static void get_stats(struct net_device *dev, struct ethtool_stats *stats,
u64 *data)
static inline unsigned int mk_adap_vers(const struct adapter *ap)
static void reg_block_dump(struct adapter *ap, void *buf, unsigned int start,
unsigned int end)
static void get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *buf)
static int restart_autoneg(struct net_device *dev)
static int identify_port(struct net_device *dev,
enum ethtool_phys_id_state state)
static unsigned int from_fw_linkcaps(unsigned int type, unsigned int caps)
static unsigned int to_fw_linkcaps(unsigned int caps)
static int get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static unsigned int speed_to_caps(int speed)
static int set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static int set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static void get_sge_param(struct net_device *dev, struct ethtool_ringparam *e)
static int set_sge_param(struct net_device *dev, struct ethtool_ringparam *e)
static int closest_timer(const struct sge *s, int time)
static int closest_thres(const struct sge *s, int thres)
static unsigned int qtimer_val(const struct adapter *adap,
const struct sge_rspq *q)
static int set_rxq_intr_params(struct adapter *adap, struct sge_rspq *q,
unsigned int us, unsigned int cnt)
static int set_coalesce(struct net_device *dev, struct ethtool_coalesce *c)
static int get_coalesce(struct net_device *dev, struct ethtool_coalesce *c)
static int eeprom_ptov(unsigned int phys_addr, unsigned int fn, unsigned int sz)
static int eeprom_rd_phys(struct adapter *adap, unsigned int phys_addr, u32 *v)
static int eeprom_wr_phys(struct adapter *adap, unsigned int phys_addr, u32 v)
#define EEPROM_MAGIC 0x38E2F10C
static int get_eeprom(struct net_device *dev, struct ethtool_eeprom *e,
u8 *data)
static int set_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 *data)
static int set_flash(struct net_device *netdev, struct ethtool_flash *ef)
#define WOL_SUPPORTED (WAKE_BCAST | WAKE_MAGIC)
#define BCAST_CRC 0xa0ccc1a6
static void get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int cxgb_set_features(struct net_device *dev, u32 features)
static int get_rss_table(struct net_device *dev, struct ethtool_rxfh_indir *p)
static int set_rss_table(struct net_device *dev,
const struct ethtool_rxfh_indir *p)
static int get_rxnfc(struct net_device *dev, struct ethtool_rxnfc *info,
void *rules)
static struct ethtool_ops cxgb_ethtool_ops = ;
static int mem_open(struct inode *inode, struct file *file)
static ssize_t mem_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static const struct file_operations mem_debugfs_fops = ;
static void __devinit add_debugfs_mem(struct adapter *adap, const char *name,
unsigned int idx, unsigned int size_mb)
static int __devinit setup_debugfs(struct adapter *adap)
int cxgb4_alloc_atid(struct tid_info *t, void *data)
EXPORT_SYMBOL(cxgb4_alloc_atid);
void cxgb4_free_atid(struct tid_info *t, unsigned int atid)
EXPORT_SYMBOL(cxgb4_free_atid);
int cxgb4_alloc_stid(struct tid_info *t, int family, void *data)
EXPORT_SYMBOL(cxgb4_alloc_stid);
void cxgb4_free_stid(struct tid_info *t, unsigned int stid, int family)
EXPORT_SYMBOL(cxgb4_free_stid);
static void mk_tid_release(struct sk_buff *skb, unsigned int chan,
unsigned int tid)
static void cxgb4_queue_tid_release(struct tid_info *t, unsigned int chan,
unsigned int tid)
static void process_tid_release_list(struct work_struct *work)
void cxgb4_remove_tid(struct tid_info *t, unsigned int chan, unsigned int tid)
EXPORT_SYMBOL(cxgb4_remove_tid);
static int tid_init(struct tid_info *t)
int cxgb4_create_server(const struct net_device *dev, unsigned int stid,
__be32 sip, __be16 sport, unsigned int queue)
EXPORT_SYMBOL(cxgb4_create_server);
unsigned int cxgb4_best_mtu(const unsigned short *mtus, unsigned short mtu,
unsigned int *idx)
EXPORT_SYMBOL(cxgb4_best_mtu);
unsigned int cxgb4_port_chan(const struct net_device *dev)
EXPORT_SYMBOL(cxgb4_port_chan);
unsigned int cxgb4_port_viid(const struct net_device *dev)
EXPORT_SYMBOL(cxgb4_port_viid);
unsigned int cxgb4_port_idx(const struct net_device *dev)
EXPORT_SYMBOL(cxgb4_port_idx);
void cxgb4_get_tcp_stats(struct pci_dev *pdev, struct tp_tcp_stats *v4,
struct tp_tcp_stats *v6)
EXPORT_SYMBOL(cxgb4_get_tcp_stats);
void cxgb4_iscsi_init(struct net_device *dev, unsigned int tag_mask,
const unsigned int *pgsz_order)
EXPORT_SYMBOL(cxgb4_iscsi_init);
static struct pci_driver cxgb4_driver;
static void check_neigh_update(struct neighbour *neigh)
static int netevent_cb(struct notifier_block *nb, unsigned long event,
void *data)
static bool netevent_registered;
static struct notifier_block cxgb4_netevent_nb = ;
static void uld_attach(struct adapter *adap, unsigned int uld)
static void attach_ulds(struct adapter *adap)
static void detach_ulds(struct adapter *adap)
static void notify_ulds(struct adapter *adap, enum cxgb4_state new_state)
int cxgb4_register_uld(enum cxgb4_uld type, const struct cxgb4_uld_info *p)
EXPORT_SYMBOL(cxgb4_register_uld);
int cxgb4_unregister_uld(enum cxgb4_uld type)
EXPORT_SYMBOL(cxgb4_unregister_uld);
static int cxgb_up(struct adapter *adap)
static void cxgb_down(struct adapter *adapter)
static int cxgb_open(struct net_device *dev)
static int cxgb_close(struct net_device *dev)
static struct rtnl_link_stats64 *cxgb_get_stats(struct net_device *dev,
struct rtnl_link_stats64 *ns)
static int cxgb_ioctl(struct net_device *dev, struct ifreq *req, int cmd)
static void cxgb_set_rxmode(struct net_device *dev)
static int cxgb_change_mtu(struct net_device *dev, int new_mtu)
static int cxgb_set_mac_addr(struct net_device *dev, void *p)
static void cxgb_netpoll(struct net_device *dev)
static const struct net_device_ops cxgb4_netdev_ops = ;
void t4_fatal_err(struct adapter *adap)
static void setup_memwin(struct adapter *adap)
static int adap_init1(struct adapter *adap, struct fw_caps_config_cmd *c)
#define MAX_ATIDS 8192U
static int adap_init0(struct adapter *adap)
static pci_ers_result_t eeh_err_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t eeh_slot_reset(struct pci_dev *pdev)
static void eeh_resume(struct pci_dev *pdev)
static struct pci_error_handlers cxgb4_eeh = ;
static inline bool is_10g_port(const struct link_config *lc)
static inline void init_rspq(struct sge_rspq *q, u8 timer_idx, u8 pkt_cnt_idx,
unsigned int size, unsigned int iqe_size)
static void __devinit cfg_queues(struct adapter *adap)
static void __devinit reduce_ethqs(struct adapter *adap, int n)
#define EXTRA_VECS 2
static int __devinit enable_msix(struct adapter *adap)
#undef EXTRA_VECS
static int __devinit init_rss(struct adapter *adap)
static void __devinit print_port_info(const struct net_device *dev)
static void __devinit enable_pcie_relaxed_ordering(struct pci_dev *dev)
static void free_some_resources(struct adapter *adapter)
#define TSO_FLAGS (NETIF_F_TSO | NETIF_F_TSO6 | NETIF_F_TSO_ECN)
#define VLAN_FEAT (NETIF_F_SG | NETIF_F_IP_CSUM | TSO_FLAGS | \
NETIF_F_IPV6_CSUM | NETIF_F_HIGHDMA)
static int __devinit init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit remove_one(struct pci_dev *pdev)
static struct pci_driver cxgb4_driver = ;
static int __init cxgb4_init_module(void)
static void __exit cxgb4_cleanup_module(void)
module_init(cxgb4_init_module);
module_exit(cxgb4_cleanup_module);

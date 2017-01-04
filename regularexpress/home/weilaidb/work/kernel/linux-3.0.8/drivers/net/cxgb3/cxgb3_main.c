enum ;
#define PORT_MASK ((1 << MAX_NPORTS) - 1)
#define DFLT_MSG_ENABLE (NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK | \
NETIF_MSG_TIMER | NETIF_MSG_IFDOWN | NETIF_MSG_IFUP |\
NETIF_MSG_RX_ERR | NETIF_MSG_TX_ERR)
#define EEPROM_MAGIC 0x38E2F10C
#define CH_DEVICE(devid, idx) \
static DEFINE_PCI_DEVICE_TABLE(cxgb3_pci_tbl) = ;
MODULE_DESCRIPTION(DRV_DESC);
MODULE_AUTHOR("Chelsio Communications");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_DEVICE_TABLE(pci, cxgb3_pci_tbl);
static int dflt_msg_enable = DFLT_MSG_ENABLE;
module_param(dflt_msg_enable, int, 0644);
MODULE_PARM_DESC(dflt_msg_enable, "Chelsio T3 default message enable bitmap");
static int msi = 2;
module_param(msi, int, 0644);
MODULE_PARM_DESC(msi, "whether to use MSI or MSI-X");
static int ofld_disable = 0;
module_param(ofld_disable, int, 0644);
MODULE_PARM_DESC(ofld_disable, "whether to enable offload at init time or not");
struct workqueue_struct *cxgb3_wq;
static void link_report(struct net_device *dev)
static void enable_tx_fifo_drain(struct adapter *adapter,
struct port_info *pi)
static void disable_tx_fifo_drain(struct adapter *adapter,
struct port_info *pi)
void t3_os_link_fault(struct adapter *adap, int port_id, int state)
void t3_os_link_changed(struct adapter *adapter, int port_id, int link_stat,
int speed, int duplex, int pause)
void t3_os_phymod_changed(struct adapter *adap, int port_id)
static void cxgb_set_rxmode(struct net_device *dev)
static void link_start(struct net_device *dev)
static inline void cxgb_disable_msi(struct adapter *adapter)
static irqreturn_t t3_async_intr_handler(int irq, void *cookie)
static void name_msix_vecs(struct adapter *adap)
static int request_msix_data_irqs(struct adapter *adap)
static void free_irq_resources(struct adapter *adapter)
static int await_mgmt_replies(struct adapter *adap, unsigned long init_cnt,
unsigned long n)
static int init_tp_parity(struct adapter *adap)
static void setup_rss(struct adapter *adap)
static void ring_dbs(struct adapter *adap)
static void init_napi(struct adapter *adap)
static void quiesce_rx(struct adapter *adap)
static void enable_all_napi(struct adapter *adap)
static int setup_sge_qsets(struct adapter *adap)
static ssize_t attr_show(struct device *d, char *buf,
ssize_t(*format) (struct net_device *, char *))
static ssize_t attr_store(struct device *d,
const char *buf, size_t len,
ssize_t(*set) (struct net_device *, unsigned int),
unsigned int min_val, unsigned int max_val)
#define CXGB3_SHOW(name, val_expr) \
static ssize_t format_##name(struct net_device *dev, char *buf) \
\
static ssize_t show_##name(struct device *d, struct device_attribute *attr, \
char *buf) \
static ssize_t set_nfilters(struct net_device *dev, unsigned int val)
static ssize_t store_nfilters(struct device *d, struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t set_nservers(struct net_device *dev, unsigned int val)
static ssize_t store_nservers(struct device *d, struct device_attribute *attr,
const char *buf, size_t len)
#define CXGB3_ATTR_R(name, val_expr) \
CXGB3_SHOW(name, val_expr) \
static DEVICE_ATTR(name, S_IRUGO, show_##name, NULL)
#define CXGB3_ATTR_RW(name, val_expr, store_method) \
CXGB3_SHOW(name, val_expr) \
static DEVICE_ATTR(name, S_IRUGO | S_IWUSR, show_##name, store_method)
CXGB3_ATTR_R(cam_size, t3_mc5_size(&adap->mc5));
CXGB3_ATTR_RW(nfilters, adap->params.mc5.nfilters, store_nfilters);
CXGB3_ATTR_RW(nservers, adap->params.mc5.nservers, store_nservers);
static struct attribute *cxgb3_attrs[] = ;
static struct attribute_group cxgb3_attr_group = ;
static ssize_t tm_attr_show(struct device *d,
char *buf, int sched)
static ssize_t tm_attr_store(struct device *d,
const char *buf, size_t len, int sched)
#define TM_ATTR(name, sched) \
static ssize_t show_##name(struct device *d, struct device_attribute *attr, \
char *buf) \
\
static ssize_t store_##name(struct device *d, struct device_attribute *attr, \
const char *buf, size_t len) \
\
static DEVICE_ATTR(name, S_IRUGO | S_IWUSR, show_##name, store_##name)
TM_ATTR(sched0, 0);
TM_ATTR(sched1, 1);
TM_ATTR(sched2, 2);
TM_ATTR(sched3, 3);
TM_ATTR(sched4, 4);
TM_ATTR(sched5, 5);
TM_ATTR(sched6, 6);
TM_ATTR(sched7, 7);
static struct attribute *offload_attrs[] = ;
static struct attribute_group offload_attr_group = ;
static inline int offload_tx(struct t3cdev *tdev, struct sk_buff *skb)
static int write_smt_entry(struct adapter *adapter, int idx)
static int init_smt(struct adapter *adapter)
static void init_port_mtus(struct adapter *adapter)
static int send_pktsched_cmd(struct adapter *adap, int sched, int qidx, int lo,
int hi, int port)
static int bind_qsets(struct adapter *adap)
#define FW_VERSION __stringify(FW_VERSION_MAJOR) "."			\
__stringify(FW_VERSION_MINOR) "." __stringify(FW_VERSION_MICRO)
#define FW_FNAME "cxgb3/t3fw-" FW_VERSION ".bin"
#define TPSRAM_VERSION __stringify(TP_VERSION_MAJOR) "."		\
__stringify(TP_VERSION_MINOR) "." __stringify(TP_VERSION_MICRO)
#define TPSRAM_NAME "cxgb3/t3%c_psram-" TPSRAM_VERSION ".bin"
#define AEL2005_OPT_EDC_NAME "cxgb3/ael2005_opt_edc.bin"
#define AEL2005_TWX_EDC_NAME "cxgb3/ael2005_twx_edc.bin"
#define AEL2020_TWX_EDC_NAME "cxgb3/ael2020_twx_edc.bin"
MODULE_FIRMWARE(FW_FNAME);
MODULE_FIRMWARE("cxgb3/t3b_psram-" TPSRAM_VERSION ".bin");
MODULE_FIRMWARE("cxgb3/t3c_psram-" TPSRAM_VERSION ".bin");
MODULE_FIRMWARE(AEL2005_OPT_EDC_NAME);
MODULE_FIRMWARE(AEL2005_TWX_EDC_NAME);
MODULE_FIRMWARE(AEL2020_TWX_EDC_NAME);
static inline const char *get_edc_fw_name(int edc_idx)
int t3_get_edc_fw(struct cphy *phy, int edc_idx, int size)
static int upgrade_fw(struct adapter *adap)
static inline char t3rev2char(struct adapter *adapter)
static int update_tpsram(struct adapter *adap)
static int cxgb_up(struct adapter *adap)
static void cxgb_down(struct adapter *adapter, int on_wq)
static void schedule_chk_task(struct adapter *adap)
static int offload_open(struct net_device *dev)
static int offload_close(struct t3cdev *tdev)
static int cxgb_open(struct net_device *dev)
static int __cxgb_close(struct net_device *dev, int on_wq)
static int cxgb_close(struct net_device *dev)
static struct net_device_stats *cxgb_get_stats(struct net_device *dev)
static u32 get_msglevel(struct net_device *dev)
static void set_msglevel(struct net_device *dev, u32 val)
static char stats_strings[][ETH_GSTRING_LEN] = ;
static int get_sset_count(struct net_device *dev, int sset)
#define T3_REGMAP_SIZE (3 * 1024)
static int get_regs_len(struct net_device *dev)
static int get_eeprom_len(struct net_device *dev)
static void get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static void get_strings(struct net_device *dev, u32 stringset, u8 * data)
static unsigned long collect_sge_port_stats(struct adapter *adapter,
struct port_info *p, int idx)
static void get_stats(struct net_device *dev, struct ethtool_stats *stats,
u64 *data)
static inline void reg_block_dump(struct adapter *ap, void *buf,
unsigned int start, unsigned int end)
static void get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *buf)
static int restart_autoneg(struct net_device *dev)
static int set_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
static int get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int speed_duplex_to_caps(int speed, int duplex)
#define ADVERTISED_MASK (ADVERTISED_10baseT_Half | ADVERTISED_10baseT_Full | \
ADVERTISED_100baseT_Half | ADVERTISED_100baseT_Full | \
ADVERTISED_1000baseT_Half | ADVERTISED_1000baseT_Full | \
ADVERTISED_10000baseT_Full)
static int set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void get_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static int set_pauseparam(struct net_device *dev,
struct ethtool_pauseparam *epause)
static void get_sge_param(struct net_device *dev, struct ethtool_ringparam *e)
static int set_sge_param(struct net_device *dev, struct ethtool_ringparam *e)
static int set_coalesce(struct net_device *dev, struct ethtool_coalesce *c)
static int get_coalesce(struct net_device *dev, struct ethtool_coalesce *c)
static int get_eeprom(struct net_device *dev, struct ethtool_eeprom *e,
u8 * data)
static int set_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 * data)
static void get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static const struct ethtool_ops cxgb_ethtool_ops = ;
static int in_range(int val, int lo, int hi)
static int cxgb_extension_ioctl(struct net_device *dev, void __user *useraddr)
static int cxgb_ioctl(struct net_device *dev, struct ifreq *req, int cmd)
static int cxgb_change_mtu(struct net_device *dev, int new_mtu)
static int cxgb_set_mac_addr(struct net_device *dev, void *p)
static void t3_synchronize_rx(struct adapter *adap, const struct port_info *p)
static void vlan_rx_register(struct net_device *dev, struct vlan_group *grp)
static void cxgb_netpoll(struct net_device *dev)
static void mac_stats_update(struct adapter *adapter)
static void check_link_status(struct adapter *adapter)
static void check_t3b2_mac(struct adapter *adapter)
static void t3_adap_check_task(struct work_struct *work)
static void db_full_task(struct work_struct *work)
static void db_empty_task(struct work_struct *work)
static void db_drop_task(struct work_struct *work)
static void ext_intr_task(struct work_struct *work)
void t3_os_ext_intr_handler(struct adapter *adapter)
void t3_os_link_fault_handler(struct adapter *adapter, int port_id)
static int t3_adapter_error(struct adapter *adapter, int reset, int on_wq)
static int t3_reenable_adapter(struct adapter *adapter)
static void t3_resume_ports(struct adapter *adapter)
static void fatal_error_task(struct work_struct *work)
void t3_fatal_err(struct adapter *adapter)
static pci_ers_result_t t3_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t t3_io_slot_reset(struct pci_dev *pdev)
static void t3_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers t3_err_handler = ;
static void set_nqsets(struct adapter *adap)
static int __devinit cxgb_enable_msix(struct adapter *adap)
static void __devinit print_port_info(struct adapter *adap,
const struct adapter_info *ai)
static const struct net_device_ops cxgb_netdev_ops = ;
static void __devinit cxgb3_init_iscsi_mac(struct net_device *dev)
static int __devinit init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit remove_one(struct pci_dev *pdev)
static struct pci_driver driver = ;
static int __init cxgb3_init_module(void)
static void __exit cxgb3_cleanup_module(void)
module_init(cxgb3_init_module);
module_exit(cxgb3_cleanup_module);

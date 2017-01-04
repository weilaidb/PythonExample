#define __CHELSIO_COMMON_H
#define CH_ERR(adap, fmt, ...)   dev_err(&adap->pdev->dev, fmt, ## __VA_ARGS__)
#define CH_WARN(adap, fmt, ...)  dev_warn(&adap->pdev->dev, fmt, ## __VA_ARGS__)
#define CH_ALERT(adap, fmt, ...) \
dev_printk(KERN_ALERT, &adap->pdev->dev, fmt, ## __VA_ARGS__)
#define CH_MSG(adapter, level, category, fmt, ...) do  while (0)
# define CH_DBG(adapter, category, fmt, ...) \
CH_MSG(adapter, DEBUG, category, fmt, ## __VA_ARGS__)
# define CH_DBG(adapter, category, fmt, ...)
#define NETIF_MSG_MMIO 0x8000000
enum ;
#define MAX_RX_COALESCING_LEN 12288U
enum ;
enum ;
enum ;
#define TP_VERSION_MAJOR	1
#define TP_VERSION_MINOR	1
#define TP_VERSION_MICRO	0
#define S_TP_VERSION_MAJOR		16
#define M_TP_VERSION_MAJOR		0xFF
#define V_TP_VERSION_MAJOR(x)		((x) << S_TP_VERSION_MAJOR)
#define G_TP_VERSION_MAJOR(x)		\
(((x) >> S_TP_VERSION_MAJOR) & M_TP_VERSION_MAJOR)
#define S_TP_VERSION_MINOR		8
#define M_TP_VERSION_MINOR		0xFF
#define V_TP_VERSION_MINOR(x)		((x) << S_TP_VERSION_MINOR)
#define G_TP_VERSION_MINOR(x)		\
(((x) >> S_TP_VERSION_MINOR) & M_TP_VERSION_MINOR)
#define S_TP_VERSION_MICRO		0
#define M_TP_VERSION_MICRO		0xFF
#define V_TP_VERSION_MICRO(x)		((x) << S_TP_VERSION_MICRO)
#define G_TP_VERSION_MICRO(x)		\
(((x) >> S_TP_VERSION_MICRO) & M_TP_VERSION_MICRO)
enum ;
enum sge_context_type ;
enum ;
struct sg_ent ;
# define SGE_NUM_GENBITS 2
#define TX_DESC_FLITS 16U
#define WR_FLITS (TX_DESC_FLITS + 1 - SGE_NUM_GENBITS)
struct cphy;
struct adapter;
struct mdio_ops ;
struct adapter_info ;
struct mc5_stats ;
struct mc7_stats ;
struct mac_stats ;
struct tp_mib_stats ;
struct tp_params ;
struct qset_params ;
struct sge_params ;
struct mc5_params ;
enum ;
enum ;
enum ;
struct vpd_params ;
struct pci_params ;
enum ;
struct adapter_params ;
enum ;
struct trace_params ;
struct link_config ;
#define SPEED_INVALID   0xffff
#define DUPLEX_INVALID  0xff
struct mc5 ;
static inline unsigned int t3_mc5_size(const struct mc5 *p)
struct mc7 ;
static inline unsigned int t3_mc7_size(const struct mc7 *p)
struct cmac ;
enum ;
enum ;
enum ;
enum ;
struct cphy_ops ;
enum ;
struct cphy ;
static inline int t3_mdio_read(struct cphy *phy, int mmd, int reg,
unsigned int *valp)
static inline int t3_mdio_write(struct cphy *phy, int mmd, int reg,
unsigned int val)
static inline void cphy_init(struct cphy *phy, struct adapter *adapter,
int phy_addr, struct cphy_ops *phy_ops,
const struct mdio_ops *mdio_ops,
unsigned int caps, const char *desc)
#define MAC_STATS_ACCUM_SECS 180
#define XGM_REG(reg_addr, idx) \
((reg_addr) + (idx) * (XGMAC0_1_BASE_ADDR - XGMAC0_0_BASE_ADDR))
struct addr_val_pair ;
# define PCI_VENDOR_ID_CHELSIO 0x1425
#define for_each_port(adapter, iter) \
for (iter = 0; iter < (adapter)->params.nports; ++iter)
#define adapter_info(adap) ((adap)->params.info)
static inline int uses_xaui(const struct adapter *adap)
static inline int is_10G(const struct adapter *adap)
static inline int is_offload(const struct adapter *adap)
static inline unsigned int core_ticks_per_usec(const struct adapter *adap)
static inline unsigned int is_pcie(const struct adapter *adap)
void t3_set_reg_field(struct adapter *adap, unsigned int addr, u32 mask,
u32 val);
void t3_write_regs(struct adapter *adapter, const struct addr_val_pair *p,
int n, unsigned int offset);
int t3_wait_op_done_val(struct adapter *adapter, int reg, u32 mask,
int polarity, int attempts, int delay, u32 *valp);
static inline int t3_wait_op_done(struct adapter *adapter, int reg, u32 mask,
int polarity, int attempts, int delay)
int t3_mdio_change_bits(struct cphy *phy, int mmd, int reg, unsigned int clear,
unsigned int set);
int t3_phy_reset(struct cphy *phy, int mmd, int wait);
int t3_phy_advertise(struct cphy *phy, unsigned int advert);
int t3_phy_advertise_fiber(struct cphy *phy, unsigned int advert);
int t3_set_phy_speed_duplex(struct cphy *phy, int speed, int duplex);
int t3_phy_lasi_intr_enable(struct cphy *phy);
int t3_phy_lasi_intr_disable(struct cphy *phy);
int t3_phy_lasi_intr_clear(struct cphy *phy);
int t3_phy_lasi_intr_handler(struct cphy *phy);
void t3_intr_enable(struct adapter *adapter);
void t3_intr_disable(struct adapter *adapter);
void t3_intr_clear(struct adapter *adapter);
void t3_xgm_intr_enable(struct adapter *adapter, int idx);
void t3_xgm_intr_disable(struct adapter *adapter, int idx);
void t3_port_intr_enable(struct adapter *adapter, int idx);
void t3_port_intr_disable(struct adapter *adapter, int idx);
int t3_slow_intr_handler(struct adapter *adapter);
int t3_phy_intr_handler(struct adapter *adapter);
void t3_link_changed(struct adapter *adapter, int port_id);
void t3_link_fault(struct adapter *adapter, int port_id);
int t3_link_start(struct cphy *phy, struct cmac *mac, struct link_config *lc);
const struct adapter_info *t3_get_adapter_info(unsigned int board_id);
int t3_seeprom_read(struct adapter *adapter, u32 addr, __le32 *data);
int t3_seeprom_write(struct adapter *adapter, u32 addr, __le32 data);
int t3_seeprom_wp(struct adapter *adapter, int enable);
int t3_get_tp_version(struct adapter *adapter, u32 *vers);
int t3_check_tpsram_version(struct adapter *adapter);
int t3_check_tpsram(struct adapter *adapter, const u8 *tp_ram,
unsigned int size);
int t3_set_proto_sram(struct adapter *adap, const u8 *data);
int t3_load_fw(struct adapter *adapter, const u8 * fw_data, unsigned int size);
int t3_get_fw_version(struct adapter *adapter, u32 *vers);
int t3_check_fw_version(struct adapter *adapter);
int t3_init_hw(struct adapter *adapter, u32 fw_params);
int t3_reset_adapter(struct adapter *adapter);
int t3_prep_adapter(struct adapter *adapter, const struct adapter_info *ai,
int reset);
int t3_replay_prep_adapter(struct adapter *adapter);
void t3_led_ready(struct adapter *adapter);
void t3_fatal_err(struct adapter *adapter);
void t3_set_vlan_accel(struct adapter *adapter, unsigned int ports, int on);
void t3_config_rss(struct adapter *adapter, unsigned int rss_config,
const u8 * cpus, const u16 *rspq);
int t3_cim_ctl_blk_read(struct adapter *adap, unsigned int addr,
unsigned int n, unsigned int *valp);
int t3_mc7_bd_read(struct mc7 *mc7, unsigned int start, unsigned int n,
u64 *buf);
int t3_mac_reset(struct cmac *mac);
void t3b_pcs_reset(struct cmac *mac);
void t3_mac_disable_exact_filters(struct cmac *mac);
void t3_mac_enable_exact_filters(struct cmac *mac);
int t3_mac_enable(struct cmac *mac, int which);
int t3_mac_disable(struct cmac *mac, int which);
int t3_mac_set_mtu(struct cmac *mac, unsigned int mtu);
int t3_mac_set_rx_mode(struct cmac *mac, struct net_device *dev);
int t3_mac_set_address(struct cmac *mac, unsigned int idx, u8 addr[6]);
int t3_mac_set_num_ucast(struct cmac *mac, int n);
const struct mac_stats *t3_mac_update_stats(struct cmac *mac);
int t3_mac_set_speed_duplex_fc(struct cmac *mac, int speed, int duplex, int fc);
int t3b2_mac_watchdog_task(struct cmac *mac);
void t3_mc5_prep(struct adapter *adapter, struct mc5 *mc5, int mode);
int t3_mc5_init(struct mc5 *mc5, unsigned int nservers, unsigned int nfilters,
unsigned int nroutes);
void t3_mc5_intr_handler(struct mc5 *mc5);
void t3_tp_set_offload_mode(struct adapter *adap, int enable);
void t3_tp_get_mib_stats(struct adapter *adap, struct tp_mib_stats *tps);
void t3_load_mtus(struct adapter *adap, unsigned short mtus[NMTUS],
unsigned short alpha[NCCTRL_WIN],
unsigned short beta[NCCTRL_WIN], unsigned short mtu_cap);
void t3_config_trace_filter(struct adapter *adapter,
const struct trace_params *tp, int filter_index,
int invert, int enable);
int t3_config_sched(struct adapter *adap, unsigned int kbps, int sched);
void t3_sge_prep(struct adapter *adap, struct sge_params *p);
void t3_sge_init(struct adapter *adap, struct sge_params *p);
int t3_sge_init_ecntxt(struct adapter *adapter, unsigned int id, int gts_enable,
enum sge_context_type type, int respq, u64 base_addr,
unsigned int size, unsigned int token, int gen,
unsigned int cidx);
int t3_sge_init_flcntxt(struct adapter *adapter, unsigned int id,
int gts_enable, u64 base_addr, unsigned int size,
unsigned int esize, unsigned int cong_thres, int gen,
unsigned int cidx);
int t3_sge_init_rspcntxt(struct adapter *adapter, unsigned int id,
int irq_vec_idx, u64 base_addr, unsigned int size,
unsigned int fl_thres, int gen, unsigned int cidx);
int t3_sge_init_cqcntxt(struct adapter *adapter, unsigned int id, u64 base_addr,
unsigned int size, int rspq, int ovfl_mode,
unsigned int credits, unsigned int credit_thres);
int t3_sge_enable_ecntxt(struct adapter *adapter, unsigned int id, int enable);
int t3_sge_disable_fl(struct adapter *adapter, unsigned int id);
int t3_sge_disable_rspcntxt(struct adapter *adapter, unsigned int id);
int t3_sge_disable_cqcntxt(struct adapter *adapter, unsigned int id);
int t3_sge_cqcntxt_op(struct adapter *adapter, unsigned int id, unsigned int op,
unsigned int credits);
int t3_vsc8211_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops);
int t3_ael1002_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops);
int t3_ael1006_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops);
int t3_ael2005_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops);
int t3_ael2020_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops);
int t3_qt2045_phy_prep(struct cphy *phy, struct adapter *adapter, int phy_addr,
const struct mdio_ops *mdio_ops);
int t3_xaui_direct_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops);
int t3_aq100x_phy_prep(struct cphy *phy, struct adapter *adapter,
int phy_addr, const struct mdio_ops *mdio_ops);

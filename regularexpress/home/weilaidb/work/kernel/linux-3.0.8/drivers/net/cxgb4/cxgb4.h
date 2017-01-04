#define __CXGB4_H__
#define FW_VERSION_MAJOR 1
#define FW_VERSION_MINOR 1
#define FW_VERSION_MICRO 0
enum ;
enum ;
enum dev_master ;
enum dev_state ;
enum ;
struct port_stats ;
struct lb_port_stats ;
struct tp_tcp_stats ;
struct tp_err_stats ;
struct tp_params ;
struct vpd_params ;
struct pci_params ;
struct adapter_params ;
struct trace_params ;
struct link_config ;
#define FW_LEN16(fw_struct) FW_CMD_LEN16(sizeof(fw_struct) / 16)
enum ;
enum ;
struct adapter;
struct vlan_group;
struct sge_rspq;
struct port_info ;
struct dentry;
struct work_struct;
enum ;
struct rx_sw_desc;
struct sge_fl ;
struct pkt_gl ;
typedef int (*rspq_handler_t)(struct sge_rspq *q, const __be64 *rsp,
const struct pkt_gl *gl);
struct sge_rspq ;
struct sge_eth_stats ;
struct sge_eth_rxq  ____cacheline_aligned_in_smp;
struct sge_ofld_stats ;
struct sge_ofld_rxq  ____cacheline_aligned_in_smp;
struct tx_desc ;
struct tx_sw_desc;
struct sge_txq ;
struct sge_eth_txq  ____cacheline_aligned_in_smp;
struct sge_ofld_txq  ____cacheline_aligned_in_smp;
struct sge_ctrl_txq  ____cacheline_aligned_in_smp;
struct sge ;
#define for_each_ethrxq(sge, i) for (i = 0; i < (sge)->ethqsets; i++)
#define for_each_ofldrxq(sge, i) for (i = 0; i < (sge)->ofldqsets; i++)
#define for_each_rdmarxq(sge, i) for (i = 0; i < (sge)->rdmaqs; i++)
struct l2t_data;
struct adapter ;
static inline u32 t4_read_reg(struct adapter *adap, u32 reg_addr)
static inline void t4_write_reg(struct adapter *adap, u32 reg_addr, u32 val)
static inline u64 readq(const volatile void __iomem *addr)
static inline void writeq(u64 val, volatile void __iomem *addr)
static inline u64 t4_read_reg64(struct adapter *adap, u32 reg_addr)
static inline void t4_write_reg64(struct adapter *adap, u32 reg_addr, u64 val)
static inline struct port_info *netdev2pinfo(const struct net_device *dev)
static inline struct port_info *adap2pinfo(struct adapter *adap, int idx)
static inline struct adapter *netdev2adap(const struct net_device *dev)
void t4_os_portmod_changed(const struct adapter *adap, int port_id);
void t4_os_link_changed(struct adapter *adap, int port_id, int link_stat);
void *t4_alloc_mem(size_t size);
void t4_free_sge_resources(struct adapter *adap);
irq_handler_t t4_intr_handler(struct adapter *adap);
netdev_tx_t t4_eth_xmit(struct sk_buff *skb, struct net_device *dev);
int t4_ethrx_handler(struct sge_rspq *q, const __be64 *rsp,
const struct pkt_gl *gl);
int t4_mgmt_tx(struct adapter *adap, struct sk_buff *skb);
int t4_ofld_send(struct adapter *adap, struct sk_buff *skb);
int t4_sge_alloc_rxq(struct adapter *adap, struct sge_rspq *iq, bool fwevtq,
struct net_device *dev, int intr_idx,
struct sge_fl *fl, rspq_handler_t hnd);
int t4_sge_alloc_eth_txq(struct adapter *adap, struct sge_eth_txq *txq,
struct net_device *dev, struct netdev_queue *netdevq,
unsigned int iqid);
int t4_sge_alloc_ctrl_txq(struct adapter *adap, struct sge_ctrl_txq *txq,
struct net_device *dev, unsigned int iqid,
unsigned int cmplqid);
int t4_sge_alloc_ofld_txq(struct adapter *adap, struct sge_ofld_txq *txq,
struct net_device *dev, unsigned int iqid);
irqreturn_t t4_sge_intr_msix(int irq, void *cookie);
void t4_sge_init(struct adapter *adap);
void t4_sge_start(struct adapter *adap);
void t4_sge_stop(struct adapter *adap);
#define for_each_port(adapter, iter) \
for (iter = 0; iter < (adapter)->params.nports; ++iter)
static inline unsigned int core_ticks_per_usec(const struct adapter *adap)
static inline unsigned int us_to_core_ticks(const struct adapter *adap,
unsigned int us)
void t4_set_reg_field(struct adapter *adap, unsigned int addr, u32 mask,
u32 val);
int t4_wr_mbox_meat(struct adapter *adap, int mbox, const void *cmd, int size,
void *rpl, bool sleep_ok);
static inline int t4_wr_mbox(struct adapter *adap, int mbox, const void *cmd,
int size, void *rpl)
static inline int t4_wr_mbox_ns(struct adapter *adap, int mbox, const void *cmd,
int size, void *rpl)
void t4_intr_enable(struct adapter *adapter);
void t4_intr_disable(struct adapter *adapter);
int t4_slow_intr_handler(struct adapter *adapter);
int t4_wait_dev_ready(struct adapter *adap);
int t4_link_start(struct adapter *adap, unsigned int mbox, unsigned int port,
struct link_config *lc);
int t4_restart_aneg(struct adapter *adap, unsigned int mbox, unsigned int port);
int t4_seeprom_wp(struct adapter *adapter, bool enable);
int t4_load_fw(struct adapter *adapter, const u8 *fw_data, unsigned int size);
int t4_check_fw_version(struct adapter *adapter);
int t4_prep_adapter(struct adapter *adapter);
int t4_port_init(struct adapter *adap, int mbox, int pf, int vf);
void t4_fatal_err(struct adapter *adapter);
int t4_config_rss_range(struct adapter *adapter, int mbox, unsigned int viid,
int start, int n, const u16 *rspq, unsigned int nrspq);
int t4_config_glbl_rss(struct adapter *adapter, int mbox, unsigned int mode,
unsigned int flags);
int t4_mc_read(struct adapter *adap, u32 addr, __be32 *data, u64 *parity);
int t4_edc_read(struct adapter *adap, int idx, u32 addr, __be32 *data,
u64 *parity);
void t4_get_port_stats(struct adapter *adap, int idx, struct port_stats *p);
void t4_read_mtu_tbl(struct adapter *adap, u16 *mtus, u8 *mtu_log);
void t4_tp_get_tcp_stats(struct adapter *adap, struct tp_tcp_stats *v4,
struct tp_tcp_stats *v6);
void t4_load_mtus(struct adapter *adap, const unsigned short *mtus,
const unsigned short *alpha, const unsigned short *beta);
void t4_wol_magic_enable(struct adapter *adap, unsigned int port,
const u8 *addr);
int t4_wol_pat_enable(struct adapter *adap, unsigned int port, unsigned int map,
u64 mask0, u64 mask1, unsigned int crc, bool enable);
int t4_fw_hello(struct adapter *adap, unsigned int mbox, unsigned int evt_mbox,
enum dev_master master, enum dev_state *state);
int t4_fw_bye(struct adapter *adap, unsigned int mbox);
int t4_early_init(struct adapter *adap, unsigned int mbox);
int t4_fw_reset(struct adapter *adap, unsigned int mbox, int reset);
int t4_query_params(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int nparams, const u32 *params,
u32 *val);
int t4_set_params(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int nparams, const u32 *params,
const u32 *val);
int t4_cfg_pfvf(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int txq, unsigned int txq_eth_ctrl,
unsigned int rxqi, unsigned int rxq, unsigned int tc,
unsigned int vi, unsigned int cmask, unsigned int pmask,
unsigned int nexact, unsigned int rcaps, unsigned int wxcaps);
int t4_alloc_vi(struct adapter *adap, unsigned int mbox, unsigned int port,
unsigned int pf, unsigned int vf, unsigned int nmac, u8 *mac,
unsigned int *rss_size);
int t4_set_rxmode(struct adapter *adap, unsigned int mbox, unsigned int viid,
int mtu, int promisc, int all_multi, int bcast, int vlanex,
bool sleep_ok);
int t4_alloc_mac_filt(struct adapter *adap, unsigned int mbox,
unsigned int viid, bool free, unsigned int naddr,
const u8 **addr, u16 *idx, u64 *hash, bool sleep_ok);
int t4_change_mac(struct adapter *adap, unsigned int mbox, unsigned int viid,
int idx, const u8 *addr, bool persist, bool add_smt);
int t4_set_addr_hash(struct adapter *adap, unsigned int mbox, unsigned int viid,
bool ucast, u64 vec, bool sleep_ok);
int t4_enable_vi(struct adapter *adap, unsigned int mbox, unsigned int viid,
bool rx_en, bool tx_en);
int t4_identify_port(struct adapter *adap, unsigned int mbox, unsigned int viid,
unsigned int nblinks);
int t4_mdio_rd(struct adapter *adap, unsigned int mbox, unsigned int phy_addr,
unsigned int mmd, unsigned int reg, u16 *valp);
int t4_mdio_wr(struct adapter *adap, unsigned int mbox, unsigned int phy_addr,
unsigned int mmd, unsigned int reg, u16 val);
int t4_iq_free(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int iqtype, unsigned int iqid,
unsigned int fl0id, unsigned int fl1id);
int t4_eth_eq_free(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int eqid);
int t4_ctrl_eq_free(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int eqid);
int t4_ofld_eq_free(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int eqid);
int t4_handle_fw_rpl(struct adapter *adap, const __be64 *rpl);

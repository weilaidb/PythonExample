#define __T4VF_COMMON_H__
#define FW_LEN16(fw_struct) FW_CMD_LEN16(sizeof(fw_struct) / 16)
struct t4vf_port_stats ;
struct link_config ;
enum ;
struct dev_params ;
struct sge_params ;
struct vpd_params ;
struct rss_params ;
union rss_vi_config ;
struct vf_resources ;
struct adapter_params ;
# define PCI_VENDOR_ID_CHELSIO 0x1425
#define for_each_port(adapter, iter) \
for (iter = 0; iter < (adapter)->params.nports; iter++)
static inline bool is_10g_port(const struct link_config *lc)
static inline unsigned int core_ticks_per_usec(const struct adapter *adapter)
static inline unsigned int us_to_core_ticks(const struct adapter *adapter,
unsigned int us)
static inline unsigned int core_ticks_to_us(const struct adapter *adapter,
unsigned int ticks)
int t4vf_wr_mbox_core(struct adapter *, const void *, int, void *, bool);
static inline int t4vf_wr_mbox(struct adapter *adapter, const void *cmd,
int size, void *rpl)
static inline int t4vf_wr_mbox_ns(struct adapter *adapter, const void *cmd,
int size, void *rpl)
int __devinit t4vf_wait_dev_ready(struct adapter *);
int __devinit t4vf_port_init(struct adapter *, int);
int t4vf_fw_reset(struct adapter *);
int t4vf_query_params(struct adapter *, unsigned int, const u32 *, u32 *);
int t4vf_set_params(struct adapter *, unsigned int, const u32 *, const u32 *);
int t4vf_get_sge_params(struct adapter *);
int t4vf_get_vpd_params(struct adapter *);
int t4vf_get_dev_params(struct adapter *);
int t4vf_get_rss_glb_config(struct adapter *);
int t4vf_get_vfres(struct adapter *);
int t4vf_read_rss_vi_config(struct adapter *, unsigned int,
union rss_vi_config *);
int t4vf_write_rss_vi_config(struct adapter *, unsigned int,
union rss_vi_config *);
int t4vf_config_rss_range(struct adapter *, unsigned int, int, int,
const u16 *, int);
int t4vf_alloc_vi(struct adapter *, int);
int t4vf_free_vi(struct adapter *, int);
int t4vf_enable_vi(struct adapter *, unsigned int, bool, bool);
int t4vf_identify_port(struct adapter *, unsigned int, unsigned int);
int t4vf_set_rxmode(struct adapter *, unsigned int, int, int, int, int, int,
bool);
int t4vf_alloc_mac_filt(struct adapter *, unsigned int, bool, unsigned int,
const u8 **, u16 *, u64 *, bool);
int t4vf_change_mac(struct adapter *, unsigned int, int, const u8 *, bool);
int t4vf_set_addr_hash(struct adapter *, unsigned int, bool, u64, bool);
int t4vf_get_port_stats(struct adapter *, int, struct t4vf_port_stats *);
int t4vf_iq_free(struct adapter *, unsigned int, unsigned int, unsigned int,
unsigned int);
int t4vf_eth_eq_free(struct adapter *, unsigned int);
int t4vf_handle_fw_rpl(struct adapter *, const __be64 *);

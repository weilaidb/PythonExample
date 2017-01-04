int __devinit t4vf_wait_dev_ready(struct adapter *adapter)
static void get_mbox_rpl(struct adapter *adapter, __be64 *rpl, int size,
u32 mbox_data)
static void dump_mbox(struct adapter *adapter, const char *tag, u32 mbox_data)
int t4vf_wr_mbox_core(struct adapter *adapter, const void *cmd, int size,
void *rpl, bool sleep_ok)
static int hash_mac_addr(const u8 *addr)
static void __devinit init_link_config(struct link_config *lc,
unsigned int caps)
int __devinit t4vf_port_init(struct adapter *adapter, int pidx)
int t4vf_fw_reset(struct adapter *adapter)
int t4vf_query_params(struct adapter *adapter, unsigned int nparams,
const u32 *params, u32 *vals)
int t4vf_set_params(struct adapter *adapter, unsigned int nparams,
const u32 *params, const u32 *vals)
int t4vf_get_sge_params(struct adapter *adapter)
int t4vf_get_vpd_params(struct adapter *adapter)
int t4vf_get_dev_params(struct adapter *adapter)
int t4vf_get_rss_glb_config(struct adapter *adapter)
int t4vf_get_vfres(struct adapter *adapter)
int t4vf_read_rss_vi_config(struct adapter *adapter, unsigned int viid,
union rss_vi_config *config)
int t4vf_write_rss_vi_config(struct adapter *adapter, unsigned int viid,
union rss_vi_config *config)
int t4vf_config_rss_range(struct adapter *adapter, unsigned int viid,
int start, int n, const u16 *rspq, int nrspq)
int t4vf_alloc_vi(struct adapter *adapter, int port_id)
int t4vf_free_vi(struct adapter *adapter, int viid)
int t4vf_enable_vi(struct adapter *adapter, unsigned int viid,
bool rx_en, bool tx_en)
int t4vf_identify_port(struct adapter *adapter, unsigned int viid,
unsigned int nblinks)
int t4vf_set_rxmode(struct adapter *adapter, unsigned int viid,
int mtu, int promisc, int all_multi, int bcast, int vlanex,
bool sleep_ok)
int t4vf_alloc_mac_filt(struct adapter *adapter, unsigned int viid, bool free,
unsigned int naddr, const u8 **addr, u16 *idx,
u64 *hash, bool sleep_ok)
int t4vf_change_mac(struct adapter *adapter, unsigned int viid,
int idx, const u8 *addr, bool persist)
int t4vf_set_addr_hash(struct adapter *adapter, unsigned int viid,
bool ucast, u64 vec, bool sleep_ok)
int t4vf_get_port_stats(struct adapter *adapter, int pidx,
struct t4vf_port_stats *s)
int t4vf_iq_free(struct adapter *adapter, unsigned int iqtype,
unsigned int iqid, unsigned int fl0id, unsigned int fl1id)
int t4vf_eth_eq_free(struct adapter *adapter, unsigned int eqid)
int t4vf_handle_fw_rpl(struct adapter *adapter, const __be64 *rpl)

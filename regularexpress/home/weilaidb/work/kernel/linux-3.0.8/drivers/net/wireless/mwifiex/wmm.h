#define _MWIFIEX_WMM_H_
enum ieee_types_wmm_aciaifsn_bitmasks ;
enum ieee_types_wmm_ecw_bitmasks ;
static inline int
mwifiex_get_tid(struct mwifiex_ra_list_tbl *ptr)
static inline int
mwifiex_wmm_list_len(struct list_head *head)
static inline u8
mwifiex_wmm_is_ra_list_empty(struct list_head *ra_list_hhead)
void mwifiex_wmm_add_buf_txqueue(struct mwifiex_adapter *adapter,
struct sk_buff *skb);
void mwifiex_ralist_add(struct mwifiex_private *priv, u8 *ra);
int mwifiex_wmm_lists_empty(struct mwifiex_adapter *adapter);
void mwifiex_wmm_process_tx(struct mwifiex_adapter *adapter);
int mwifiex_is_ralist_valid(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ra_list, int tid);
u8 mwifiex_wmm_compute_drv_pkt_delay(struct mwifiex_private *priv,
const struct sk_buff *skb);
void mwifiex_wmm_init(struct mwifiex_adapter *adapter);
extern u32 mwifiex_wmm_process_association_req(struct mwifiex_private *priv,
u8 **assoc_buf,
struct ieee_types_wmm_parameter
*wmmie,
struct ieee80211_ht_cap
*htcap);
void mwifiex_wmm_setup_queue_priorities(struct mwifiex_private *priv,
struct ieee_types_wmm_parameter
*wmm_ie);
void mwifiex_wmm_setup_ac_downgrade(struct mwifiex_private *priv);
extern int mwifiex_ret_wmm_get_status(struct mwifiex_private *priv,
const struct host_cmd_ds_command *resp);

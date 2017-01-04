#define _MWIFIEX_11N_H_
int mwifiex_ret_11n_delba(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp);
int mwifiex_ret_11n_addba_req(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp);
int mwifiex_ret_11n_cfg(struct host_cmd_ds_command *resp,
void *data_buf);
int mwifiex_cmd_11n_cfg(struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf);
int mwifiex_cmd_append_11n_tlv(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc,
u8 **buffer);
void mwifiex_cfg_tx_buf(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc);
void mwifiex_fill_cap_info(struct mwifiex_private *, u8 radio_type,
struct mwifiex_ie_types_htcap *);
int mwifiex_set_get_11n_htcap_cfg(struct mwifiex_private *priv,
u16 action, int *htcap_cfg);
void mwifiex_11n_delete_tx_ba_stream_tbl_entry(struct mwifiex_private *priv,
struct mwifiex_tx_ba_stream_tbl
*tx_tbl);
void mwifiex_11n_delete_all_tx_ba_stream_tbl(struct mwifiex_private *priv);
struct mwifiex_tx_ba_stream_tbl *mwifiex_11n_get_tx_ba_stream_tbl(struct
mwifiex_private
*priv, int tid,
u8 *ra);
void mwifiex_11n_create_tx_ba_stream_tbl(struct mwifiex_private *priv, u8 *ra,
int tid,
enum mwifiex_ba_status ba_status);
int mwifiex_send_addba(struct mwifiex_private *priv, int tid, u8 *peer_mac);
int mwifiex_send_delba(struct mwifiex_private *priv, int tid, u8 *peer_mac,
int initiator);
void mwifiex_11n_delete_ba_stream(struct mwifiex_private *priv, u8 *del_ba);
int mwifiex_get_rx_reorder_tbl(struct mwifiex_private *priv,
struct mwifiex_ds_rx_reorder_tbl *buf);
int mwifiex_get_tx_ba_stream_tbl(struct mwifiex_private *priv,
struct mwifiex_ds_tx_ba_stream_tbl *buf);
int mwifiex_ret_amsdu_aggr_ctrl(struct host_cmd_ds_command *resp,
void *data_buf);
int mwifiex_cmd_recfg_tx_buf(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
int cmd_action, void *data_buf);
int mwifiex_cmd_amsdu_aggr_ctrl(struct host_cmd_ds_command *cmd,
int cmd_action, void *data_buf);
static inline u8
mwifiex_is_ampdu_allowed(struct mwifiex_private *priv, int tid)
static inline u8
mwifiex_is_amsdu_allowed(struct mwifiex_private *priv, int tid)
static inline u8 mwifiex_space_avail_for_new_ba_stream(
struct mwifiex_adapter *adapter)
static inline u8
mwifiex_find_stream_to_delete(struct mwifiex_private *priv, int ptr_tid,
int *ptid, u8 *ra)
static inline int
mwifiex_is_ba_stream_setup(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ptr, int tid)

void
mwifiex_fill_cap_info(struct mwifiex_private *priv, u8 radio_type,
struct mwifiex_ie_types_htcap *ht_cap)
static struct mwifiex_tx_ba_stream_tbl *
mwifiex_11n_get_tx_ba_stream_status(struct mwifiex_private *priv,
enum mwifiex_ba_status ba_status)
int mwifiex_ret_11n_delba(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
int mwifiex_ret_11n_addba_req(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
int mwifiex_ret_11n_cfg(struct host_cmd_ds_command *resp, void *data_buf)
int mwifiex_cmd_recfg_tx_buf(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd, int cmd_action,
void *data_buf)
int mwifiex_cmd_amsdu_aggr_ctrl(struct host_cmd_ds_command *cmd,
int cmd_action, void *data_buf)
int mwifiex_ret_amsdu_aggr_ctrl(struct host_cmd_ds_command *resp,
void *data_buf)
int mwifiex_cmd_11n_cfg(struct host_cmd_ds_command *cmd,
u16 cmd_action, void *data_buf)
int
mwifiex_cmd_append_11n_tlv(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc,
u8 **buffer)
void
mwifiex_cfg_tx_buf(struct mwifiex_private *priv,
struct mwifiex_bssdescriptor *bss_desc)
static int mwifiex_is_tx_ba_stream_ptr_valid(struct mwifiex_private *priv,
struct mwifiex_tx_ba_stream_tbl *tx_tbl_ptr)
void mwifiex_11n_delete_tx_ba_stream_tbl_entry(struct mwifiex_private *priv,
struct mwifiex_tx_ba_stream_tbl *tx_ba_tsr_tbl)
void mwifiex_11n_delete_all_tx_ba_stream_tbl(struct mwifiex_private *priv)
struct mwifiex_tx_ba_stream_tbl *
mwifiex_11n_get_tx_ba_stream_tbl(struct mwifiex_private *priv,
int tid, u8 *ra)
void mwifiex_11n_create_tx_ba_stream_tbl(struct mwifiex_private *priv,
u8 *ra, int tid,
enum mwifiex_ba_status ba_status)
int mwifiex_send_addba(struct mwifiex_private *priv, int tid, u8 *peer_mac)
int mwifiex_send_delba(struct mwifiex_private *priv, int tid, u8 *peer_mac,
int initiator)
void mwifiex_11n_delete_ba_stream(struct mwifiex_private *priv, u8 *del_ba)
int mwifiex_get_rx_reorder_tbl(struct mwifiex_private *priv,
struct mwifiex_ds_rx_reorder_tbl *buf)
int mwifiex_get_tx_ba_stream_tbl(struct mwifiex_private *priv,
struct mwifiex_ds_tx_ba_stream_tbl *buf)

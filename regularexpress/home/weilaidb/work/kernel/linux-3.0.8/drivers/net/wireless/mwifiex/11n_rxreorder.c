static int
mwifiex_11n_dispatch_pkt_until_start_win(struct mwifiex_private *priv,
struct mwifiex_rx_reorder_tbl
*rx_reor_tbl_ptr, int start_win)
static int
mwifiex_11n_scan_and_dispatch(struct mwifiex_private *priv,
struct mwifiex_rx_reorder_tbl *rx_reor_tbl_ptr)
static void
mwifiex_11n_delete_rx_reorder_tbl_entry(struct mwifiex_private *priv,
struct mwifiex_rx_reorder_tbl
*rx_reor_tbl_ptr)
static struct mwifiex_rx_reorder_tbl *
mwifiex_11n_get_rx_reorder_tbl(struct mwifiex_private *priv, int tid, u8 *ta)
static int
mwifiex_11n_find_last_seq_num(struct mwifiex_rx_reorder_tbl *rx_reorder_tbl_ptr)
static void
mwifiex_flush_data(unsigned long context)
static void
mwifiex_11n_create_rx_reorder_tbl(struct mwifiex_private *priv, u8 *ta,
int tid, int win_size, int seq_num)
int mwifiex_cmd_11n_addba_req(struct host_cmd_ds_command *cmd, void *data_buf)
int mwifiex_cmd_11n_addba_rsp_gen(struct mwifiex_private *priv,
struct host_cmd_ds_command *cmd,
void *data_buf)
int mwifiex_cmd_11n_delba(struct host_cmd_ds_command *cmd, void *data_buf)
int mwifiex_11n_rx_reorder_pkt(struct mwifiex_private *priv,
u16 seq_num, u16 tid,
u8 *ta, u8 pkt_type, void *payload)
void
mwifiex_11n_delete_ba_stream_tbl(struct mwifiex_private *priv, int tid,
u8 *peer_mac, u8 type, int initiator)
int mwifiex_ret_11n_addba_resp(struct mwifiex_private *priv,
struct host_cmd_ds_command *resp)
void mwifiex_11n_ba_stream_timeout(struct mwifiex_private *priv,
struct host_cmd_ds_11n_batimeout *event)
void mwifiex_11n_cleanup_reorder_tbl(struct mwifiex_private *priv)

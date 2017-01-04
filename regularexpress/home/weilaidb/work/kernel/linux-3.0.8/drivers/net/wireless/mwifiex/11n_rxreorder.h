#define _MWIFIEX_11N_RXREORDER_H_
#define MIN_FLUSH_TIMER_MS		50
#define PKT_TYPE_BAR 0xE7
#define MAX_TID_VALUE			(2 << 11)
#define TWOPOW11			(2 << 10)
#define BLOCKACKPARAM_TID_POS		2
#define BLOCKACKPARAM_AMSDU_SUPP_MASK	0x1
#define BLOCKACKPARAM_WINSIZE_POS	6
#define DELBA_TID_POS			12
#define DELBA_INITIATOR_POS		11
#define TYPE_DELBA_SENT			1
#define TYPE_DELBA_RECEIVE		2
#define IMMEDIATE_BLOCK_ACK		0x2
#define ADDBA_RSP_STATUS_ACCEPT 0
int mwifiex_11n_rx_reorder_pkt(struct mwifiex_private *,
u16 seqNum,
u16 tid, u8 *ta,
u8 pkttype, void *payload);
void mwifiex_11n_delete_ba_stream_tbl(struct mwifiex_private *priv, int Tid,
u8 *PeerMACAddr, u8 type,
int initiator);
void mwifiex_11n_ba_stream_timeout(struct mwifiex_private *priv,
struct host_cmd_ds_11n_batimeout *event);
int mwifiex_ret_11n_addba_resp(struct mwifiex_private *priv,
struct host_cmd_ds_command
*resp);
int mwifiex_cmd_11n_delba(struct host_cmd_ds_command *cmd,
void *data_buf);
int mwifiex_cmd_11n_addba_rsp_gen(struct mwifiex_private *priv,
struct host_cmd_ds_command
*cmd, void *data_buf);
int mwifiex_cmd_11n_addba_req(struct host_cmd_ds_command *cmd,
void *data_buf);
void mwifiex_11n_cleanup_reorder_tbl(struct mwifiex_private *priv);
struct mwifiex_rx_reorder_tbl *mwifiex_11n_get_rxreorder_tbl(struct
mwifiex_private
*priv, int tid,
u8 *ta);

#define _RTL8712_RECV_C_
static u8 bridge_tunnel_header[] = ;
static u8 rfc1042_header[] = ;
static void recv_tasklet(void *priv);
int r8712_init_recv_priv(struct recv_priv *precvpriv, struct _adapter *padapter)
void r8712_free_recv_priv(struct recv_priv *precvpriv)
int r8712_init_recvbuf(struct _adapter *padapter, struct recv_buf *precvbuf)
int r8712_free_recvframe(union recv_frame *precvframe,
struct  __queue *pfree_recv_queue)
static void update_recvframe_attrib_from_recvstat(struct rx_pkt_attrib *pattrib,
struct recv_stat *prxstat)
static union recv_frame *recvframe_defrag(struct _adapter *adapter,
struct  __queue *defrag_q)
union recv_frame *r8712_recvframe_chk_defrag(struct _adapter *padapter,
union recv_frame *precv_frame)
static int amsdu_to_msdu(struct _adapter *padapter, union recv_frame *prframe)
void r8712_rxcmd_event_hdl(struct _adapter *padapter, void *prxcmdbuf)
static int check_indicate_seq(struct recv_reorder_ctrl *preorder_ctrl,
u16 seq_num)
static int enqueue_reorder_recvframe(struct recv_reorder_ctrl *preorder_ctrl,
union recv_frame *prframe)
int r8712_recv_indicatepkts_in_order(struct _adapter *padapter,
struct recv_reorder_ctrl *preorder_ctrl,
int bforced)
static int recv_indicatepkt_reorder(struct _adapter *padapter,
union recv_frame *prframe)
void r8712_reordering_ctrl_timeout_handler(void *pcontext)
static int r8712_process_recv_indicatepkts(struct _adapter *padapter,
union recv_frame *prframe)
static u8 query_rx_pwr_percentage(s8 antpower)
static u8 evm_db2percentage(s8 value)
s32 r8712_signal_scale_mapping(s32 cur_sig)
static s32  translate2dbm(struct _adapter *padapter, u8 signal_strength_idx)
static void query_rx_phy_status(struct _adapter *padapter,
union recv_frame *prframe)
static void process_link_qual(struct _adapter *padapter,
union recv_frame *prframe)
static void process_rssi(struct _adapter *padapter, union recv_frame *prframe)
static void process_phy_info(struct _adapter *padapter,
union recv_frame *prframe)
int recv_func(struct _adapter *padapter, void *pcontext)
static int recvbuf2recvframe(struct _adapter *padapter, struct sk_buff *pskb)
static void recv_tasklet(void *priv)

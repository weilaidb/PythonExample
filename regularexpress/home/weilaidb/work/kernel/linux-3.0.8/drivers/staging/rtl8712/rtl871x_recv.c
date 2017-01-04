#define _RTL871X_RECV_C_
static const u8 SNAP_ETH_TYPE_IPX[2] = ;
static const u8 SNAP_ETH_TYPE_APPLETALK_AARP[2] = ;
static const u8 bridge_tunnel_header[] = ;
static const u8 rfc1042_header[] = ;
void _r8712_init_sta_recv_priv(struct sta_recv_priv *psta_recvpriv)
sint _r8712_init_recv_priv(struct recv_priv *precvpriv,
struct _adapter *padapter)
void _r8712_free_recv_priv(struct recv_priv *precvpriv)
union recv_frame *r8712_alloc_recvframe(struct  __queue *pfree_recv_queue)
void r8712_free_recvframe_queue(struct  __queue *pframequeue,
struct  __queue *pfree_recv_queue)
sint r8712_recvframe_chkmic(struct _adapter *adapter,
union recv_frame *precvframe)
union recv_frame *r8712_decryptor(struct _adapter *padapter,
union recv_frame *precv_frame)
union recv_frame *r8712_portctrl(struct _adapter *adapter,
union recv_frame *precv_frame)
static sint recv_decache(union recv_frame *precv_frame, u8 bretry,
struct stainfo_rxcache *prxcache)
static sint sta2sta_data_frame(struct _adapter *adapter,
union recv_frame *precv_frame,
struct sta_info **psta)
static sint ap2sta_data_frame(struct _adapter *adapter,
union recv_frame *precv_frame,
struct sta_info **psta)
static sint sta2ap_data_frame(struct _adapter *adapter,
union recv_frame *precv_frame,
struct sta_info **psta)
static sint validate_recv_ctrl_frame(struct _adapter *adapter,
union recv_frame *precv_frame)
static sint validate_recv_mgnt_frame(struct _adapter *adapter,
union recv_frame *precv_frame)
static sint validate_recv_data_frame(struct _adapter *adapter,
union recv_frame *precv_frame)
sint r8712_validate_recv_frame(struct _adapter *adapter,
union recv_frame *precv_frame)
sint r8712_wlanhdr_to_ethhdr(union recv_frame *precvframe)
s32 r8712_recv_entry(union recv_frame *precvframe)

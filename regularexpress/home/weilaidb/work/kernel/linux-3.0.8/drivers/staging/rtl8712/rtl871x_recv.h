#define _RTL871X_RECV_H_
#define NR_RECVFRAME 256
#define RXFRAME_ALIGN	8
#define RXFRAME_ALIGN_SZ	(1 << RXFRAME_ALIGN)
#define MAX_RXFRAME_CNT	512
#define MAX_RX_NUMBLKS		(32)
#define RECVFRAME_HDR_ALIGN 128
#define MAX_SUBFRAME_COUNT	64
#define SNAP_SIZE sizeof(struct ieee80211_snap_hdr)
struct recv_reorder_ctrl ;
struct	stainfo_rxcache	;
#define		PHY_RSSI_SLID_WIN_MAX			100
#define		PHY_LINKQUALITY_SLID_WIN_MAX		20
struct smooth_rssi_data ;
struct rx_pkt_attrib ;
struct recv_priv ;
struct sta_recv_priv ;
union recv_frame *r8712_alloc_recvframe(struct  __queue *pfree_recv_queue);
union recv_frame *r8712_dequeue_recvframe(struct  __queue *queue);
int r8712_enqueue_recvframe(union recv_frame *precvframe,
struct  __queue *queue);
int r8712_free_recvframe(union recv_frame *precvframe,
struct  __queue *pfree_recv_queue);
void r8712_free_recvframe_queue(struct  __queue *pframequeue,
struct  __queue *pfree_recv_queue);
void r8712_init_recvframe(union recv_frame *precvframe,
struct recv_priv *precvpriv);
int r8712_wlanhdr_to_ethhdr(union recv_frame *precvframe);
int recv_func(struct _adapter *padapter, void *pcontext);
static inline u8 *get_rxmem(union recv_frame *precvframe)
static inline u8 *get_rx_status(union recv_frame *precvframe)
static inline u8 *get_recvframe_data(union recv_frame *precvframe)
static inline u8 *recvframe_push(union recv_frame *precvframe, sint sz)
static inline u8 *recvframe_pull(union recv_frame *precvframe, sint sz)
static inline u8 *recvframe_put(union recv_frame *precvframe, sint sz)
static inline u8 *recvframe_pull_tail(union recv_frame *precvframe, sint sz)
static inline _buffer *get_rxbuf_desc(union recv_frame *precvframe)
static inline union recv_frame *rxmem_to_recvframe(u8 *rxmem)
static inline union recv_frame *pkt_to_recvframe(_pkt *pkt)
static inline u8 *pkt_to_recvmem(_pkt *pkt)
static inline u8 *pkt_to_recvdata(_pkt *pkt)
static inline sint get_recvframe_len(union recv_frame *precvframe)
struct sta_info;
void	_r8712_init_sta_recv_priv(struct sta_recv_priv *psta_recvpriv);
sint r8712_recvframe_chkmic(struct _adapter *adapter,
union recv_frame *precvframe);
union recv_frame *r8712_decryptor(struct _adapter *adapter,
union recv_frame *precv_frame);
union recv_frame *r8712_recvframe_chk_defrag(struct _adapter *adapter,
union recv_frame *precv_frame);
union recv_frame *r8712_recvframe_defrag(struct _adapter *adapter,
struct  __queue *defrag_q);
union recv_frame *r8712_recvframe_chk_defrag_new(struct _adapter *adapter,
union recv_frame *precv_frame);
union recv_frame *r8712_recvframe_defrag_new(struct _adapter *adapter,
struct  __queue *defrag_q,
union recv_frame *precv_frame);
int r8712_recv_decache(union recv_frame *precv_frame, u8 bretry,
struct stainfo_rxcache *prxcache);
int r8712_sta2sta_data_frame(struct _adapter *adapter,
union recv_frame *precv_frame,
struct sta_info **psta);
int r8712_ap2sta_data_frame(struct _adapter *adapter,
union recv_frame *precv_frame,
struct sta_info **psta);
int r8712_sta2ap_data_frame(struct _adapter *adapter,
union recv_frame *precv_frame,
struct sta_info **psta);
int r8712_validate_recv_ctrl_frame(struct _adapter *adapter,
union recv_frame *precv_frame);
int r8712_validate_recv_mgnt_frame(struct _adapter *adapter,
union recv_frame *precv_frame);
int r8712_validate_recv_data_frame(struct _adapter *adapter,
union recv_frame *precv_frame);
int r8712_validate_recv_frame(struct _adapter *adapter,
union recv_frame *precv_frame);
union recv_frame *r8712_portctrl(struct _adapter *adapter,
union recv_frame *precv_frame);
void  r8712_mgt_dispatcher(struct _adapter *padapter, u8 *pframe, uint len);
int r8712_amsdu_to_msdu(struct _adapter *padapter, union recv_frame *prframe);

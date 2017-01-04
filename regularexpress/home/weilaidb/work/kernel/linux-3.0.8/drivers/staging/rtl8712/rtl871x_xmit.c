#define _RTL871X_XMIT_C_
static const u8 P802_1H_OUI[P80211_OUI_LEN] = ;
static const u8 RFC1042_OUI[P80211_OUI_LEN] = ;
static void init_hwxmits(struct hw_xmit *phwxmit, sint entry);
static void alloc_hwxmits(struct _adapter *padapter);
static void free_hwxmits(struct _adapter *padapter);
static void _init_txservq(struct tx_servq *ptxservq)
void _r8712_init_sta_xmit_priv(struct sta_xmit_priv *psta_xmitpriv)
sint _r8712_init_xmit_priv(struct xmit_priv *pxmitpriv,
struct _adapter *padapter)
void _free_xmit_priv(struct xmit_priv *pxmitpriv)
sint r8712_update_attrib(struct _adapter *padapter, _pkt *pkt,
struct pkt_attrib *pattrib)
static sint xmitframe_addmic(struct _adapter *padapter,
struct xmit_frame *pxmitframe)
static sint xmitframe_swencrypt(struct _adapter *padapter,
struct xmit_frame *pxmitframe)
static sint make_wlanhdr(struct _adapter *padapter , u8 *hdr,
struct pkt_attrib *pattrib)
static sint r8712_put_snap(u8 *data, u16 h_proto)
sint r8712_xmitframe_coalesce(struct _adapter *padapter, _pkt *pkt,
struct xmit_frame *pxmitframe)
void r8712_update_protection(struct _adapter *padapter, u8 *ie, uint ie_len)
struct xmit_buf *r8712_alloc_xmitbuf(struct xmit_priv *pxmitpriv)
int r8712_free_xmitbuf(struct xmit_priv *pxmitpriv, struct xmit_buf *pxmitbuf)
struct xmit_frame *r8712_alloc_xmitframe(struct xmit_priv *pxmitpriv)
void r8712_free_xmitframe(struct xmit_priv *pxmitpriv,
struct xmit_frame *pxmitframe)
void r8712_free_xmitframe_ex(struct xmit_priv *pxmitpriv,
struct xmit_frame *pxmitframe)
void r8712_free_xmitframe_queue(struct xmit_priv *pxmitpriv,
struct  __queue *pframequeue)
static inline struct tx_servq *get_sta_pending(struct _adapter *padapter,
struct  __queue **ppstapending,
struct sta_info *psta, sint up)
sint r8712_xmit_classifier(struct _adapter *padapter,
struct xmit_frame *pxmitframe)
static void alloc_hwxmits(struct _adapter *padapter)
static void free_hwxmits(struct _adapter *padapter)
static void init_hwxmits(struct hw_xmit *phwxmit, sint entry)
int r8712_pre_xmit(struct _adapter *padapter, struct xmit_frame *pxmitframe)

#define _RTL871X_XMIT_H_
#define MAX_XMITBUF_SZ	(2048)
#define NR_XMITBUFF	(4)
#define XMITBUF_ALIGN_SZ 512
#define TX_GUARD_BAND		5
#define MAX_NUMBLKS		(1)
#define WEP_IV(pattrib_iv, txpn, keyidx)\
do  while (0)
#define TKIP_IV(pattrib_iv, txpn, keyidx)\
do  while (0)
#define AES_IV(pattrib_iv, txpn, keyidx)\
do  while (0)
struct hw_xmit ;
struct pkt_attrib ;
#define WLANHDR_OFFSET	64
#define DATA_FRAMETAG		0x01
#define L2_FRAMETAG		0x02
#define MGNT_FRAMETAG		0x03
#define AMSDU_FRAMETAG	0x04
#define EII_FRAMETAG		0x05
#define IEEE8023_FRAMETAG  0x06
#define MP_FRAMETAG		0x07
#define TXAGG_FRAMETAG	0x08
struct xmit_buf ;
struct xmit_frame ;
struct tx_servq ;
struct sta_xmit_priv ;
struct	hw_txqueue ;
struct	xmit_priv ;
static inline struct  __queue *get_free_xmit_queue(
struct xmit_priv *pxmitpriv)
int r8712_free_xmitbuf(struct xmit_priv *pxmitpriv,
struct xmit_buf *pxmitbuf);
struct xmit_buf *r8712_alloc_xmitbuf(struct xmit_priv *pxmitpriv);
void r8712_update_protection(struct _adapter *padapter, u8 *ie, uint ie_len);
struct xmit_frame *r8712_alloc_xmitframe(struct xmit_priv *pxmitpriv);
void r8712_free_xmitframe(struct xmit_priv *pxmitpriv,
struct xmit_frame *pxmitframe);
void r8712_free_xmitframe_queue(struct xmit_priv *pxmitpriv,
struct  __queue *pframequeue);
sint r8712_xmit_classifier(struct _adapter *padapter,
struct xmit_frame *pxmitframe);
sint r8712_xmitframe_coalesce(struct _adapter *padapter, _pkt *pkt,
struct xmit_frame *pxmitframe);
sint _r8712_init_hw_txqueue(struct hw_txqueue *phw_txqueue, u8 ac_tag);
void _r8712_init_sta_xmit_priv(struct sta_xmit_priv *psta_xmitpriv);
sint r8712_update_attrib(struct _adapter *padapter, _pkt *pkt,
struct pkt_attrib *pattrib);
int r8712_txframes_sta_ac_pending(struct _adapter *padapter,
struct pkt_attrib *pattrib);
sint _r8712_init_xmit_priv(struct xmit_priv *pxmitpriv,
struct _adapter *padapter);
void _free_xmit_priv(struct xmit_priv *pxmitpriv);
void r8712_free_xmitframe_ex(struct xmit_priv *pxmitpriv,
struct xmit_frame *pxmitframe);
int r8712_pre_xmit(struct _adapter *padapter, struct xmit_frame *pxmitframe);
int r8712_xmit_enqueue(struct _adapter *padapter,
struct xmit_frame *pxmitframe);
int r8712_xmit_direct(struct _adapter *padapter, struct xmit_frame *pxmitframe);
void r8712_xmit_bh(void *priv);

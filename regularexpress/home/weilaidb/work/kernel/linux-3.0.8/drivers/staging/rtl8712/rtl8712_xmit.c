#define _RTL8712_XMIT_C_
static void dump_xframe(struct _adapter *padapter,
struct xmit_frame *pxmitframe);
sint _r8712_init_hw_txqueue(struct hw_txqueue *phw_txqueue, u8 ac_tag)
int r8712_txframes_sta_ac_pending(struct _adapter *padapter,
struct pkt_attrib *pattrib)
static u32 get_ff_hwaddr(struct xmit_frame *pxmitframe)
static struct xmit_frame *dequeue_one_xmitframe(struct xmit_priv *pxmitpriv,
struct hw_xmit *phwxmit,
struct tx_servq *ptxservq,
struct  __queue *pframe_queue)
static struct xmit_frame *dequeue_xframe_ex(struct xmit_priv *pxmitpriv,
struct hw_xmit *phwxmit_i, sint entry)
void r8712_do_queue_select(struct _adapter *padapter,
struct pkt_attrib *pattrib)
static void update_txdesc(struct xmit_frame *pxmitframe, uint *pmem, int sz)
int r8712_xmitframe_complete(struct _adapter *padapter,
struct xmit_priv *pxmitpriv,
struct xmit_buf *pxmitbuf)
static void dump_xframe(struct _adapter *padapter,
struct xmit_frame *pxmitframe)
int r8712_xmit_direct(struct _adapter *padapter, struct xmit_frame *pxmitframe)
int r8712_xmit_enqueue(struct _adapter *padapter, struct xmit_frame *pxmitframe)

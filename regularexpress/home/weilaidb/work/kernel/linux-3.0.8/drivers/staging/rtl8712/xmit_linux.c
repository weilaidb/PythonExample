#define _XMIT_OSDEP_C_
static uint remainder_len(struct pkt_file *pfile)
void _r8712_open_pktfile(_pkt *pktptr, struct pkt_file *pfile)
uint _r8712_pktfile_read(struct pkt_file *pfile, u8 *rmem, uint rlen)
sint r8712_endofpktfile(struct pkt_file *pfile)
void r8712_set_qos(struct pkt_file *ppktfile, struct pkt_attrib *pattrib)
int r8712_xmit_resource_alloc(struct _adapter *padapter,
struct xmit_buf *pxmitbuf)
void r8712_xmit_resource_free(struct _adapter *padapter,
struct xmit_buf *pxmitbuf)
void r8712_xmit_complete(struct _adapter *padapter, struct xmit_frame *pxframe)
int r8712_xmit_entry(_pkt *pkt, struct  net_device *pnetdev)

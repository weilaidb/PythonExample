#define _HCI_OPS_OS_C_
#define	RTL871X_VENQT_READ	0xc0
#define	RTL871X_VENQT_WRITE	0x40
struct zero_bulkout_context ;
#define usb_write_cmd r8712_usb_write_mem
#define usb_write_cmd_complete usb_write_mem_complete
uint r8712_usb_init_intf_priv(struct intf_priv *pintfpriv)
void r8712_usb_unload_intf_priv(struct intf_priv *pintfpriv)
static unsigned int ffaddr2pipehdl(struct dvobj_priv *pdvobj, u32 addr)
static void usb_write_mem_complete(struct urb *purb)
void r8712_usb_write_mem(struct intf_hdl *pintfhdl, u32 addr, u32 cnt, u8 *wmem)
static void r8712_usb_read_port_complete(struct urb *purb)
u32 r8712_usb_read_port(struct intf_hdl *pintfhdl, u32 addr, u32 cnt, u8 *rmem)
void r8712_usb_read_port_cancel(struct _adapter *padapter)
void r8712_xmit_bh(void *priv)
static void usb_write_port_complete(struct urb *purb)
u32 r8712_usb_write_port(struct intf_hdl *pintfhdl, u32 addr, u32 cnt, u8 *wmem)
void r8712_usb_write_port_cancel(struct _adapter *padapter)
int r8712_usbctrl_vendorreq(struct intf_priv *pintfpriv, u8 request, u16 value,
u16 index, void *pdata, u16 len, u8 requesttype)

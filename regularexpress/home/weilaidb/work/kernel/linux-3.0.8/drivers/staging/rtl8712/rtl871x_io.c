#define _RTL871X_IO_C_
static uint _init_intf_hdl(struct _adapter *padapter,
struct intf_hdl *pintf_hdl)
static void _unload_intf_hdl(struct intf_priv *pintfpriv)
static uint register_intf_hdl(u8 *dev, struct intf_hdl *pintfhdl)
static  void unregister_intf_hdl(struct intf_hdl *pintfhdl)
uint r8712_alloc_io_queue(struct _adapter *adapter)
void r8712_free_io_queue(struct _adapter *adapter)

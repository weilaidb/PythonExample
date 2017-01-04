int dvb_usb_vp702x_debug;
module_param_named(debug,dvb_usb_vp702x_debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,xfer=2,rc=4 (or-able))." DVB_USB_DEBUG_STATUS);
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
struct vp702x_adapter_state ;
static int vp702x_usb_in_op_unlocked(struct dvb_usb_device *d, u8 req,
u16 value, u16 index, u8 *b, int blen)
int vp702x_usb_in_op(struct dvb_usb_device *d, u8 req, u16 value,
u16 index, u8 *b, int blen)
int vp702x_usb_out_op_unlocked(struct dvb_usb_device *d, u8 req, u16 value,
u16 index, u8 *b, int blen)
int vp702x_usb_out_op(struct dvb_usb_device *d, u8 req, u16 value,
u16 index, u8 *b, int blen)
int vp702x_usb_inout_op(struct dvb_usb_device *d, u8 *o, int olen, u8 *i, int ilen, int msec)
static int vp702x_usb_inout_cmd(struct dvb_usb_device *d, u8 cmd, u8 *o,
int olen, u8 *i, int ilen, int msec)
static int vp702x_set_pld_mode(struct dvb_usb_adapter *adap, u8 bypass)
static int vp702x_set_pld_state(struct dvb_usb_adapter *adap, u8 state)
static int vp702x_set_pid(struct dvb_usb_adapter *adap, u16 pid, u8 id, int onoff)
static int vp702x_init_pid_filter(struct dvb_usb_adapter *adap)
{
struct vp702x_adapter_state *st = adap->priv;
struct vp702x_device_state *dst = adap->dev->priv;
int i;
u8 *b;
st->pid_filter_count = 8;
st->pid_filter_can_bypass = 1;
st->pid_filter_state = 0x00;
vp702x_set_pld_mode(adap, 1);
for (i = 0; i < st->pid_filter_count; i++)
vp702x_set_pid(adap, 0xffff, i, 1);
mutex_lock(&dst->buf_mutex);
b = dst->buf;
memset(b, 0, 10);
vp702x_usb_in_op(adap->dev, 0xb5, 3, 0, b, 10);
vp702x_usb_in_op(adap->dev, 0xb5, 0, 0, b, 10);
vp702x_usb_in_op(adap->dev, 0xb5, 1, 0, b, 10);
mutex_unlock(&dst->buf_mutex);
static struct rc_map_table rc_map_vp702x_table[] = ;
static int vp702x_rc_query(struct dvb_usb_device *d, u32 *event, int *state)
static int vp702x_read_mac_addr(struct dvb_usb_device *d,u8 mac[6])
static int vp702x_frontend_attach(struct dvb_usb_adapter *adap)
static struct dvb_usb_device_properties vp702x_properties;
static int vp702x_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void vp702x_usb_disconnect(struct usb_interface *intf)
static struct usb_device_id vp702x_usb_table [] = ;
MODULE_DEVICE_TABLE(usb, vp702x_usb_table);
static struct dvb_usb_device_properties vp702x_properties = ;
static struct usb_driver vp702x_usb_driver = ;
static int __init vp702x_usb_module_init(void)
static void __exit vp702x_usb_module_exit(void)
module_init(vp702x_usb_module_init);
module_exit(vp702x_usb_module_exit);
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_DESCRIPTION("Driver for Twinhan StarBox DVB-S USB2.0 and clones");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");

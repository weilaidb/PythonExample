MODULE_DESCRIPTION("DVB driver extension module for tm5600/6000/6010 based TV cards");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("{,"
"{,"
"{");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug message");
static inline void print_err_status(struct tm6000_core *dev,
int packet, int status)
static void tm6000_urb_received(struct urb *urb)
int tm6000_start_stream(struct tm6000_core *dev)
void tm6000_stop_stream(struct tm6000_core *dev)
int tm6000_start_feed(struct dvb_demux_feed *feed)
int tm6000_stop_feed(struct dvb_demux_feed *feed)
int tm6000_dvb_attach_frontend(struct tm6000_core *dev)
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
int register_dvb(struct tm6000_core *dev)
void unregister_dvb(struct tm6000_core *dev)
static int dvb_init(struct tm6000_core *dev)
static int dvb_fini(struct tm6000_core *dev)
static struct tm6000_ops dvb_ops = ;
static int __init tm6000_dvb_register(void)
static void __exit tm6000_dvb_unregister(void)
module_init(tm6000_dvb_register);
module_exit(tm6000_dvb_unregister);

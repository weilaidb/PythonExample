MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,"enable debug messages");
#define dprintk(fmt, arg...)	if (debug)			\
printk(KERN_DEBUG "%s/dvb: " fmt, dvb->name , ## arg)
static int videobuf_dvb_thread(void *data)
static int videobuf_dvb_start_feed(struct dvb_demux_feed *feed)
static int videobuf_dvb_stop_feed(struct dvb_demux_feed *feed)
static int videobuf_dvb_register_adapter(struct videobuf_dvb_frontends *fe,
struct module *module,
void *adapter_priv,
struct device *device,
char *adapter_name,
short *adapter_nr,
int mfe_shared,
int (*fe_ioctl_override)(struct dvb_frontend *,
unsigned int, void *, unsigned int))
static int videobuf_dvb_register_frontend(struct dvb_adapter *adapter,
struct videobuf_dvb *dvb)
int videobuf_dvb_register_bus(struct videobuf_dvb_frontends *f,
struct module *module,
void *adapter_priv,
struct device *device,
short *adapter_nr,
int mfe_shared,
int (*fe_ioctl_override)(struct dvb_frontend *,
unsigned int, void *, unsigned int))
EXPORT_SYMBOL(videobuf_dvb_register_bus);
void videobuf_dvb_unregister_bus(struct videobuf_dvb_frontends *f)
EXPORT_SYMBOL(videobuf_dvb_unregister_bus);
struct videobuf_dvb_frontend *videobuf_dvb_get_frontend(
struct videobuf_dvb_frontends *f, int id)
EXPORT_SYMBOL(videobuf_dvb_get_frontend);
int videobuf_dvb_find_frontend(struct videobuf_dvb_frontends *f,
struct dvb_frontend *p)
EXPORT_SYMBOL(videobuf_dvb_find_frontend);
struct videobuf_dvb_frontend *videobuf_dvb_alloc_frontend(
struct videobuf_dvb_frontends *f, int id)
EXPORT_SYMBOL(videobuf_dvb_alloc_frontend);
void videobuf_dvb_dealloc_frontends(struct videobuf_dvb_frontends *f)
EXPORT_SYMBOL(videobuf_dvb_dealloc_frontends);

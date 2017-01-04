#define _DVBDEV_H_
#define DVB_MAJOR 212
#if defined(CONFIG_DVB_MAX_ADAPTERS) && CONFIG_DVB_MAX_ADAPTERS > 0
#define DVB_MAX_ADAPTERS CONFIG_DVB_MAX_ADAPTERS
#define DVB_MAX_ADAPTERS 8
#define DVB_UNSET (-1)
#define DVB_DEVICE_VIDEO      0
#define DVB_DEVICE_AUDIO      1
#define DVB_DEVICE_SEC        2
#define DVB_DEVICE_FRONTEND   3
#define DVB_DEVICE_DEMUX      4
#define DVB_DEVICE_DVR        5
#define DVB_DEVICE_CA         6
#define DVB_DEVICE_NET        7
#define DVB_DEVICE_OSD        8
#define DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr) \
static short adapter_nr[] = \
; \
module_param_array(adapter_nr, short, NULL, 0444); \
MODULE_PARM_DESC(adapter_nr, "DVB adapter numbers")
struct dvb_frontend;
struct dvb_adapter ;
struct dvb_device ;
extern int dvb_register_adapter(struct dvb_adapter *adap, const char *name,
struct module *module, struct device *device,
short *adapter_nums);
extern int dvb_unregister_adapter (struct dvb_adapter *adap);
extern int dvb_register_device (struct dvb_adapter *adap,
struct dvb_device **pdvbdev,
const struct dvb_device *template,
void *priv,
int type);
extern void dvb_unregister_device (struct dvb_device *dvbdev);
extern int dvb_generic_open (struct inode *inode, struct file *file);
extern int dvb_generic_release (struct inode *inode, struct file *file);
extern long dvb_generic_ioctl (struct file *file,
unsigned int cmd, unsigned long arg);
extern int dvb_usercopy(struct file *file, unsigned int cmd, unsigned long arg,
int (*func)(struct file *file, unsigned int cmd, void *arg));
#define dvb_attach(FUNCTION, ARGS...) ()
#define dvb_attach(FUNCTION, ARGS...) ()

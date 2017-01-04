#define	_VIDEOBUF_DVB_H_
struct videobuf_dvb ;
struct videobuf_dvb_frontend ;
struct videobuf_dvb_frontends ;
int videobuf_dvb_register_bus(struct videobuf_dvb_frontends *f,
struct module *module,
void *adapter_priv,
struct device *device,
short *adapter_nr,
int mfe_shared,
int (*fe_ioctl_override)(struct dvb_frontend *,
unsigned int, void *, unsigned int));
void videobuf_dvb_unregister_bus(struct videobuf_dvb_frontends *f);
struct videobuf_dvb_frontend * videobuf_dvb_alloc_frontend(struct videobuf_dvb_frontends *f, int id);
void videobuf_dvb_dealloc_frontends(struct videobuf_dvb_frontends *f);
struct videobuf_dvb_frontend * videobuf_dvb_get_frontend(struct videobuf_dvb_frontends *f, int id);
int videobuf_dvb_find_frontend(struct videobuf_dvb_frontends *f, struct dvb_frontend *p);

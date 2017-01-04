static ssize_t ts_write(struct file *file, const char *buf,
size_t count, loff_t *ppos)
static ssize_t ts_read(struct file *file, char *buf,
size_t count, loff_t *ppos)
static const struct file_operations ci_fops = ;
struct dvb_device ngene_dvbdev_ci = ;
static void swap_buffer(u32 *p, u32 len)
void *tsin_exchange(void *priv, void *buf, u32 len, u32 clock, u32 flags)
u8 fill_ts[188] = ;
void *tsout_exchange(void *priv, void *buf, u32 len, u32 clock, u32 flags)
int ngene_start_feed(struct dvb_demux_feed *dvbdmxfeed)
int ngene_stop_feed(struct dvb_demux_feed *dvbdmxfeed)
int my_dvb_dmx_ts_card_init(struct dvb_demux *dvbdemux, char *id,
int (*start_feed)(struct dvb_demux_feed *),
int (*stop_feed)(struct dvb_demux_feed *),
void *priv)
int my_dvb_dmxdev_ts_card_init(struct dmxdev *dmxdev,
struct dvb_demux *dvbdemux,
struct dmx_frontend *hw_frontend,
struct dmx_frontend *mem_frontend,
struct dvb_adapter *dvb_adapter)

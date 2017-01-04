static int alloc_channel(struct firedtv *fdtv)
static void collect_channels(struct firedtv *fdtv, int *pidc, u16 pid[])
static inline void dealloc_channel(struct firedtv *fdtv, int i)
int fdtv_start_feed(struct dvb_demux_feed *dvbdmxfeed)
int fdtv_stop_feed(struct dvb_demux_feed *dvbdmxfeed)
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
int fdtv_dvb_register(struct firedtv *fdtv, const char *name)
void fdtv_dvb_unregister(struct firedtv *fdtv)

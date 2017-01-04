#define NOBUFS
static int dvb_demux_tscheck;
module_param(dvb_demux_tscheck, int, 0644);
MODULE_PARM_DESC(dvb_demux_tscheck,
"enable transport stream continuity and TEI check");
static int dvb_demux_speedcheck;
module_param(dvb_demux_speedcheck, int, 0644);
MODULE_PARM_DESC(dvb_demux_speedcheck,
"enable transport stream speed check");
#define dprintk_tscheck(x...) do  while (0)
static inline u16 section_length(const u8 *buf)
static inline u16 ts_pid(const u8 *buf)
static inline u8 payload(const u8 *tsp)
static u32 dvb_dmx_crc32(struct dvb_demux_feed *f, const u8 *src, size_t len)
static void dvb_dmx_memcopy(struct dvb_demux_feed *f, u8 *d, const u8 *s,
size_t len)
static inline int dvb_dmx_swfilter_payload(struct dvb_demux_feed *feed,
const u8 *buf)
static int dvb_dmx_swfilter_sectionfilter(struct dvb_demux_feed *feed,
struct dvb_demux_filter *f)
static inline int dvb_dmx_swfilter_section_feed(struct dvb_demux_feed *feed)
static void dvb_dmx_swfilter_section_new(struct dvb_demux_feed *feed)
static int dvb_dmx_swfilter_section_copy_dump(struct dvb_demux_feed *feed,
const u8 *buf, u8 len)
static int dvb_dmx_swfilter_section_packet(struct dvb_demux_feed *feed,
const u8 *buf)
static inline void dvb_dmx_swfilter_packet_type(struct dvb_demux_feed *feed,
const u8 *buf)
#define DVR_FEED(f)							\
(((f)->type == DMX_TYPE_TS) &&					\
((f)->feed.ts.is_filtering) &&					\
(((f)->ts_type & (TS_PACKET | TS_DEMUX)) == TS_PACKET))
static void dvb_dmx_swfilter_packet(struct dvb_demux *demux, const u8 *buf)
void dvb_dmx_swfilter_packets(struct dvb_demux *demux, const u8 *buf,
size_t count)
EXPORT_SYMBOL(dvb_dmx_swfilter_packets);
static inline int find_next_packet(const u8 *buf, int pos, size_t count,
const int pktsize)
static inline void _dvb_dmx_swfilter(struct dvb_demux *demux, const u8 *buf,
size_t count, const int pktsize)
void dvb_dmx_swfilter(struct dvb_demux *demux, const u8 *buf, size_t count)
EXPORT_SYMBOL(dvb_dmx_swfilter);
void dvb_dmx_swfilter_204(struct dvb_demux *demux, const u8 *buf, size_t count)
EXPORT_SYMBOL(dvb_dmx_swfilter_204);
static struct dvb_demux_filter *dvb_dmx_filter_alloc(struct dvb_demux *demux)
static struct dvb_demux_feed *dvb_dmx_feed_alloc(struct dvb_demux *demux)
static int dvb_demux_feed_find(struct dvb_demux_feed *feed)
static void dvb_demux_feed_add(struct dvb_demux_feed *feed)
static void dvb_demux_feed_del(struct dvb_demux_feed *feed)
static int dmx_ts_feed_set(struct dmx_ts_feed *ts_feed, u16 pid, int ts_type,
enum dmx_ts_pes pes_type,
size_t circular_buffer_size, struct timespec timeout)
static int dmx_ts_feed_start_filtering(struct dmx_ts_feed *ts_feed)
static int dmx_ts_feed_stop_filtering(struct dmx_ts_feed *ts_feed)
static int dvbdmx_allocate_ts_feed(struct dmx_demux *dmx,
struct dmx_ts_feed **ts_feed,
dmx_ts_cb callback)
static int dvbdmx_release_ts_feed(struct dmx_demux *dmx,
struct dmx_ts_feed *ts_feed)
static int dmx_section_feed_allocate_filter(struct dmx_section_feed *feed,
struct dmx_section_filter **filter)
static int dmx_section_feed_set(struct dmx_section_feed *feed,
u16 pid, size_t circular_buffer_size,
int check_crc)
static void prepare_secfilters(struct dvb_demux_feed *dvbdmxfeed)
static int dmx_section_feed_start_filtering(struct dmx_section_feed *feed)
static int dmx_section_feed_stop_filtering(struct dmx_section_feed *feed)
static int dmx_section_feed_release_filter(struct dmx_section_feed *feed,
struct dmx_section_filter *filter)
static int dvbdmx_allocate_section_feed(struct dmx_demux *demux,
struct dmx_section_feed **feed,
dmx_section_cb callback)
static int dvbdmx_release_section_feed(struct dmx_demux *demux,
struct dmx_section_feed *feed)
static int dvbdmx_open(struct dmx_demux *demux)
static int dvbdmx_close(struct dmx_demux *demux)
static int dvbdmx_write(struct dmx_demux *demux, const char __user *buf, size_t count)
static int dvbdmx_add_frontend(struct dmx_demux *demux,
struct dmx_frontend *frontend)
static int dvbdmx_remove_frontend(struct dmx_demux *demux,
struct dmx_frontend *frontend)
static struct list_head *dvbdmx_get_frontends(struct dmx_demux *demux)
static int dvbdmx_connect_frontend(struct dmx_demux *demux,
struct dmx_frontend *frontend)
static int dvbdmx_disconnect_frontend(struct dmx_demux *demux)
static int dvbdmx_get_pes_pids(struct dmx_demux *demux, u16 * pids)
int dvb_dmx_init(struct dvb_demux *dvbdemux)
EXPORT_SYMBOL(dvb_dmx_init);
void dvb_dmx_release(struct dvb_demux *dvbdemux)
EXPORT_SYMBOL(dvb_dmx_release);

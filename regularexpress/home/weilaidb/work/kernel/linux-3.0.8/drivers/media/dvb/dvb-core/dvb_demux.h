#define _DVB_DEMUX_H_
#define DMX_TYPE_TS  0
#define DMX_TYPE_SEC 1
#define DMX_TYPE_PES 2
#define DMX_STATE_FREE      0
#define DMX_STATE_ALLOCATED 1
#define DMX_STATE_SET       2
#define DMX_STATE_READY     3
#define DMX_STATE_GO        4
#define DVB_DEMUX_MASK_MAX 18
#define MAX_PID 0x1fff
#define SPEED_PKTS_INTERVAL 50000
struct dvb_demux_filter ;
#define DMX_FEED_ENTRY(pos) list_entry(pos, struct dvb_demux_feed, list_head)
struct dvb_demux_feed ;
struct dvb_demux ;
int dvb_dmx_init(struct dvb_demux *dvbdemux);
void dvb_dmx_release(struct dvb_demux *dvbdemux);
void dvb_dmx_swfilter_packets(struct dvb_demux *dvbdmx, const u8 *buf,
size_t count);
void dvb_dmx_swfilter(struct dvb_demux *demux, const u8 *buf, size_t count);
void dvb_dmx_swfilter_204(struct dvb_demux *demux, const u8 *buf,
size_t count);

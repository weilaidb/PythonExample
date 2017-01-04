#define _DVB_NET_H_
#define DVB_NET_DEVICES_MAX 10
struct dvb_net ;
void dvb_net_release(struct dvb_net *);
int  dvb_net_init(struct dvb_adapter *, struct dvb_net *, struct dmx_demux *);

#define _DMXDEV_H_
enum dmxdev_type ;
enum dmxdev_state ;
struct dmxdev_feed ;
struct dmxdev_filter ;
struct dmxdev ;
int dvb_dmxdev_init(struct dmxdev *dmxdev, struct dvb_adapter *);
void dvb_dmxdev_release(struct dmxdev *dmxdev);

#define _DVB_CA_EN50221_H_
#define DVB_CA_EN50221_POLL_CAM_PRESENT	1
#define DVB_CA_EN50221_POLL_CAM_CHANGED	2
#define DVB_CA_EN50221_POLL_CAM_READY		4
#define DVB_CA_EN50221_FLAG_IRQ_CAMCHANGE	1
#define DVB_CA_EN50221_FLAG_IRQ_FR		2
#define DVB_CA_EN50221_FLAG_IRQ_DA		4
#define DVB_CA_EN50221_CAMCHANGE_REMOVED		0
#define DVB_CA_EN50221_CAMCHANGE_INSERTED		1
struct dvb_ca_en50221 ;
void dvb_ca_en50221_camchange_irq(struct dvb_ca_en50221* pubca, int slot, int change_type);
void dvb_ca_en50221_camready_irq(struct dvb_ca_en50221* pubca, int slot);
void dvb_ca_en50221_frda_irq(struct dvb_ca_en50221* ca, int slot);
extern int dvb_ca_en50221_init(struct dvb_adapter *dvb_adapter, struct dvb_ca_en50221* ca, int flags, int slot_count);
extern void dvb_ca_en50221_release(struct dvb_ca_en50221* ca);

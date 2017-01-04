#define _DVB_FRONTEND_H_
struct dvb_frontend_tune_settings ;
struct dvb_frontend;
struct dvb_tuner_info ;
struct analog_parameters ;
enum dvbfe_modcod ;
enum tuner_param ;
enum dvbfe_algo ;
struct tuner_state ;
enum dvbfe_search ;
struct dvb_tuner_ops ;
struct analog_demod_info ;
struct analog_demod_ops ;
struct dvb_frontend_ops ;
#define MAX_EVENT 8
struct dvb_fe_events ;
struct dtv_frontend_properties ;
struct dvb_frontend ;
extern int dvb_register_frontend(struct dvb_adapter *dvb,
struct dvb_frontend *fe);
extern int dvb_unregister_frontend(struct dvb_frontend *fe);
extern void dvb_frontend_detach(struct dvb_frontend *fe);
extern void dvb_frontend_reinitialise(struct dvb_frontend *fe);
extern void dvb_frontend_sleep_until(struct timeval *waketime, u32 add_usec);
extern s32 timeval_usec_diff(struct timeval lasttime, struct timeval curtime);

#define TTUSBDECFE_H
struct ttusbdecfe_config
;
extern struct dvb_frontend* ttusbdecfe_dvbs_attach(const struct ttusbdecfe_config* config);
extern struct dvb_frontend* ttusbdecfe_dvbt_attach(const struct ttusbdecfe_config* config);

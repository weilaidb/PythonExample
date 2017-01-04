#define DVB_DUMMY_FE_H
#if defined(CONFIG_DVB_DUMMY_FE) || (defined(CONFIG_DVB_DUMMY_FE_MODULE) && \
defined(MODULE))
extern struct dvb_frontend* dvb_dummy_fe_ofdm_attach(void);
extern struct dvb_frontend* dvb_dummy_fe_qpsk_attach(void);
extern struct dvb_frontend* dvb_dummy_fe_qam_attach(void);
static inline struct dvb_frontend *dvb_dummy_fe_ofdm_attach(void)
static inline struct dvb_frontend *dvb_dummy_fe_qpsk_attach(void)
static inline struct dvb_frontend *dvb_dummy_fe_qam_attach(void)

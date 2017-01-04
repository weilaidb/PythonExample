int cxd2820r_set_frontend_c(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
int cxd2820r_get_frontend_c(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
int cxd2820r_read_ber_c(struct dvb_frontend *fe, u32 *ber)
int cxd2820r_read_signal_strength_c(struct dvb_frontend *fe,
u16 *strength)
int cxd2820r_read_snr_c(struct dvb_frontend *fe, u16 *snr)
int cxd2820r_read_ucblocks_c(struct dvb_frontend *fe, u32 *ucblocks)
int cxd2820r_read_status_c(struct dvb_frontend *fe, fe_status_t *status)
int cxd2820r_init_c(struct dvb_frontend *fe)
int cxd2820r_sleep_c(struct dvb_frontend *fe)
int cxd2820r_get_tune_settings_c(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *s)

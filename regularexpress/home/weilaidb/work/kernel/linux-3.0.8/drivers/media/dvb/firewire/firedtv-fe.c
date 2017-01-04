static int fdtv_dvb_init(struct dvb_frontend *fe)
static int fdtv_sleep(struct dvb_frontend *fe)
#define LNBCONTROL_DONTCARE 0xff
static int fdtv_diseqc_send_master_cmd(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *cmd)
static int fdtv_diseqc_send_burst(struct dvb_frontend *fe,
fe_sec_mini_cmd_t minicmd)
static int fdtv_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static int fdtv_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static int fdtv_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int fdtv_read_ber(struct dvb_frontend *fe, u32 *ber)
static int fdtv_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
static int fdtv_read_snr(struct dvb_frontend *fe, u16 *snr)
static int fdtv_read_uncorrected_blocks(struct dvb_frontend *fe, u32 *ucblocks)
static int fdtv_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int fdtv_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int fdtv_get_property(struct dvb_frontend *fe, struct dtv_property *tvp)
static int fdtv_set_property(struct dvb_frontend *fe, struct dtv_property *tvp)
void fdtv_frontend_init(struct firedtv *fdtv, const char *name)

static uint16_t compute_tps(struct dvb_frontend_parameters *p)
struct cinergyt2_fe_state ;
static int cinergyt2_fe_read_status(struct dvb_frontend *fe,
fe_status_t *status)
static int cinergyt2_fe_read_ber(struct dvb_frontend *fe, u32 *ber)
static int cinergyt2_fe_read_unc_blocks(struct dvb_frontend *fe, u32 *unc)
static int cinergyt2_fe_read_signal_strength(struct dvb_frontend *fe,
u16 *strength)
static int cinergyt2_fe_read_snr(struct dvb_frontend *fe, u16 *snr)
static int cinergyt2_fe_init(struct dvb_frontend *fe)
static int cinergyt2_fe_sleep(struct dvb_frontend *fe)
static int cinergyt2_fe_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *tune)
static int cinergyt2_fe_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int cinergyt2_fe_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static void cinergyt2_fe_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops cinergyt2_fe_ops;
struct dvb_frontend *cinergyt2_fe_attach(struct dvb_usb_device *d)
static struct dvb_frontend_ops cinergyt2_fe_ops = ;

struct dvb_dummy_fe_state ;
static int dvb_dummy_fe_read_status(struct dvb_frontend* fe, fe_status_t* status)
static int dvb_dummy_fe_read_ber(struct dvb_frontend* fe, u32* ber)
static int dvb_dummy_fe_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int dvb_dummy_fe_read_snr(struct dvb_frontend* fe, u16* snr)
static int dvb_dummy_fe_read_ucblocks(struct dvb_frontend* fe, u32* ucblocks)
static int dvb_dummy_fe_get_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int dvb_dummy_fe_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int dvb_dummy_fe_sleep(struct dvb_frontend* fe)
static int dvb_dummy_fe_init(struct dvb_frontend* fe)
static int dvb_dummy_fe_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int dvb_dummy_fe_set_voltage(struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static void dvb_dummy_fe_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops dvb_dummy_fe_ofdm_ops;
struct dvb_frontend* dvb_dummy_fe_ofdm_attach(void)
static struct dvb_frontend_ops dvb_dummy_fe_qpsk_ops;
struct dvb_frontend *dvb_dummy_fe_qpsk_attach(void)
static struct dvb_frontend_ops dvb_dummy_fe_qam_ops;
struct dvb_frontend *dvb_dummy_fe_qam_attach(void)
static struct dvb_frontend_ops dvb_dummy_fe_ofdm_ops = ;
static struct dvb_frontend_ops dvb_dummy_fe_qam_ops = ;
static struct dvb_frontend_ops dvb_dummy_fe_qpsk_ops = ;
MODULE_DESCRIPTION("DVB DUMMY Frontend");
MODULE_AUTHOR("Emard");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(dvb_dummy_fe_ofdm_attach);
EXPORT_SYMBOL(dvb_dummy_fe_qam_attach);
EXPORT_SYMBOL(dvb_dummy_fe_qpsk_attach);

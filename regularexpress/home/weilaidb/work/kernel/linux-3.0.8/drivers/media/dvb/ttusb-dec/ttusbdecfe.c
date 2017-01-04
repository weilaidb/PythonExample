#define LOF_HI			10600000
#define LOF_LO			9750000
struct ttusbdecfe_state ;
static int ttusbdecfe_dvbs_read_status(struct dvb_frontend *fe,
fe_status_t *status)
static int ttusbdecfe_dvbt_read_status(struct dvb_frontend *fe,
fe_status_t *status)
static int ttusbdecfe_dvbt_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int ttusbdecfe_dvbt_get_tune_settings(struct dvb_frontend* fe,
struct dvb_frontend_tune_settings* fesettings)
static int ttusbdecfe_dvbs_set_frontend(struct dvb_frontend* fe, struct dvb_frontend_parameters *p)
static int ttusbdecfe_dvbs_diseqc_send_master_cmd(struct dvb_frontend* fe, struct dvb_diseqc_master_cmd *cmd)
static int ttusbdecfe_dvbs_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int ttusbdecfe_dvbs_set_voltage(struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static void ttusbdecfe_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops ttusbdecfe_dvbt_ops;
struct dvb_frontend* ttusbdecfe_dvbt_attach(const struct ttusbdecfe_config* config)
static struct dvb_frontend_ops ttusbdecfe_dvbs_ops;
struct dvb_frontend* ttusbdecfe_dvbs_attach(const struct ttusbdecfe_config* config)
static struct dvb_frontend_ops ttusbdecfe_dvbt_ops = ;
static struct dvb_frontend_ops ttusbdecfe_dvbs_ops = ;
MODULE_DESCRIPTION("TTUSB DEC DVB-T/S Demodulator driver");
MODULE_AUTHOR("Alex Woods/Andrew de Quincey");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(ttusbdecfe_dvbt_attach);
EXPORT_SYMBOL(ttusbdecfe_dvbs_attach);

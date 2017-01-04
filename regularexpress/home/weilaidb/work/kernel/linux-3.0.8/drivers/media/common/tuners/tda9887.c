static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable verbose debug messages");
static DEFINE_MUTEX(tda9887_list_mutex);
static LIST_HEAD(hybrid_tuner_instance_list);
struct tda9887_priv ;
#define UNSET       (-1U)
struct tvnorm ;
#define cVideoTrapBypassOFF     0x00
#define cVideoTrapBypassON      0x01
#define cAutoMuteFmInactive     0x00
#define cAutoMuteFmActive       0x02
#define cIntercarrier           0x00
#define cQSS                    0x04
#define cPositiveAmTV           0x00
#define cFmRadio                0x08
#define cNegativeFmTV           0x10
#define cForcedMuteAudioON      0x20
#define cForcedMuteAudioOFF     0x00
#define cOutputPort1Active      0x00
#define cOutputPort1Inactive    0x40
#define cOutputPort2Active      0x00
#define cOutputPort2Inactive    0x80
#define cDeemphasisOFF          0x00
#define cDeemphasisON           0x20
#define cDeemphasis75           0x00
#define cDeemphasis50           0x40
#define cAudioGain0             0x00
#define cAudioGain6             0x80
#define cTopMask                0x1f
#define cTopDefault		0x10
#define cAudioIF_4_5             0x00
#define cAudioIF_5_5             0x01
#define cAudioIF_6_0             0x02
#define cAudioIF_6_5             0x03
#define cVideoIFMask		0x1c
#define cVideoIF_58_75           0x00
#define cVideoIF_45_75           0x04
#define cVideoIF_38_90           0x08
#define cVideoIF_38_00           0x0C
#define cVideoIF_33_90           0x10
#define cVideoIF_33_40           0x14
#define cRadioIF_45_75           0x18
#define cRadioIF_38_90           0x1C
#define cRadioIF_33_30		0x00
#define cRadioIF_41_30		0x04
#define cRadioAGC_SIF		0x00
#define cRadioAGC_FM		0x08
#define cTunerGainNormal         0x00
#define cTunerGainLow            0x20
#define cGating_18               0x00
#define cGating_36               0x40
#define cAgcOutON                0x80
#define cAgcOutOFF               0x00
static struct tvnorm tvnorms[] = ;
static struct tvnorm radio_stereo = ;
static struct tvnorm radio_mono = ;
static void dump_read_message(struct dvb_frontend *fe, unsigned char *buf)
static void dump_write_message(struct dvb_frontend *fe, unsigned char *buf)
static int tda9887_set_tvnorm(struct dvb_frontend *fe)
static unsigned int port1  = UNSET;
static unsigned int port2  = UNSET;
static unsigned int qss    = UNSET;
static unsigned int adjust = UNSET;
module_param(port1, int, 0644);
module_param(port2, int, 0644);
module_param(qss, int, 0644);
module_param(adjust, int, 0644);
static int tda9887_set_insmod(struct dvb_frontend *fe)
static int tda9887_do_config(struct dvb_frontend *fe)
static int tda9887_status(struct dvb_frontend *fe)
static void tda9887_configure(struct dvb_frontend *fe)
static void tda9887_tuner_status(struct dvb_frontend *fe)
static int tda9887_get_afc(struct dvb_frontend *fe)
static void tda9887_standby(struct dvb_frontend *fe)
static void tda9887_set_params(struct dvb_frontend *fe,
struct analog_parameters *params)
static int tda9887_set_config(struct dvb_frontend *fe, void *priv_cfg)
static void tda9887_release(struct dvb_frontend *fe)
static struct analog_demod_ops tda9887_ops = ;
struct dvb_frontend *tda9887_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c_adap,
u8 i2c_addr)
EXPORT_SYMBOL_GPL(tda9887_attach);
MODULE_LICENSE("GPL");

struct bcm3510_state ;
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,2=i2c (|-able)).");
#define dprintk(level,x...) if (level & debug) printk(x)
#define dbufout(b,l,m)
#define deb_info(args...) dprintk(0x01,args)
#define deb_i2c(args...)  dprintk(0x02,args)
#define deb_hab(args...)  dprintk(0x04,args)
static int bcm3510_writebytes (struct bcm3510_state *state, u8 reg, u8 *buf, u8 len)
static int bcm3510_readbytes (struct bcm3510_state *state, u8 reg, u8 *buf, u8 len)
static int bcm3510_writeB(struct bcm3510_state *state, u8 reg, bcm3510_register_value v)
static int bcm3510_readB(struct bcm3510_state *state, u8 reg, bcm3510_register_value *v)
static int bcm3510_hab_get_response(struct bcm3510_state *st, u8 *buf, int len)
static int bcm3510_hab_send_request(struct bcm3510_state *st, u8 *buf, int len)
static int bcm3510_do_hab_cmd(struct bcm3510_state *st, u8 cmd, u8 msgid, u8 *obuf, u8 olen, u8 *ibuf, u8 ilen)
static int bcm3510_bert_reset(struct bcm3510_state *st)
static int bcm3510_refresh_state(struct bcm3510_state *st)
static int bcm3510_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int bcm3510_read_ber(struct dvb_frontend* fe, u32* ber)
static int bcm3510_read_unc(struct dvb_frontend* fe, u32* unc)
static int bcm3510_read_signal_strength(struct dvb_frontend* fe, u16* strength)
static int bcm3510_read_snr(struct dvb_frontend* fe, u16* snr)
static int bcm3510_tuner_cmd(struct bcm3510_state* st,u8 bc, u16 n, u8 a)
static int bcm3510_set_freq(struct bcm3510_state* st,u32 freq)
static int bcm3510_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *p)
static int bcm3510_sleep(struct dvb_frontend* fe)
static int bcm3510_get_tune_settings(struct dvb_frontend *fe, struct dvb_frontend_tune_settings *s)
static void bcm3510_release(struct dvb_frontend* fe)
#define BCM3510_DEFAULT_FIRMWARE "dvb-fe-bcm3510-01.fw"
static int bcm3510_write_ram(struct bcm3510_state *st, u16 addr, const u8 *b,
u16 len)
static int bcm3510_download_firmware(struct dvb_frontend* fe)
static int bcm3510_check_firmware_version(struct bcm3510_state *st)
static int bcm3510_reset(struct bcm3510_state *st)
static int bcm3510_clear_reset(struct bcm3510_state *st)
static int bcm3510_init_cold(struct bcm3510_state *st)
static int bcm3510_init(struct dvb_frontend* fe)
static struct dvb_frontend_ops bcm3510_ops;
struct dvb_frontend* bcm3510_attach(const struct bcm3510_config *config,
struct i2c_adapter *i2c)
EXPORT_SYMBOL(bcm3510_attach);
static struct dvb_frontend_ops bcm3510_ops = ;
MODULE_DESCRIPTION("Broadcom BCM3510 ATSC (8VSB/16VSB & ITU J83 AnnexB FEC QAM64/256) demodulator driver");
MODULE_AUTHOR("Patrick Boettcher <patrick.boettcher@desy.de>");
MODULE_LICENSE("GPL");

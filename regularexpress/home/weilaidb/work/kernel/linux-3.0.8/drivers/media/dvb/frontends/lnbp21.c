struct lnbp21 ;
static int lnbp21_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static int lnbp21_enable_high_lnb_voltage(struct dvb_frontend *fe, long arg)
static int lnbp21_set_tone(struct dvb_frontend *fe,
fe_sec_tone_mode_t tone)
static void lnbp21_release(struct dvb_frontend *fe)
static struct dvb_frontend *lnbx2x_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, u8 override_set,
u8 override_clear, u8 i2c_addr, u8 config)
struct dvb_frontend *lnbh24_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, u8 override_set,
u8 override_clear, u8 i2c_addr)
EXPORT_SYMBOL(lnbh24_attach);
struct dvb_frontend *lnbp21_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c, u8 override_set,
u8 override_clear)
EXPORT_SYMBOL(lnbp21_attach);
MODULE_DESCRIPTION("Driver for lnb supply and control ic lnbp21, lnbh24");
MODULE_AUTHOR("Oliver Endriss, Igor M. Liplianin");
MODULE_LICENSE("GPL");

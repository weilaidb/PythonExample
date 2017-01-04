struct isl6405 ;
static int isl6405_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int isl6405_enable_high_lnb_voltage(struct dvb_frontend *fe, long arg)
static void isl6405_release(struct dvb_frontend *fe)
struct dvb_frontend *isl6405_attach(struct dvb_frontend *fe, struct i2c_adapter *i2c,
u8 i2c_addr, u8 override_set, u8 override_clear)
EXPORT_SYMBOL(isl6405_attach);
MODULE_DESCRIPTION("Driver for lnb supply and control ic isl6405");
MODULE_AUTHOR("Hartmut Hackmann & Oliver Endriss");
MODULE_LICENSE("GPL");

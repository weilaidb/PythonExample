struct tua6100_priv ;
static int tua6100_release(struct dvb_frontend *fe)
static int tua6100_sleep(struct dvb_frontend *fe)
static int tua6100_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int tua6100_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static struct dvb_tuner_ops tua6100_tuner_ops = ;
struct dvb_frontend *tua6100_attach(struct dvb_frontend *fe, int addr, struct i2c_adapter *i2c)
EXPORT_SYMBOL(tua6100_attach);
MODULE_DESCRIPTION("DVB tua6100 driver");
MODULE_AUTHOR("Andrew de Quincey");
MODULE_LICENSE("GPL");

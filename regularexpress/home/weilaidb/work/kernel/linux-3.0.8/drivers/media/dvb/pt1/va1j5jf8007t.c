enum va1j5jf8007t_tune_state ;
struct va1j5jf8007t_state ;
static int va1j5jf8007t_read_snr(struct dvb_frontend *fe, u16 *snr)
static int va1j5jf8007t_get_frontend_algo(struct dvb_frontend *fe)
static int
va1j5jf8007t_read_status(struct dvb_frontend *fe, fe_status_t *status)
struct va1j5jf8007t_cb_map ;
static const struct va1j5jf8007t_cb_map va1j5jf8007t_cb_maps[] = ;
static u8 va1j5jf8007t_lookup_cb(u32 frequency)
static int va1j5jf8007t_set_frequency(struct va1j5jf8007t_state *state)
static int
va1j5jf8007t_check_frequency(struct va1j5jf8007t_state *state, int *lock)
static int va1j5jf8007t_set_modulation(struct va1j5jf8007t_state *state)
static int va1j5jf8007t_check_modulation(struct va1j5jf8007t_state *state,
int *lock, int *retry)
static int
va1j5jf8007t_tune(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params,
unsigned int mode_flags,  unsigned int *delay,
fe_status_t *status)
static int va1j5jf8007t_init_frequency(struct va1j5jf8007t_state *state)
static int va1j5jf8007t_set_sleep(struct va1j5jf8007t_state *state, int sleep)
static int va1j5jf8007t_sleep(struct dvb_frontend *fe)
static int va1j5jf8007t_init(struct dvb_frontend *fe)
static void va1j5jf8007t_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops va1j5jf8007t_ops = ;
static const u8 va1j5jf8007t_20mhz_prepare_bufs[][2] = ;
static const u8 va1j5jf8007t_25mhz_prepare_bufs[][2] = ;
int va1j5jf8007t_prepare(struct dvb_frontend *fe)
struct dvb_frontend *
va1j5jf8007t_attach(const struct va1j5jf8007t_config *config,
struct i2c_adapter *adap)

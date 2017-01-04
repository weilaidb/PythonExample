enum va1j5jf8007s_tune_state ;
struct va1j5jf8007s_state ;
static int va1j5jf8007s_read_snr(struct dvb_frontend *fe, u16 *snr)
static int va1j5jf8007s_get_frontend_algo(struct dvb_frontend *fe)
static int
va1j5jf8007s_read_status(struct dvb_frontend *fe, fe_status_t *status)
struct va1j5jf8007s_cb_map ;
static const struct va1j5jf8007s_cb_map va1j5jf8007s_cb_maps[] = ;
static u8 va1j5jf8007s_lookup_cb(u32 frequency)
static int va1j5jf8007s_set_frequency_1(struct va1j5jf8007s_state *state)
static int va1j5jf8007s_set_frequency_2(struct va1j5jf8007s_state *state)
static int va1j5jf8007s_set_frequency_3(struct va1j5jf8007s_state *state)
static int
va1j5jf8007s_check_frequency(struct va1j5jf8007s_state *state, int *lock)
static int va1j5jf8007s_set_modulation(struct va1j5jf8007s_state *state)
static int
va1j5jf8007s_check_modulation(struct va1j5jf8007s_state *state, int *lock)
static int
va1j5jf8007s_set_ts_id(struct va1j5jf8007s_state *state)
static int
va1j5jf8007s_check_ts_id(struct va1j5jf8007s_state *state, int *lock)
static int
va1j5jf8007s_tune(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params,
unsigned int mode_flags,  unsigned int *delay,
fe_status_t *status)
static int va1j5jf8007s_init_frequency(struct va1j5jf8007s_state *state)
static int va1j5jf8007s_set_sleep(struct va1j5jf8007s_state *state, int sleep)
static int va1j5jf8007s_sleep(struct dvb_frontend *fe)
static int va1j5jf8007s_init(struct dvb_frontend *fe)
static void va1j5jf8007s_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops va1j5jf8007s_ops = ;
static int va1j5jf8007s_prepare_1(struct va1j5jf8007s_state *state)
static const u8 va1j5jf8007s_20mhz_prepare_bufs[][2] = ;
static const u8 va1j5jf8007s_25mhz_prepare_bufs[][2] = ;
static int va1j5jf8007s_prepare_2(struct va1j5jf8007s_state *state)
int va1j5jf8007s_prepare(struct dvb_frontend *fe)
struct dvb_frontend *
va1j5jf8007s_attach(const struct va1j5jf8007s_config *config,
struct i2c_adapter *adap)

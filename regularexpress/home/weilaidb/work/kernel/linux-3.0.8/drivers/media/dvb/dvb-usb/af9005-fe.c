struct af9005_fe_state ;
static int af9005_write_word_agc(struct dvb_usb_device *d, u16 reghi,
u16 reglo, u8 pos, u8 len, u16 value)
static int af9005_read_word_agc(struct dvb_usb_device *d, u16 reghi,
u16 reglo, u8 pos, u8 len, u16 * value)
static int af9005_is_fecmon_available(struct dvb_frontend *fe, int *available)
static int af9005_get_post_vit_err_cw_count(struct dvb_frontend *fe,
u32 * post_err_count,
u32 * post_cw_count,
u16 * abort_count)
static int af9005_get_post_vit_ber(struct dvb_frontend *fe,
u32 * post_err_count, u32 * post_cw_count,
u16 * abort_count)
static int af9005_get_pre_vit_err_bit_count(struct dvb_frontend *fe,
u32 * pre_err_count,
u32 * pre_bit_count)
static int af9005_reset_pre_viterbi(struct dvb_frontend *fe)
static int af9005_reset_post_viterbi(struct dvb_frontend *fe)
static int af9005_get_statistic(struct dvb_frontend *fe)
static int af9005_fe_refresh_state(struct dvb_frontend *fe)
static int af9005_fe_read_status(struct dvb_frontend *fe, fe_status_t * stat)
static int af9005_fe_read_ber(struct dvb_frontend *fe, u32 * ber)
static int af9005_fe_read_unc_blocks(struct dvb_frontend *fe, u32 * unc)
static int af9005_fe_read_signal_strength(struct dvb_frontend *fe,
u16 * strength)
static int af9005_fe_read_snr(struct dvb_frontend *fe, u16 * snr)
static int af9005_fe_program_cfoe(struct dvb_usb_device *d, fe_bandwidth_t bw)
static int af9005_fe_select_bw(struct dvb_usb_device *d, fe_bandwidth_t bw)
static int af9005_fe_power(struct dvb_frontend *fe, int on)
static struct mt2060_config af9005_mt2060_config = ;
static struct qt1010_config af9005_qt1010_config = ;
static int af9005_fe_init(struct dvb_frontend *fe)
static int af9005_fe_sleep(struct dvb_frontend *fe)
static int af9005_ts_bus_ctrl(struct dvb_frontend *fe, int acquire)
static int af9005_fe_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static int af9005_fe_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *fep)
static void af9005_fe_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops af9005_fe_ops;
struct dvb_frontend *af9005_fe_attach(struct dvb_usb_device *d)
static struct dvb_frontend_ops af9005_fe_ops = ;

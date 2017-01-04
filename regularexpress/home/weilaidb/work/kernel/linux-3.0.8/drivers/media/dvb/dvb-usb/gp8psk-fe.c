struct gp8psk_fe_state ;
static int gp8psk_tuned_to_DCII(struct dvb_frontend *fe)
static int gp8psk_set_tuner_mode(struct dvb_frontend *fe, int mode)
static int gp8psk_fe_update_status(struct gp8psk_fe_state *st)
static int gp8psk_fe_read_status(struct dvb_frontend* fe, fe_status_t *status)
static int gp8psk_fe_read_ber(struct dvb_frontend* fe, u32 *ber)
static int gp8psk_fe_read_unc_blocks(struct dvb_frontend* fe, u32 *unc)
static int gp8psk_fe_read_snr(struct dvb_frontend* fe, u16 *snr)
static int gp8psk_fe_read_signal_strength(struct dvb_frontend* fe, u16 *strength)
static int gp8psk_fe_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings *tune)
static int gp8psk_fe_set_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
static int gp8psk_fe_get_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
static int gp8psk_fe_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int gp8psk_fe_send_diseqc_msg (struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd *m)
static int gp8psk_fe_send_diseqc_burst (struct dvb_frontend* fe,
fe_sec_mini_cmd_t burst)
static int gp8psk_fe_set_tone (struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int gp8psk_fe_set_voltage (struct dvb_frontend* fe, fe_sec_voltage_t voltage)
static int gp8psk_fe_enable_high_lnb_voltage(struct dvb_frontend* fe, long onoff)
static int gp8psk_fe_send_legacy_dish_cmd (struct dvb_frontend* fe, unsigned long sw_cmd)
static void gp8psk_fe_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops gp8psk_fe_ops;
struct dvb_frontend * gp8psk_fe_attach(struct dvb_usb_device *d)
static struct dvb_frontend_ops gp8psk_fe_ops = ;

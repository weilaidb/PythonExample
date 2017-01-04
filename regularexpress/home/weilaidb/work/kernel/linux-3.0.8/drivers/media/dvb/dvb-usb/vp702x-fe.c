struct vp702x_fe_state ;
static int vp702x_fe_refresh_state(struct vp702x_fe_state *st)
static u8 vp702x_chksum(u8 *buf,int f, int count)
static int vp702x_fe_read_status(struct dvb_frontend* fe, fe_status_t *status)
static int vp702x_fe_read_ber(struct dvb_frontend* fe, u32 *ber)
static int vp702x_fe_read_unc_blocks(struct dvb_frontend* fe, u32 *unc)
static int vp702x_fe_read_signal_strength(struct dvb_frontend* fe, u16 *strength)
static int vp702x_fe_read_snr(struct dvb_frontend* fe, u16 *snr)
static int vp702x_fe_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings *tune)
static int vp702x_fe_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int vp702x_fe_init(struct dvb_frontend *fe)
static int vp702x_fe_sleep(struct dvb_frontend *fe)
static int vp702x_fe_get_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int vp702x_fe_send_diseqc_msg (struct dvb_frontend* fe,
struct dvb_diseqc_master_cmd *m)
static int vp702x_fe_send_diseqc_burst (struct dvb_frontend* fe, fe_sec_mini_cmd_t burst)
static int vp702x_fe_set_tone(struct dvb_frontend* fe, fe_sec_tone_mode_t tone)
static int vp702x_fe_set_voltage (struct dvb_frontend* fe, fe_sec_voltage_t
voltage)
static void vp702x_fe_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops vp702x_fe_ops;
struct dvb_frontend * vp702x_fe_attach(struct dvb_usb_device *d)
static struct dvb_frontend_ops vp702x_fe_ops = ;

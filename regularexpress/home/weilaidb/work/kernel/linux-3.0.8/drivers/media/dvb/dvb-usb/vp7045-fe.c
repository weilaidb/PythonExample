struct vp7045_fe_state ;
static int vp7045_fe_read_status(struct dvb_frontend* fe, fe_status_t *status)
static int vp7045_fe_read_ber(struct dvb_frontend* fe, u32 *ber)
static int vp7045_fe_read_unc_blocks(struct dvb_frontend* fe, u32 *unc)
static int vp7045_fe_read_signal_strength(struct dvb_frontend* fe, u16 *strength)
static int vp7045_fe_read_snr(struct dvb_frontend* fe, u16 *snr)
static int vp7045_fe_init(struct dvb_frontend* fe)
static int vp7045_fe_sleep(struct dvb_frontend* fe)
static int vp7045_fe_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings *tune)
static int vp7045_fe_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int vp7045_fe_get_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static void vp7045_fe_release(struct dvb_frontend* fe)
static struct dvb_frontend_ops vp7045_fe_ops;
struct dvb_frontend * vp7045_fe_attach(struct dvb_usb_device *d)
static struct dvb_frontend_ops vp7045_fe_ops = ;

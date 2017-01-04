struct jdvbt90502_state ;
static int jdvbt90502_reg_read(struct jdvbt90502_state *state,
const u16 reg, u8 *buf, const size_t count)
static int jdvbt90502_single_reg_write(struct jdvbt90502_state *state,
const u8 reg, const u8 val)
static int _jdvbt90502_write(struct dvb_frontend *fe, const u8 buf[], int len)
static int jdvbt90502_pll_read(struct jdvbt90502_state *state, u8 *result)
static int jdvbt90502_pll_set_freq(struct jdvbt90502_state *state, u32 freq)
static int jdvbt90502_read_status(struct dvb_frontend *fe, fe_status_t *state)
static int jdvbt90502_read_signal_strength(struct dvb_frontend *fe,
u16 *strength)
static int jdvbt90502_set_property(struct dvb_frontend *fe,
struct dtv_property *tvp)
static int jdvbt90502_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static int jdvbt90502_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static u8 init_code[][2] = ;
static const int init_code_len = sizeof(init_code) / sizeof(u8[2]);
static int jdvbt90502_init(struct dvb_frontend *fe)
static void jdvbt90502_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops jdvbt90502_ops;
struct dvb_frontend *jdvbt90502_attach(struct dvb_usb_device *d)
static struct dvb_frontend_ops jdvbt90502_ops = ;

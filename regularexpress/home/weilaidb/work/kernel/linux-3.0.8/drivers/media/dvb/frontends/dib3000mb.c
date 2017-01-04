#define DRIVER_VERSION "0.1"
#define DRIVER_DESC "DiBcom 3000M-B DVB-T demodulator"
#define DRIVER_AUTHOR "Patrick Boettcher, patrick.boettcher@desy.de"
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "set debugging level (1=info,2=xfer,4=setfe,8=getfe (|-able)).");
#define deb_info(args...) dprintk(0x01,args)
#define deb_i2c(args...)  dprintk(0x02,args)
#define deb_srch(args...) dprintk(0x04,args)
#define deb_info(args...) dprintk(0x01,args)
#define deb_xfer(args...) dprintk(0x02,args)
#define deb_setf(args...) dprintk(0x04,args)
#define deb_getf(args...) dprintk(0x08,args)
static int dib3000_read_reg(struct dib3000_state *state, u16 reg)
static int dib3000_write_reg(struct dib3000_state *state, u16 reg, u16 val)
static int dib3000_search_status(u16 irq,u16 lock)
static u16 dib3000_seq[2][2][2] =
;
static int dib3000mb_get_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep);
static int dib3000mb_set_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep, int tuner)
static int dib3000mb_fe_init(struct dvb_frontend* fe, int mobile_mode)
static int dib3000mb_get_frontend(struct dvb_frontend* fe,
struct dvb_frontend_parameters *fep)
static int dib3000mb_read_status(struct dvb_frontend* fe, fe_status_t *stat)
static int dib3000mb_read_ber(struct dvb_frontend* fe, u32 *ber)
static int dib3000mb_read_signal_strength(struct dvb_frontend* fe, u16 *strength)
static int dib3000mb_read_snr(struct dvb_frontend* fe, u16 *snr)
static int dib3000mb_read_unc_blocks(struct dvb_frontend* fe, u32 *unc)
static int dib3000mb_sleep(struct dvb_frontend* fe)
static int dib3000mb_fe_get_tune_settings(struct dvb_frontend* fe, struct dvb_frontend_tune_settings *tune)
static int dib3000mb_fe_init_nonmobile(struct dvb_frontend* fe)
static int dib3000mb_set_frontend_and_tuner(struct dvb_frontend* fe, struct dvb_frontend_parameters *fep)
static void dib3000mb_release(struct dvb_frontend* fe)
static int dib3000mb_pid_control(struct dvb_frontend *fe,int index, int pid,int onoff)
static int dib3000mb_fifo_control(struct dvb_frontend *fe, int onoff)
static int dib3000mb_pid_parse(struct dvb_frontend *fe, int onoff)
static int dib3000mb_tuner_pass_ctrl(struct dvb_frontend *fe, int onoff, u8 pll_addr)
static struct dvb_frontend_ops dib3000mb_ops;
struct dvb_frontend* dib3000mb_attach(const struct dib3000_config* config,
struct i2c_adapter* i2c, struct dib_fe_xfer_ops *xfer_ops)
static struct dvb_frontend_ops dib3000mb_ops = ;
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(dib3000mb_attach);

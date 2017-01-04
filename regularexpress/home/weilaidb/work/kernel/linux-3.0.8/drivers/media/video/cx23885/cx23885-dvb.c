static unsigned int debug;
#define dprintk(level, fmt, arg...)\
do  while (0)
static unsigned int alt_tuner;
module_param(alt_tuner, int, 0644);
MODULE_PARM_DESC(alt_tuner, "Enable alternate tuner configuration");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static int dvb_buf_setup(struct videobuf_queue *q,
unsigned int *count, unsigned int *size)
static int dvb_buf_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb, enum v4l2_field field)
static void dvb_buf_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void dvb_buf_release(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static void cx23885_dvb_gate_ctrl(struct cx23885_tsport  *port, int open)
static struct videobuf_queue_ops dvb_qops = ;
static struct s5h1409_config hauppauge_generic_config = ;
static struct tda10048_config hauppauge_hvr1200_config = ;
static struct tda10048_config hauppauge_hvr1210_config = ;
static struct s5h1409_config hauppauge_ezqam_config = ;
static struct s5h1409_config hauppauge_hvr1800lp_config = ;
static struct s5h1409_config hauppauge_hvr1500_config = ;
static struct mt2131_config hauppauge_generic_tunerconfig = ;
static struct lgdt330x_config fusionhdtv_5_express = ;
static struct s5h1409_config hauppauge_hvr1500q_config = ;
static struct s5h1409_config dvico_s5h1409_config = ;
static struct s5h1411_config dvico_s5h1411_config = ;
static struct s5h1411_config hcw_s5h1411_config = ;
static struct xc5000_config hauppauge_hvr1500q_tunerconfig = ;
static struct xc5000_config dvico_xc5000_tunerconfig = ;
static struct tda829x_config tda829x_no_probe = ;
static struct tda18271_std_map hauppauge_tda18271_std_map = ;
static struct tda18271_std_map hauppauge_hvr1200_tda18271_std_map = ;
static struct tda18271_config hauppauge_tda18271_config = ;
static struct tda18271_config hauppauge_hvr1200_tuner_config = ;
static struct tda18271_config hauppauge_hvr1210_tuner_config = ;
static struct tda18271_std_map hauppauge_hvr127x_std_map = ;
static struct tda18271_config hauppauge_hvr127x_config = ;
static struct lgdt3305_config hauppauge_lgdt3305_config = ;
static struct dibx000_agc_config xc3028_agc_config = ;
static struct dibx000_bandwidth_config xc3028_bw_config = ;
static struct dib7000p_config hauppauge_hvr1400_dib7000_config = ;
static struct zl10353_config dvico_fusionhdtv_xc3028 = ;
static struct stv0900_reg stv0900_ts_regs[] = ;
static struct stv0900_config netup_stv0900_config = ;
static struct stv6110_config netup_stv6110_tunerconfig_a = ;
static struct stv6110_config netup_stv6110_tunerconfig_b = ;
static struct cx24116_config tbs_cx24116_config = ;
static struct ds3000_config tevii_ds3000_config = ;
static struct cx24116_config dvbworld_cx24116_config = ;
static struct lgs8gxx_config mygica_x8506_lgs8gl5_config = ;
static struct xc5000_config mygica_x8506_xc5000_config = ;
static int cx23885_dvb_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int cx23885_dvb_fe_ioctl_override(struct dvb_frontend *fe,
unsigned int cmd, void *parg,
unsigned int stage)
;
static struct lgs8gxx_config magicpro_prohdtve2_lgs8g75_config = ;
static struct xc5000_config magicpro_prohdtve2_xc5000_config = ;
static struct atbm8830_config mygica_x8558pro_atbm8830_cfg1 = ;
static struct max2165_config mygic_x8558pro_max2165_cfg1 = ;
static struct atbm8830_config mygica_x8558pro_atbm8830_cfg2 = ;
static struct max2165_config mygic_x8558pro_max2165_cfg2 = ;
static struct stv0367_config netup_stv0367_config[] = ;
static struct xc5000_config netup_xc5000_config[] = ;
int netup_altera_fpga_rw(void *device, int flag, int data, int read)
;
static int dvb_register(struct cx23885_tsport *port)
int cx23885_dvb_register(struct cx23885_tsport *port)
int cx23885_dvb_unregister(struct cx23885_tsport *port)

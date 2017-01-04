MODULE_DESCRIPTION("driver for cx2388x based DVB cards");
MODULE_AUTHOR("Chris Pascoe <c.pascoe@itee.uq.edu.au>");
MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,"enable debug messages [dvb]");
static unsigned int dvb_buf_tscnt = 32;
module_param(dvb_buf_tscnt, int, 0644);
MODULE_PARM_DESC(dvb_buf_tscnt, "DVB Buffer TS count [dvb]");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define dprintk(level,fmt, arg...)	if (debug >= level) \
printk(KERN_DEBUG "%s/2-dvb: " fmt, core->name, ## arg)
static int dvb_buf_setup(struct videobuf_queue *q,
unsigned int *count, unsigned int *size)
static int dvb_buf_prepare(struct videobuf_queue *q,
struct videobuf_buffer *vb, enum v4l2_field field)
static void dvb_buf_queue(struct videobuf_queue *q, struct videobuf_buffer *vb)
static void dvb_buf_release(struct videobuf_queue *q,
struct videobuf_buffer *vb)
static const struct videobuf_queue_ops dvb_qops = ;
static int cx88_dvb_bus_ctrl(struct dvb_frontend* fe, int acquire)
static void cx88_dvb_gate_ctrl(struct cx88_core  *core, int open)
static int dvico_fusionhdtv_demod_init(struct dvb_frontend* fe)
static int dvico_dual_demod_init(struct dvb_frontend *fe)
static int dntv_live_dvbt_demod_init(struct dvb_frontend* fe)
static const struct mt352_config dvico_fusionhdtv = ;
static const struct mt352_config dntv_live_dvbt_config = ;
static const struct mt352_config dvico_fusionhdtv_dual = ;
static const struct zl10353_config cx88_terratec_cinergy_ht_pci_mkii_config = ;
static struct mb86a16_config twinhan_vp1027 = ;
#if defined(CONFIG_VIDEO_CX88_VP3054) || (defined(CONFIG_VIDEO_CX88_VP3054_MODULE) && defined(MODULE))
static int dntv_live_dvbt_pro_demod_init(struct dvb_frontend* fe)
static const struct mt352_config dntv_live_dvbt_pro_config = ;
static const struct zl10353_config dvico_fusionhdtv_hybrid = ;
static const struct zl10353_config dvico_fusionhdtv_xc3028 = ;
static const struct mt352_config dvico_fusionhdtv_mt352_xc3028 = ;
static const struct zl10353_config dvico_fusionhdtv_plus_v1_1 = ;
static const struct cx22702_config connexant_refboard_config = ;
static const struct cx22702_config hauppauge_hvr_config = ;
static int or51132_set_ts_param(struct dvb_frontend* fe, int is_punctured)
static const struct or51132_config pchdtv_hd3000 = ;
static int lgdt330x_pll_rf_set(struct dvb_frontend* fe, int index)
static int lgdt330x_set_ts_param(struct dvb_frontend* fe, int is_punctured)
static struct lgdt330x_config fusionhdtv_3_gold = ;
static const struct lgdt330x_config fusionhdtv_5_gold = ;
static const struct lgdt330x_config pchdtv_hd5500 = ;
static int nxt200x_set_ts_param(struct dvb_frontend* fe, int is_punctured)
static const struct nxt200x_config ati_hdtvwonder = ;
static int cx24123_set_ts_param(struct dvb_frontend* fe,
int is_punctured)
static int kworld_dvbs_100_set_voltage(struct dvb_frontend* fe,
fe_sec_voltage_t voltage)
static int geniatech_dvbs_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static int tevii_dvbs_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static int vp1027_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static const struct cx24123_config geniatech_dvbs_config = ;
static const struct cx24123_config hauppauge_novas_config = ;
static const struct cx24123_config kworld_dvbs_100_config = ;
static const struct s5h1409_config pinnacle_pctv_hd_800i_config = ;
static const struct s5h1409_config dvico_hdtv5_pci_nano_config = ;
static const struct s5h1409_config kworld_atsc_120_config = ;
static const struct xc5000_config pinnacle_pctv_hd_800i_tuner_config = ;
static const struct zl10353_config cx88_pinnacle_hybrid_pctv = ;
static const struct zl10353_config cx88_geniatech_x8000_mt = ;
static const struct s5h1411_config dvico_fusionhdtv7_config = ;
static const struct xc5000_config dvico_fusionhdtv7_tuner_config = ;
static int attach_xc3028(u8 addr, struct cx8802_dev *dev)
static int cx24116_set_ts_param(struct dvb_frontend *fe,
int is_punctured)
static int stv0900_set_ts_param(struct dvb_frontend *fe,
int is_punctured)
static int cx24116_reset_device(struct dvb_frontend *fe)
static const struct cx24116_config hauppauge_hvr4000_config = ;
static const struct cx24116_config tevii_s460_config = ;
static int ds3000_set_ts_param(struct dvb_frontend *fe,
int is_punctured)
static struct ds3000_config tevii_ds3000_config = ;
static const struct stv0900_config prof_7301_stv0900_config = ;
static const struct stb6100_config prof_7301_stb6100_config = ;
static const struct stv0299_config tevii_tuner_sharp_config = ;
static const struct stv0288_config tevii_tuner_earda_config = ;
static int cx8802_alloc_frontends(struct cx8802_dev *dev)
static const u8 samsung_smt_7020_inittab[] = ;
static int samsung_smt_7020_tuner_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int samsung_smt_7020_set_tone(struct dvb_frontend *fe,
fe_sec_tone_mode_t tone)
static int samsung_smt_7020_set_voltage(struct dvb_frontend *fe,
fe_sec_voltage_t voltage)
static int samsung_smt_7020_stv0299_set_symbol_rate(struct dvb_frontend *fe,
u32 srate, u32 ratio)
static const struct stv0299_config samsung_stv0299_config = ;
static int dvb_register(struct cx8802_dev *dev)
static int cx8802_dvb_advise_acquire(struct cx8802_driver *drv)
static int cx8802_dvb_advise_release(struct cx8802_driver *drv)
static int cx8802_dvb_probe(struct cx8802_driver *drv)
static int cx8802_dvb_remove(struct cx8802_driver *drv)
static struct cx8802_driver cx8802_dvb_driver = ;
static int __init dvb_init(void)
static void __exit dvb_fini(void)
module_init(dvb_init);
module_exit(dvb_fini);

MODULE_AUTHOR("Gerd Knorr <kraxel@bytesex.org> [SuSE Labs]");
MODULE_LICENSE("GPL");
static unsigned int antenna_pwr;
module_param(antenna_pwr, int, 0444);
MODULE_PARM_DESC(antenna_pwr,"enable antenna power (Pinnacle 300i)");
static int use_frontend;
module_param(use_frontend, int, 0644);
MODULE_PARM_DESC(use_frontend,"for cards with multiple frontends (0: terrestrial, 1: satellite)");
static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off module debugging (default:off).");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define dprintk(fmt, arg...)	do  while(0)
#define wprintk(fmt, arg...) \
printk(KERN_WARNING "%s/dvb: " fmt, dev->name, ## arg)
static int pinnacle_antenna_pwr(struct saa7134_dev *dev, int on)
static int mt352_pinnacle_init(struct dvb_frontend* fe)
static int mt352_aver777_init(struct dvb_frontend* fe)
static int mt352_avermedia_xc3028_init(struct dvb_frontend *fe)
static int mt352_pinnacle_tuner_set_params(struct dvb_frontend* fe,
struct dvb_frontend_parameters* params)
static struct mt352_config pinnacle_300i = ;
static struct mt352_config avermedia_777 = ;
static struct mt352_config avermedia_xc3028_mt352_dev = ;
static struct tda18271_std_map mb86a20s_tda18271_std_map = ;
static struct tda18271_config kworld_tda18271_config = ;
static const struct mb86a20s_config kworld_mb86a20s_config = ;
static int kworld_sbtvd_gate_ctrl(struct dvb_frontend* fe, int enable)
static int philips_tda1004x_request_firmware(struct dvb_frontend *fe,
const struct firmware **fw, char *name)
static int philips_tda6651_pll_set(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static int philips_tu1216_init(struct dvb_frontend *fe)
static struct tda1004x_config philips_tu1216_60_config = ;
static struct tda1004x_config philips_tu1216_61_config = ;
static int philips_td1316_tuner_init(struct dvb_frontend *fe)
static int philips_td1316_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static int philips_td1316_tuner_sleep(struct dvb_frontend *fe)
static int philips_europa_tuner_init(struct dvb_frontend *fe)
static int philips_europa_tuner_sleep(struct dvb_frontend *fe)
static int philips_europa_demod_sleep(struct dvb_frontend *fe)
static struct tda1004x_config philips_europa_config = ;
static struct tda1004x_config medion_cardbus = ;
static struct tda1004x_config technotrend_budget_t3000_config = ;
static int tda8290_i2c_gate_ctrl( struct dvb_frontend* fe, int enable)
static int philips_tda827x_tuner_init(struct dvb_frontend *fe)
static int philips_tda827x_tuner_sleep(struct dvb_frontend *fe)
static int configure_tda827x_fe(struct saa7134_dev *dev,
struct tda1004x_config *cdec_conf,
struct tda827x_config *tuner_conf)
static struct tda827x_config tda827x_cfg_0 = ;
static struct tda827x_config tda827x_cfg_1 = ;
static struct tda827x_config tda827x_cfg_2 = ;
static struct tda827x_config tda827x_cfg_2_sw42 = ;
static struct tda1004x_config tda827x_lifeview_config = ;
static struct tda1004x_config philips_tiger_config = ;
static struct tda1004x_config cinergy_ht_config = ;
static struct tda1004x_config cinergy_ht_pci_config = ;
static struct tda1004x_config philips_tiger_s_config = ;
static struct tda1004x_config pinnacle_pctv_310i_config = ;
static struct tda1004x_config hauppauge_hvr_1110_config = ;
static struct tda1004x_config asus_p7131_dual_config = ;
static struct tda1004x_config lifeview_trio_config = ;
static struct tda1004x_config tevion_dvbt220rf_config = ;
static struct tda1004x_config md8800_dvbt_config = ;
static struct tda1004x_config asus_p7131_4871_config = ;
static struct tda1004x_config asus_p7131_hybrid_lna_config = ;
static struct tda1004x_config kworld_dvb_t_210_config = ;
static struct tda1004x_config avermedia_super_007_config = ;
static struct tda1004x_config twinhan_dtv_dvb_3056_config = ;
static struct tda1004x_config asus_tiger_3in1_config = ;
static int ads_duo_tuner_init(struct dvb_frontend *fe)
static int ads_duo_tuner_sleep(struct dvb_frontend *fe)
static struct tda827x_config ads_duo_cfg = ;
static struct tda1004x_config ads_tech_duo_config = ;
static struct zl10353_config behold_h6_config = ;
static struct xc5000_config behold_x7_tunerconfig = ;
static struct zl10353_config behold_x7_config = ;
static struct tda10086_config flydvbs = ;
static struct tda10086_config sd1878_4m = ;
static int md8800_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
;
static int md8800_set_high_voltage(struct dvb_frontend *fe, long arg)
;
static int md8800_set_voltage2(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int md8800_set_high_voltage2(struct dvb_frontend *fe, long arg)
static struct nxt200x_config avertvhda180 = ;
static struct nxt200x_config kworldatsc110 = ;
static struct mt312_config avertv_a700_mt312 = ;
static struct zl10036_config avertv_a700_tuner = ;
static struct mt312_config zl10313_compro_s350_config = ;
static struct lgdt3305_config hcw_lgdt3305_config = ;
static struct tda10048_config hcw_tda10048_config = ;
static struct tda18271_std_map hauppauge_tda18271_std_map = ;
static struct tda18271_config hcw_tda18271_config = ;
static struct tda829x_config tda829x_no_probe = ;
static struct tda10048_config zolid_tda10048_config = ;
static struct tda18271_config zolid_tda18271_config = ;
static struct tda10048_config dtv1000s_tda10048_config = ;
static struct tda18271_std_map dtv1000s_tda18271_std_map = ;
static struct tda18271_config dtv1000s_tda18271_config = ;
static struct lgs8gxx_config prohdtv_pro2_lgs8g75_config = ;
static struct tda18271_config prohdtv_pro2_tda18271_config = ;
static int dvb_init(struct saa7134_dev *dev)
static int dvb_fini(struct saa7134_dev *dev)
static struct saa7134_mpeg_ops dvb_ops = ;
static int __init dvb_register(void)
static void __exit dvb_unregister(void)
module_init(dvb_register);
module_exit(dvb_unregister);

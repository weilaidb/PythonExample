static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Turn on/off debugging (default:off).");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
#define dprintk( args... ) \
do  while (0)
#define IF_FREQUENCYx6 217
static void dvb_bt8xx_task(unsigned long data)
static int dvb_bt8xx_start_feed(struct dvb_demux_feed *dvbdmxfeed)
static int dvb_bt8xx_stop_feed(struct dvb_demux_feed *dvbdmxfeed)
static int is_pci_slot_eq(struct pci_dev* adev, struct pci_dev* bdev)
static struct bt878 __devinit *dvb_bt8xx_878_match(unsigned int bttv_nr, struct pci_dev* bttv_pci_dev)
static int thomson_dtt7579_demod_init(struct dvb_frontend* fe)
static int thomson_dtt7579_tuner_calc_regs(struct dvb_frontend* fe, struct dvb_frontend_parameters* params, u8* pllbuf, int buf_len)
static struct mt352_config thomson_dtt7579_config = ;
static struct zl10353_config thomson_dtt7579_zl10353_config = ;
static int cx24108_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static int pinnsat_tuner_init(struct dvb_frontend* fe)
static int pinnsat_tuner_sleep(struct dvb_frontend* fe)
static struct cx24110_config pctvsat_config = ;
static int microtune_mt7202dtf_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static int microtune_mt7202dtf_request_firmware(struct dvb_frontend* fe, const struct firmware **fw, char* name)
static struct sp887x_config microtune_mt7202dtf_config = ;
static int advbt771_samsung_tdtc9251dh0_demod_init(struct dvb_frontend* fe)
static int advbt771_samsung_tdtc9251dh0_tuner_calc_regs(struct dvb_frontend* fe, struct dvb_frontend_parameters* params, u8* pllbuf, int buf_len)
static struct mt352_config advbt771_samsung_tdtc9251dh0_config = ;
static struct dst_config dst_config = ;
static int or51211_request_firmware(struct dvb_frontend* fe, const struct firmware **fw, char* name)
static void or51211_setmode(struct dvb_frontend * fe, int mode)
static void or51211_reset(struct dvb_frontend * fe)
static void or51211_sleep(struct dvb_frontend * fe)
static struct or51211_config or51211_config = ;
static int vp3021_alps_tded4_tuner_set_params(struct dvb_frontend* fe, struct dvb_frontend_parameters* params)
static struct nxt6000_config vp3021_alps_tded4_config = ;
static int digitv_alps_tded4_demod_init(struct dvb_frontend* fe)
static int digitv_alps_tded4_tuner_calc_regs(struct dvb_frontend* fe, struct dvb_frontend_parameters* params, u8* pllbuf, int buf_len)
static void digitv_alps_tded4_reset(struct dvb_bt8xx_card *bt)
static struct mt352_config digitv_alps_tded4_config = ;
static struct lgdt330x_config tdvs_tua6034_config = ;
static void lgdt330x_reset(struct dvb_bt8xx_card *bt)
static void frontend_init(struct dvb_bt8xx_card *card, u32 type)
static int __devinit dvb_bt8xx_load_card(struct dvb_bt8xx_card *card, u32 type)
static int __devinit dvb_bt8xx_probe(struct bttv_sub_device *sub)
static void dvb_bt8xx_remove(struct bttv_sub_device *sub)
static struct bttv_sub_driver driver = ;
static int __init dvb_bt8xx_init(void)
static void __exit dvb_bt8xx_exit(void)
module_init(dvb_bt8xx_init);
module_exit(dvb_bt8xx_exit);
MODULE_DESCRIPTION("Bt8xx based DVB adapter driver");
MODULE_AUTHOR("Florian Schirmer <jolt@tuxbox.org>");
MODULE_LICENSE("GPL");

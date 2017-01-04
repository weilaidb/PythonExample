#define FE_SUPPORTED(fe) (defined(CONFIG_DVB_##fe) || \
(defined(CONFIG_DVB_##fe##_MODULE) && defined(MODULE)))
#if FE_SUPPORTED(MT312) || FE_SUPPORTED(STV0299)
static int flexcop_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
#if FE_SUPPORTED(S5H1420) || FE_SUPPORTED(STV0299) || FE_SUPPORTED(MT312)
static int flexcop_sleep(struct dvb_frontend* fe)
#if FE_SUPPORTED(MT312) && FE_SUPPORTED(PLL)
static int flexcop_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static void flexcop_diseqc_send_bit(struct dvb_frontend* fe, int data)
static void flexcop_diseqc_send_byte(struct dvb_frontend* fe, int data)
static int flexcop_send_diseqc_msg(struct dvb_frontend *fe,
int len, u8 *msg, unsigned long burst)
static int flexcop_diseqc_send_master_cmd(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *cmd)
static int flexcop_diseqc_send_burst(struct dvb_frontend *fe,
fe_sec_mini_cmd_t minicmd)
static struct mt312_config skystar23_samsung_tbdu18132_config = ;
static int skystar2_rev23_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define skystar2_rev23_attach NULL
#if FE_SUPPORTED(STV0299) && FE_SUPPORTED(PLL)
static int samsung_tbmu24112_set_symbol_rate(struct dvb_frontend *fe,
u32 srate, u32 ratio)
static u8 samsung_tbmu24112_inittab[] = ;
static struct stv0299_config samsung_tbmu24112_config = ;
static int skystar2_rev26_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define skystar2_rev26_attach NULL
#if FE_SUPPORTED(S5H1420) && FE_SUPPORTED(ISL6421) && FE_SUPPORTED(TUNER_ITD1000)
static struct s5h1420_config skystar2_rev2_7_s5h1420_config = ;
static struct itd1000_config skystar2_rev2_7_itd1000_config = ;
static int skystar2_rev27_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define skystar2_rev27_attach NULL
#if FE_SUPPORTED(CX24123) && FE_SUPPORTED(ISL6421) && FE_SUPPORTED(TUNER_CX24113)
static struct cx24123_config skystar2_rev2_8_cx24123_config = ;
static const struct cx24113_config skystar2_rev2_8_cx24113_config = ;
static int skystar2_rev28_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define skystar2_rev28_attach NULL
#if FE_SUPPORTED(MT352) && FE_SUPPORTED(PLL)
static int samsung_tdtc9251dh0_demod_init(struct dvb_frontend *fe)
static struct mt352_config samsung_tdtc9251dh0_config = ;
static int airstar_dvbt_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define airstar_dvbt_attach NULL
#if FE_SUPPORTED(BCM3510)
static int flexcop_fe_request_firmware(struct dvb_frontend *fe,
const struct firmware **fw, char* name)
static struct bcm3510_config air2pc_atsc_first_gen_config = ;
static int airstar_atsc1_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define airstar_atsc1_attach NULL
#if FE_SUPPORTED(NXT200X) && FE_SUPPORTED(PLL)
static struct nxt200x_config samsung_tbmv_config = ;
static int airstar_atsc2_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define airstar_atsc2_attach NULL
#if FE_SUPPORTED(LGDT330X)
static struct lgdt330x_config air2pc_atsc_hd5000_config = ;
static int airstar_atsc3_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define airstar_atsc3_attach NULL
#if FE_SUPPORTED(STV0297) && FE_SUPPORTED(PLL)
static u8 alps_tdee4_stv0297_inittab[] = ;
static struct stv0297_config alps_tdee4_stv0297_config = ;
static int cablestar2_attach(struct flexcop_device *fc,
struct i2c_adapter *i2c)
#define cablestar2_attach NULL
static struct  flexcop_frontends[] = ;
int flexcop_frontend_init(struct flexcop_device *fc)
void flexcop_frontend_exit(struct flexcop_device *fc)

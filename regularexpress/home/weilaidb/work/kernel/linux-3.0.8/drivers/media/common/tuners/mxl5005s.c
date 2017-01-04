static int debug;
#define dprintk(level, arg...) do  while (0)
#define TUNER_REGS_NUM          104
#define INITCTRL_NUM            40
#define CHCTRL_NUM              39
#define CHCTRL_NUM              36
#define MXLCTRL_NUM             189
#define MASTER_CONTROL_ADDR     9
enum master_control_state ;
enum ;
struct TunerReg ;
enum ;
#define MXL5005S_REG_WRITING_TABLE_LEN_MAX	104
#define MXL5005S_LATCH_BYTE			0xfe
#define MXL5005S_BB_IQSWAP_ADDR			59
#define MXL5005S_BB_IQSWAP_MSB			0
#define MXL5005S_BB_IQSWAP_LSB			0
#define MXL5005S_BB_DLPF_BANDSEL_ADDR		53
#define MXL5005S_BB_DLPF_BANDSEL_MSB		4
#define MXL5005S_BB_DLPF_BANDSEL_LSB		3
enum ;
#define MXL5005S_STANDARD_MODE_NUM		2
enum ;
#define MXL5005S_BANDWIDTH_MODE_NUM		3
struct TunerControl ;
struct mxl5005s_state ;
static u16 MXL_GetMasterControl(u8 *MasterReg, int state);
static u16 MXL_ControlWrite(struct dvb_frontend *fe, u16 ControlNum, u32 value);
static u16 MXL_ControlRead(struct dvb_frontend *fe, u16 controlNum, u32 *value);
static void MXL_RegWriteBit(struct dvb_frontend *fe, u8 address, u8 bit,
u8 bitVal);
static u16 MXL_GetCHRegister(struct dvb_frontend *fe, u8 *RegNum,
u8 *RegVal, int *count);
static u32 MXL_Ceiling(u32 value, u32 resolution);
static u16 MXL_RegRead(struct dvb_frontend *fe, u8 RegNum, u8 *RegVal);
static u16 MXL_ControlWrite_Group(struct dvb_frontend *fe, u16 controlNum,
u32 value, u16 controlGroup);
static u16 MXL_SetGPIO(struct dvb_frontend *fe, u8 GPIO_Num, u8 GPIO_Val);
static u16 MXL_GetInitRegister(struct dvb_frontend *fe, u8 *RegNum,
u8 *RegVal, int *count);
static u32 MXL_GetXtalInt(u32 Xtal_Freq);
static u16 MXL_TuneRF(struct dvb_frontend *fe, u32 RF_Freq);
static void MXL_SynthIFLO_Calc(struct dvb_frontend *fe);
static void MXL_SynthRFTGLO_Calc(struct dvb_frontend *fe);
static u16 MXL_GetCHRegister_ZeroIF(struct dvb_frontend *fe, u8 *RegNum,
u8 *RegVal, int *count);
static int mxl5005s_writeregs(struct dvb_frontend *fe, u8 *addrtable,
u8 *datatable, u8 len);
static u16 MXL_IFSynthInit(struct dvb_frontend *fe);
static int mxl5005s_AssignTunerMode(struct dvb_frontend *fe, u32 mod_type,
u32 bandwidth);
static int mxl5005s_reconfigure(struct dvb_frontend *fe, u32 mod_type,
u32 bandwidth);
static int mxl5005s_SetRfFreqHz(struct dvb_frontend *fe, unsigned long RfFreqHz)
static u16 MXL5005_RegisterInit(struct dvb_frontend *fe)
static u16 MXL5005_ControlInit(struct dvb_frontend *fe)
static void InitTunerControls(struct dvb_frontend *fe)
static u16 MXL5005_TunerConfig(struct dvb_frontend *fe,
u8	Mode,
u8	IF_mode,
u32	Bandwidth,
u32	IF_out,
u32	Fxtal,
u8	AGC_Mode,
u16	TOP,
u16	IF_OUT_LOAD,
u8	CLOCK_OUT,
u8	DIV_OUT,
u8	CAPSELECT,
u8	EN_RSSI,
u8	Mod_Type,
u8	TF_Type
)
static void MXL_SynthIFLO_Calc(struct dvb_frontend *fe)
static void MXL_SynthRFTGLO_Calc(struct dvb_frontend *fe)
static u16 MXL_OverwriteICDefault(struct dvb_frontend *fe)
static u16 MXL_BlockInit(struct dvb_frontend *fe)
static u16 MXL_IFSynthInit(struct dvb_frontend *fe)
static u32 MXL_GetXtalInt(u32 Xtal_Freq)
static u16 MXL_TuneRF(struct dvb_frontend *fe, u32 RF_Freq)
static u16 MXL_SetGPIO(struct dvb_frontend *fe, u8 GPIO_Num, u8 GPIO_Val)
static u16 MXL_ControlWrite(struct dvb_frontend *fe, u16 ControlNum, u32 value)
static u16 MXL_ControlWrite_Group(struct dvb_frontend *fe, u16 controlNum,
u32 value, u16 controlGroup)
static u16 MXL_RegRead(struct dvb_frontend *fe, u8 RegNum, u8 *RegVal)
static u16 MXL_ControlRead(struct dvb_frontend *fe, u16 controlNum, u32 *value)
static void MXL_RegWriteBit(struct dvb_frontend *fe, u8 address, u8 bit,
u8 bitVal)
static u32 MXL_Ceiling(u32 value, u32 resolution)
static u16 MXL_GetInitRegister(struct dvb_frontend *fe, u8 *RegNum,
u8 *RegVal, int *count)
static u16 MXL_GetCHRegister(struct dvb_frontend *fe, u8 *RegNum, u8 *RegVal,
int *count)
static u16 MXL_GetCHRegister_ZeroIF(struct dvb_frontend *fe, u8 *RegNum,
u8 *RegVal, int *count)
static u16 MXL_GetMasterControl(u8 *MasterReg, int state)
static u16 MXL_VCORange_Test(struct dvb_frontend *fe, int VCO_Range)
static u16 MXL_Hystersis_Test(struct dvb_frontend *fe, int Hystersis)
static int mxl5005s_reset(struct dvb_frontend *fe)
static int mxl5005s_writereg(struct dvb_frontend *fe, u8 reg, u8 val, int latch)
static int mxl5005s_writeregs(struct dvb_frontend *fe, u8 *addrtable,
u8 *datatable, u8 len)
static int mxl5005s_init(struct dvb_frontend *fe)
static int mxl5005s_reconfigure(struct dvb_frontend *fe, u32 mod_type,
u32 bandwidth)
static int mxl5005s_AssignTunerMode(struct dvb_frontend *fe, u32 mod_type,
u32 bandwidth)
static int mxl5005s_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static int mxl5005s_get_frequency(struct dvb_frontend *fe, u32 *frequency)
static int mxl5005s_get_bandwidth(struct dvb_frontend *fe, u32 *bandwidth)
static int mxl5005s_release(struct dvb_frontend *fe)
static const struct dvb_tuner_ops mxl5005s_tuner_ops = ;
struct dvb_frontend *mxl5005s_attach(struct dvb_frontend *fe,
struct i2c_adapter *i2c,
struct mxl5005s_config *config)
EXPORT_SYMBOL(mxl5005s_attach);
MODULE_DESCRIPTION("MaxLinear MXL5005S silicon tuner driver");
MODULE_AUTHOR("Steven Toth");
MODULE_LICENSE("GPL");
